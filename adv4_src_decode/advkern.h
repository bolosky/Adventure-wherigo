/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#include <setjmp.h>
extern jmp_buf done_with_command; extern int object_type_3_buffer[]; extern int item_location[]; extern short object_type_0_buffer[];
extern short object_type_1_buffer[]; extern short object_type_2_buffer[]; extern short *getObjectPointer(); extern int isObjectFlagSet();
extern int(*command_by_location_dispatch_table[])();
#include "autod1.h"
#ifdef b7
extern v0;
#endif

#define printBlankLine() printMessage(0, 776, 0)

#define ITEM_GRATE						4
#define ITEM_STEPS						5
#define ITEM_DOOR						6
#define ITEM_SNAKE						7
#define ITEM_MIRROR						10
#define ITEM_PLANT						11
#define ITEM_STALACTITE					13
#define ITEM_FOG						14
#define ITEM_DRAWINGS					18 // Fish and drawings are intentionally the same
#define ITEM_FISH						18
#define ITEM_PIRATE						19
#define ITEM_DRAGON						20
#define ITEM_CHASM						21
#define ITEM_TROLL						22
#define MESSAGE_NO_TROLL				23 // The troll is nowhere to be seen.
#define ITEM_OGRE						24
#define ITEM_BASILISK					25
#define ITEM_GONG						26
#define ITEM_DJINN						27
#define ITEM_TORTOISE					28
#define MESSAGE_NOT_PIRATE				29 // There is a message scrawled in the dust in a flowery script, reading: "This is not the maze where the pirate leaves his treasure chest."
#define ITEM_STATUE						31
#define ITEM_SLIME						33 // The  passage  to  the  south is swathed with sheets of evil-looking green slime, which twitches and flows as if aware of your presence.
#define ITEM_MACHINE					34 // There is a massive vending machine here.  The instructions on it read: "Drop coins here to receive fresh batteries."
#define ITEM_SAFE						35 // A  massive  walk-in safe takes up one entire wall.  It is tightly closed, and has no handle, lock, nor keyhole.
#define ITEM_THRONE						36 
#define ITEM_SKELETON					37 // Resting  on  the  throne  ("sitting"  isn't  really the right word) is an incredible skeleton.  It is fairly humanoid from the waist up 
										   // (except for its incredible size and four extra arms);  below that, it  resembles  the body of a giant python, and is wrapped in and around 
										   // the bars and rods of the  throne.   Clutched  in  one  bony  hand  is a long sceptre, ornately encrusted with sapphires!!
#define ITEM_BEAR						38 // There is a ferocious cave bear eying you from the far end of the room!
#define ITEM_BATTERIES					39 // There is a pair of brand-new batteries in the goods tray.
#define ITEM_DINGHY						41 // Lying  upon  the  beach  are the shattered remains of what must once have
										   // been a dinghy.The remains consist of little  more  than  a  few  broken
										   // boards, upon  one of which may be seen a crude sketch of a skull and two
										   // crossed thighbones(perhaps this dinghy was once owned by a cook ? ).
