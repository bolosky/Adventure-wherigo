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

#define ITEM_GRATE				4
#define ITEM_STEPS				5
#define ITEM_DOOR				6
#define ITEM_SNAKE				7
#define ITEM_MIRROR				10
#define ITEM_PLANT				11
#define ITEM_STALACTITE			13
#define ITEM_FOG				14
#define ITEM_DRAWINGS			18	// Fish and drawings are intentionally the same
#define ITEM_FISH				18
#define ITEM_PIRATE				19
#define ITEM_DRAGON				20
#define ITEM_CHASM				21
#define ITEM_TROLL				22
#define ITEM_OGRE				24
#define ITEM_BASILISK			25
#define ITEM_GONG				26
#define ITEM_DJINN				27
#define ITEM_TORTOISE			28
#define ITEM_STATUE				31
#define ITEM_SLIME				33
#define ITEM_MACHINE			34
#define ITEM_SAFE				35
#define ITEM_THRONE				36
#define ITEM_SKELETON			37
#define ITEM_BEAR				38
#define ITEM_BATTERIES			39
#define ITEM_DINGHY				41
#define ITEM_BAG				42
#define ITEM_CROWN				43
#define ITEM_GOLD				44
#define ITEM_DIAMONDS			45
#define ITEM_SILVER				46
#define ITEM_JEWELRY			47
#define ITEM_COINS				48
#define ITEM_CHEST				49
#define ITEM_EGGS				50
#define ITEM_TRIDENT			51
#define ITEM_HELMET				52
#define ITEM_VASE				53
#define ITEM_POTTERY			54
#define ITEM_EMERALD			55
#define ITEM_SCEPTRE			56
#define ITEM_YACHT				57
#define ITEM_PYRAMID			58
#define ITEM_PEARL				59
#define ITEM_RUG				60
#define ITEM_SPICES				61
#define ITEM_BEADS				62
#define ITEM_CHAIN				63
#define ITEM_RING				64
#define ITEM_SPYGLASS			65
#define ITEM_SCULPTURE			66
#define ITEM_BRACELET			67
#define ITEM_OPALS				68
#define ITEM_PLAQUE				70
#define ITEM_INSCRIPTION		71
#define ITEM_PORTCULLIS			72
#define ITEM_CURTAINS			73
#define ITEM_ROPE				75
#define ITEM_GRILL				76
#define ITEM_DRAIN				77
#define ITEM_ORB				78
#define ITEM_TUSK				80
#define ITEM_CHALICE			81
#define ITEM_UNICORN			82
#define ITEM_SAPPHIRE			83
#define ITEM_DUNG				84
#define ITEM_OWL				85
#define ITEM_WEB				86
#define ITEM_SPIDER				87
#define ITEM_DOCUMENTS			88
#define ITEM_SPOON				89
#define ITEM_HORN				90
#define ITEM_RAT				91
#define ITEM_CRUCIFIX			92
#define ITEM_GATE				93
#define ITEM_BONES				94
#define ITEM_STARSTONE			95
#define ITEM_DRACHMA			97
#define ITEM_KEYS				98
#define ITEM_LAMP				99
#define ITEM_CAGE				100
#define ITEM_BIRD				101
#define ITEM_ROD				102
#define ITEM_PLATE				103
#define ITEM_PILLOW				105
#define ITEM_CLAM				106
#define ITEM_MAGAZINE			108
#define ITEM_FOOD				110
#define ITEM_BOTTLE				111
#define ITEM_WATER				112
#define ITEM_OIL				113
#define ITEM_FLASK				114
#define ITEM_AXE				115
#define ITEM_SWORD				116
#define ITEM_TEETH				117
#define ITEM_VIAL				118
#define ITEM_MUSHROOM			119
#define ITEM_NOTICE				120
#define ITEM_GOBLINS			121
#define ITEM_TREE				122
#define ITEM_RAGS				123
#define ITEM_TABLET				124
#define ITEM_DWARF				134
#define ITEM_GIANT				135
#define ITEM_MIST				584