#define ITEM_BAG						42 // There is a bag (obviously filled with pieces of eight) in the dinghy!
#define ITEM_CROWN						43 // There is a massive crown made of solid iridium floating in midair!
#define ITEM_GOLD						44 // There is a large sparkling nugget of gold here!
#define ITEM_DIAMONDS					45 // There are diamonds here!
#define ITEM_SILVER						46
#define ITEM_JEWELRY					47
#define ITEM_COINS						48
#define ITEM_CHEST						49
#define ITEM_EGGS						50
#define ITEM_TRIDENT					51
#define ITEM_HELMET						52
#define ITEM_VASE						53
#define ITEM_SHARDS						54
#define ITEM_EMERALD					55
#define ITEM_SCEPTRE					56
#define ITEM_YACHT						57
#define ITEM_PYRAMID					58
#define ITEM_PEARL						59
#define ITEM_RUG						60
#define ITEM_SPICES						61
#define ITEM_BEADS						62
#define ITEM_CHAIN						63
#define ITEM_RING						64
#define ITEM_SPYGLASS					65
#define ITEM_SCULPTURE					66
#define ITEM_BRACELET					67
#define ITEM_OPALS						68
#define ITEM_PLAQUE						70
#define ITEM_INSCRIPTION				71
#define ITEM_PORTCULLIS					72
#define ITEM_CURTAINS					73
#define ITEM_ROPE						75
#define ITEM_GRILL						76
#define ITEM_DRAIN						77
#define ITEM_ORB						78
#define MESSAGE_GLOBE_IN_DEPRESSION		79 // A glistening globe lies in a small depression on the sloping cellar floor.
#define ITEM_TUSK						80
#define ITEM_CHALICE					81
#define ITEM_UNICORN					82
#define ITEM_SAPPHIRE					83
#define ITEM_DUNG						84
#define ITEM_OWL						85
#define ITEM_WEB						86
#define ITEM_SPIDER						87
#define ITEM_DOCUMENTS					88
#define ITEM_SPOON						89
#define ITEM_HORN						90
#define ITEM_RAT						91
#define ITEM_CRUCIFIX					92
#define ITEM_GATE						93
#define ITEM_BONES						94
#define ITEM_STARSTONE					95
#define ITEM_DRACHMA					97
#define ITEM_KEYS						98
#define ITEM_LAMP						99
#define ITEM_CAGE						100
#define ITEM_BIRD						101
#define ITEM_ROD						102
#define ITEM_PLATE						103
#define ITEM_ROD_WITH_MARK				104 // A three foot black rod with a rusty mark on an end lies nearby.
#define ITEM_PILLOW						105
#define ITEM_CLAM						106
#define ITEM_OYSTER						107 // There is an enormous oyster here with its shell tightly closed.
#define ITEM_MAGAZINE					108
#define ITEM_FOOD						110
#define ITEM_BOTTLE						111
#define ITEM_WATER						112
#define ITEM_OIL						113
#define ITEM_FLASK						114
#define ITEM_AXE						115
#define ITEM_SWORD						116
#define ITEM_TEETH						117
#define ITEM_VIAL						118
#define ITEM_MUSHROOM					119
#define ITEM_NOTICE						120
#define ITEM_GOBLINS					121
#define ITEM_TREE						122
#define ITEM_RAGS						123
#define ITEM_TABLET						124
#define ITEM_DWARF						134
#define ITEM_GIANT						135



#define LOCATION_END_OF_ROAD			136
#define LOCATION_MAGNIFICENT_VIEW		140
#define LOCATION_BUILDING				141
#define LOCATION_VALLEY					142
#define LOCATION_OUTSIDE_GRATE			144
#define LOCATION_MT_KING				155
#define LOCATION_Y2						163
#define LOCATION_SLAB_ROOM				209
#define LOCATION_GIANT_ROOM				222
#define LOCATION_ORIENTAL				226
#define LOCATION_PLOVER					228
#define LOCATION_WITTS_END				236
#define LOCATION_GRAY_NOWHERE			243
#define LOCATION_SOUTH_END_STONE_FACES	253	// South end of the valley of the stone faces
#define LOCATION_CELLAR					393
#define LOCATION_ROCK_IN_MIST			434
#define LOCATION_PANTRY					412

#define COMMAND_BUILDING				141	// interestingly, same as LOCATION_BUILDING
#define LOCATION_DWARVES_STORES			435

#define LOCATION_LIMBO					485	// Not a real place, where objects get set to when they're gone

#define COMMAND_SAVE					489
#define COMMAND_RESTORE					490
#define COMMAND_REST					491
#define COMMAND_SAY						493
#define COMMAND_ZORTON					496
#define COMMAND_XYZZY					497
#define COMMAND_THURB					498
#define COMMAND_SNOEZE					499
#define COMMAND_SAMOHT					500
#define COMMAND_PLUGH					501
#define COMMAND_PHUGGG					502
#define COMMAND_NOSIDE					503
#define COMMAND_MELENKURION				504
#define COMMAND_KNERL					505
#define COMMAND_KLAETU					506
#define COMMAND_FOO						507
#define COMMAND_FOE						508
#define COMMAND_FIE						509
#define COMMAND_FEE						510
#define COMMAND_BLERBI					511
#define	COMMAND_NORTH					514
#define COMMAND_NORTHEAST				515
#define COMMAND_EAST					516
#define COMMAND_SOUTHEAST				517
#define COMMAND_SOUTH					518
#define COMMAND_SOUTHWEST				519
#define COMMAND_WEST					520
#define COMMAND_NORTHWEST				521
#define COMMAND_UP						523
#define COMMAND_DOWN					524
#define COMMAND_ENTER					526
#define COMMAND_EXIT					527
#define COMMAND_GO						528
#define COMMAND_RETREAT					530
#define COMMAND_JUMP					531
#define COMMAND_CROSS					532
#define COMMAND_TAKE					534
#define COMMAND_DROP					535
#define COMMAND_OPEN					536
#define COMMAND_CLOSE					538	// Also lock
#define COMMAND_WEAR					539
#define COMMAND_REMOVE					540
#define COMMAND_LISTEN					541
#define COMMAND_TRANSLATE				542
#define COMMAND_CUT						544
#define COMMAND_LIGHT					545
#define COMMAND_EXTINGUISH				546
#define COMMAND_WAVE					547
#define COMMAND_TAME					548
#define COMMAND_KILL					549
#define COMMAND_HIT						550
#define COMMAND_PLAY					552
#define COMMAND_POUR					553
#define COMMAND_EAT						554
#define COMMAND_DRINK					555
#define COMMAND_RUB						556 // also polish
#define COMMAND_THROW					557
#define COMMAND_FEED					559
#define COMMAND_FILL					560
#define COMMAND_LIFT					561
#define COMMAND_READ					562
#define COMMAND_CHANGE					563
#define COMMAND_BREAK					564
#define COMMAND_RIDE					565
#define COMMAND_LOOK					571
#define COMMAND_QUIT					572
#define COMMAND_TERSE					573
#define COMMAND_BRIEF					574
#define COMMAND_VERBOSE					575
#define COMMAND_HISTORY					576
#define COMMAND_NEWS					577
#define COMMAND_HELP					580
#define ITEM_MIST						584
#define COMMAND_INFO					585
#define COMMAND_HOOT					592
#define COMMAND_INVENTORY				594
#define COMMAND_SCORE					595
#define COMMAND_BLAST					597
#define COMMAND_CLIMB					598
#define COMMAND_UPSTREAM				599
#define COMMAND_DOWNSTREAM				600
#define COMMAND_REFLECT					603
#define COMMAND_SCRY					604
#define COMMAND_WASH					610

#define PLAYER_LOCATION					671
#define PREVIOUS_LOCATION				672
#define CARRIED_ITEM_COUNT				705
#define FEE_FIE_FOE_FOO_COUNT			714
#define MAX_CARRIED_ITEMS				721
#define SEWAGE_COUNT					732
#define LITTLE_FIGURE_HINT_COUNTER		756		// Counts down to see if you should get a chance at one of the little figure hints
#define THIRST_COUNTER					759		// Counts down until you die of thirst.  Decremented by item count.