#define LOCATION_END_OF_ROAD	136
#define LOCATION_BUILDING		141
#define LOCATION_VALLEY			142
#define LOCATION_MT_KING		155
#define LOCATION_Y2				163
#define LOCATION_ORIENTAL		226
#define LOCATION_ROCK_IN_MIST	434

#define COMMAND_BUILDING		141	// interestingly, same as LOCATION_BUILDING

#define COMMAND_SAVE			489
#define COMMAND_RESTORE			490
#define COMMAND_REST			491
#define COMMAND_SAY				493
#define COMMAND_ZORTON			496
#define COMMAND_XYZZY			497
#define COMMAND_THURB			498
#define COMMAND_SNOEZE			499
#define COMMAND_SAMOHT			500
#define COMMAND_PLUGH			501
#define COMMAND_PHUGGG			502
#define COMMAND_NOSIDE			503
#define COMMAND_MELENKURION		504
#define COMMAND_KNERL			505
#define COMMAND_KLAETU			506
#define COMMAND_FOO				507
#define COMMAND_FOE				508
#define COMMAND_FIE				509
#define COMMAND_FEE				510
#define COMMAND_BLERBI			511
#define	COMMAND_NORTH			514
#define COMMAND_NORTHEAST		515
#define COMMAND_EAST			516
#define COMMAND_SOUTHEAST		517
#define COMMAND_SOUTH			518
#define COMMAND_SOUTHWEST		519
#define COMMAND_WEST			520
#define COMMAND_NORTHWEST		521
#define COMMAND_UP				523
#define COMMAND_DOWN			524
#define COMMAND_ENTER			526
#define COMMAND_EXIT			527
#define COMMAND_GO				528
#define COMMAND_RETREAT			530
#define COMMAND_JUMP			531
#define COMMAND_CROSS			532
#define COMMAND_TAKE			534
#define COMMAND_DROP			535
#define COMMAND_OPEN			536
#define COMMAND_CLOSE			538	// Also lock
#define COMMAND_WEAR			539
#define COMMAND_REMOVE			540
#define COMMAND_LISTEN			541
#define COMMAND_TRANSLATE		542
#define COMMAND_CUT				544
#define COMMAND_LIGHT			545
#define COMMAND_EXTINGUISH		546
#define COMMAND_WAVE			547
#define COMMAND_TAME			548
#define COMMAND_KILL			549
#define COMMAND_HIT				550
#define COMMAND_PLAY			552
#define COMMAND_POUR			553
#define COMMAND_EAT				554
#define COMMAND_DRINK			555
#define COMMAND_RUB				556 // also polish
#define COMMAND_THROW			557
#define COMMAND_FEED			559
#define COMMAND_FILL			560
#define COMMAND_LIFT			561
#define COMMAND_READ			562
#define COMMAND_CHANGE			563
#define COMMAND_BREAK			564
#define COMMAND_RIDE			565
#define COMMAND_LOOK			571
#define COMMAND_QUIT			572
#define COMMAND_TERSE			573
#define COMMAND_BRIEF			574
#define COMMAND_VERBOSE			575
#define COMMAND_HISTORY			576
#define COMMAND_NEWS			577
#define COMMAND_HELP			580
#define COMMAND_INFO			585
#define COMMAND_HOOT			592
#define COMMAND_INVENTORY		594
#define COMMAND_SCORE			595
#define COMMAND_BLAST			597
#define COMMAND_CLIMB			598
#define COMMAND_UPSTREAM		599
#define COMMAND_DOWNSTREAM		600
#define COMMAND_REFLECT			603
#define COMMAND_SCRY			604
#define COMMAND_WASH			610

#define MESSAGE_CRAWLED_AROUND	843	// You  have  crawled around in some little passages and wound up back where you started from.