#define MESSAGE_NO_X_HERE				818		// I see no * here
#define MESSAGE_CRAWLED_AROUND			843		// You  have  crawled around in some little passages and wound up back where you started from.
#define MESSAGE_NOTHING_HAPPENS			828		// Nothing happens.
#define MESSAGE_HUH						858		// Huh??
#define MESSAGE_BOTTLE_FULL				910		// Your bottle is already full
#define MESSAGE_NOTHING_TO_FILL			911		// There is nothing here to fill the 
#define	MESSAGE_FULL					912		// Your bottle is now full of
#define MESSAGE_FLASK_FULL				913		// Your flask is now full of
#define MESSAGE_CANT_FILL				914		// You can't fill that
#define MESSAGE_RIDICULOUS				915		// Don't be ridiculous
#define MESSAGE_RUSTY					916		// The door is extremely rusty and refuses to open.
#define MESSAGE_INDIGNANT				917		// The plant indignantly shakes the oil off its leaves and asks, "Water?"
#define MESSAGE_RUSTED					918		// The hinges are quite thoroughly rusted now and won't budge.
#define MESSAGE_DOOR_FREE				919		// The  oil has freed up the hinges so that the door will now move, although it requires some effort.
#define MESSAGE_DEEP_ROOTS				920		// The plant has exceptionally deep roots and cannot be pulled free.
#define MESSAGE_POINTLESS				1069	// A bit pointless, under the circumstances, wasn't it?
#define MESSAGE_JUST_AS_WELL			1222	// That may be just as well.  If you do insist on trying to
#define	MESSAGE_SUCKER					1440	// (Fancy the sucker paying for a hint freely available elsewhere!)
#define MESSAGE_OGRE_WARNING			1442	// Are  you  trying to do something about the ogre?Well, whatever weapon you eventually use against that meanie, I would suggest you do  not  get  TOO close using it.
#define MESSAGE_SAFE_HINT				1444	// Are you trying to work out how to open that safe?Well, as an honest, hard working  sprite  I naturally would not know much about such things, but a friend of mine works in another game for Frobozz Magical Safe Company and he reckons that, given the right skeleton key, no  safe  is  ever  really safe, keyhole or no keyhole.
#define MESSAGE_NICKEL					1445	// And electro-plated nickel silver to you too!
#define MESSAGE_DRAGON_DEAD				1446	// Congratulations!  You have just vanquished a dragon with your bare hands! (Unbelievable, isn't it?)
#define MESSAGE_TROLL					1447	// The troll steps out from beneath the bridge and blocks your way.
#define MESSAGE_TROLL_GLOWER			1448	// From  beneath  the  bridge  there  sounds  a muffled bellow of frustrated avarice.  The troll stomps out, resumes his position by the  end  of  the bridge,  and  glowers fiercely in your direction.  "Very funny," you hear him mutter, "but not very smart - you'll pay for that!"
#define MESSAGE_TROLL_EGGS				1449	// The  troll  nimbly  steps  to  one  side and grins nastily as the nest of golden eggs flies past him and plummets into the chasm.  "Fool  me  once, shame on you;  fool me twice, shame on me!" he sneers.  "I want something a touch more substantial this time!"
#define MESSAGE_FIXTURE					1546	// It's just a fixture of no particular significance.
#define MESSAGE_CONFUSED				1662	// Sorry, somehow I think I got confused again...

#define SET_VALUE_DEREFERENCE			1		// set_value should dereference through the source pointer

#define PRINT_MESSAGE_ALWAYS_DEREF_PARAM 1		// Always dereference the parameter in object_type_3_table
#define PRINT_MESSAGE_DEREFERENCE_MSG	2		// the second parameter is a variable containing the message number
#define PRINT_MESSAGE_VERBOSE			16		// Always use the verbose description. Can also be done by setting flag 3 of 697
#define PRINT_MESSAGE_END_COMMAND		64		// after printMessage, end the command and go to the next one

#define LOCATION_FLAG_WATER				9

// Parameters to load_save_game()
#define SAVE_GAME						1
#define	LOAD_GAME						2

#define ITEM_FLAG_TREASURE				5
#define LOCATION_FLAG_SEWAGE			13

