/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int d34() {
	if (isObjectFlagSet(dereference(670), 16)) {
		z5(700, 670); if (object_type_3_buffer[700] > 1) {
			if (currentCommandContains(64))
			{
				set_value(0, 64, 1);
			}
			else { printMessage(76, 1606, 670); }
		}
	}
} int w24() {
	if (object_type_3_buffer[697] == 1)
	{
		if (g10(114, 4) || g10(111, 4) || q8(113, -1)) {
			modifyObjectFlag('s', dereference(697), 5); printMessage(76, 1023, 113);
		} printMessage(76, MESSAGE_NO_X_HERE, 113);
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int r26() {
	if (object_type_3_buffer[697] == 1) {
		if (g10(114, 3)
			|| g10(111, 3) || isObjectFlagSet(dereference(PLAYER_LOCATION), 9)) {
			modifyObjectFlag('s', dereference(697), 5); printMessage(76, 1023, 669);
		} printMessage(76, MESSAGE_NO_X_HERE, 669);
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int b26() {
	set_value(0, 699, 1); if (g10(99, 1)
		|| isObjectFlagSet(dereference(PLAYER_LOCATION), 3)) {
		set_value(0, 699, 0);
	}
	else {
		if (g10(ITEM_STARSTONE, 3)) {
			set_value(0, 699, 0);
		}
	}
}

int b27() { 
	set_object_location(101, LOCATION_LIMBO); 
	if (item_location[7] == 155) {
		modifyObjectFlag('s', 155, 8); 
	} 
} 

int replenish_thirst()
{
	if (object_type_3_buffer[THIRST_COUNTER] < 135) { 
		printMessage(0, 868, 0); // Thank you, it was delicious!
	} else { 
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0); 
	} 
	
	object_type_3_buffer[699] = cheezy_rand(150);
	object_type_3_buffer[THIRST_COUNTER] += object_type_3_buffer[700]; 
	object_type_3_buffer[THIRST_COUNTER] += object_type_3_buffer[699]; 

	if (object_type_3_buffer[THIRST_COUNTER] > 1500) {
		set_value(0, THIRST_COUNTER, 1500);
	} 
	longjmp(done_with_command, 1);
} 

int p34() {
	object_type_3_buffer[715] += 1; 
	
	if (item_location[ITEM_FOOD] == 484 && object_type_3_buffer[PLAYER_LOCATION] != LOCATION_PANTRY)
	{
		set_object_location(ITEM_FOOD, LOCATION_PANTRY);
		modifyObjectFlag('c', 110, 4);
	}
} 

int randomly_select_item_from_dwarves_to_686() {
	set_value(0, 686, 0); 
	
	if (object_type_3_buffer[715] < 1)
	{
		return 0;
	} 
	
	set_value(SET_VALUE_DEREFERENCE, 702, 760); 

	object_type_3_buffer[702] *= 100; 
	object_type_3_buffer[702] /= object_type_3_buffer[715]; 
	object_type_3_buffer[702] *= object_type_3_buffer[ITEM_DWARF]; 
	
	if (cheezy_rand(100) < object_type_3_buffer[702]) {
		object_type_3_buffer[701] = cheezy_rand(object_type_3_buffer[760]); 
		object_type_3_buffer[701] += 1;
		*getObjectPointer(675) = -1; 

		object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
		while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
			if (isObjectFlagSet(dereference(675), 3) &&	item_location[object_type_3_buffer[675]] == LOCATION_DWARVES_STORES) {

				object_type_3_buffer[701] -= 1; 
				if (object_type_3_buffer[701] == 0) {
					set_value(SET_VALUE_DEREFERENCE, 686, 675); 
					return	0;
				}
			}
		}
	}
} 

int r27() {
	*getObjectPointer(703) = -1; 
	object_type_3_buffer[703] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[703] <= ITEM_MAX_ID)
	{
		if (object_type_3_buffer[686] == 0) { 
			randomly_select_item_from_dwarves_to_686(); 
		} 
		
		if (!(object_type_3_buffer[686] == 0)) {
			set_object_location(object_type_3_buffer[686], object_type_3_buffer[PLAYER_LOCATION]); 
			object_type_3_buffer[760] -= 1; 
			b26(); 
			
			if (object_type_3_buffer[699] == 0) { 
				printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 686, 0); 
			} 
			
			set_value(0, 686, 0);
		} 
		
		object_type_3_buffer[ITEM_DWARF] -= 1; 
		object_type_3_buffer[715] -= 1; 
		if (object_type_3_buffer[ITEM_DWARF] == 0) {
			set_object_location(ITEM_DWARF, 484);
			return 0; 
		} 
		
		object_type_3_buffer[704] -= 1;
		if (object_type_3_buffer[704] == 0) { 
			return 0; 
		}
	}
} 

int e24() {
	object_type_3_buffer[699] = cheezy_rand(5); 
	
	if (object_type_3_buffer[699] == 0)
	{
		f3(676, 168);
	}
	else {
		if (object_type_3_buffer[699] == 1) { 
			f3(676, 192); 
		} else {
			if (object_type_3_buffer[699] == 2)
			{
				f3(676, 151);
			} else {
				if (object_type_3_buffer[699] == 3) { f3(676, 212); }
				else {
					f3(676, 319);
				}
			}
		}
	} 
	
	printMessage(0, 1230, 0); 
	set_value(0, 701, 0); 
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID)
	{
		if (q8(dereference(object_type_3_buffer[675]), -1) && object_type_3_buffer[675] != ITEM_ORB && isObjectFlagSet(dereference(675), 3)) {
			printMessage(0, 1232, 0);
			set_object_location(object_type_3_buffer[675], object_type_3_buffer[676]); 
			set_value(0, 701, 1);
		}
	} 
	
	if (object_type_3_buffer[701] == 0) { 
		printMessage(0, 1231, 0); 
	}
	processMoveCommand(object_type_3_buffer[676], -2);
} 

int j36() {
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID)
	{
		if (q8(dereference(object_type_3_buffer[675]), 1027)) { 
			set_object_location(object_type_3_buffer[675], object_type_3_buffer[676]); 
		}
	}
} 

int e25() {
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isItemAtLocation(dereference(object_type_3_buffer[675]), 1039)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1266, 0);
		}
	}
} 

int q36() {
	if (isObjectFlagSet(dereference(670), 15)) {
		set_object_location(object_type_3_buffer[670], PLAYER_LOCATION); printMessage(12, 1489, 669);
		printMessage(76, 1490, 670);
	} f3(677, 1228); if (cheezy_rand(100) < 10 && item_location[ITEM_ORB] == LOCATION_CELLAR) {
		f3(677, 1229);
		set_object_location(ITEM_ORB, 419); set_object_location(79, LOCATION_LIMBO);
	} printMessage(12, 1544, 670); if (isObjectFlagSet(dereference(670), 11)) {
		printMessage(11, 677, 1);
	}
	else { printMessage(11, 677, 0); } set_object_location(object_type_3_buffer[670], 419); longjmp(done_with_command, 1);
} int l32() {
	if
		(object_type_3_buffer[733] == 11) {
		set_value(0, 699, 0); return 0;
	} set_value(SET_VALUE_DEREFERENCE, 699, 733); if (object_type_3_buffer[699] == object_type_3_buffer[734])
	{
		if (cheezy_rand(100) < 10) {
			set_value(0, 701, 11); object_type_3_buffer[701] -= object_type_3_buffer[699]; object_type_3_buffer[700] = cheezy_rand(object_type_3_buffer[701]);
			object_type_3_buffer[699] += object_type_3_buffer[700];
		}
		else { if (cheezy_rand(100) < 80) { f3(699, 0); return 0; } }
	}
	else { set_value(SET_VALUE_DEREFERENCE, 734, 699); }
} int h23() {
	printMessage(0, 1297, 0); 
	printBlankLine(); 
	set_value(SET_VALUE_DEREFERENCE, 676, PLAYER_LOCATION);
	object_type_3_buffer[701] = cheezy_rand(3 - 1 + 1) + 1; if (cheezy_rand(100) < 50) { object_type_3_buffer[676] += object_type_3_buffer[701]; }
	else {
		object_type_3_buffer[699]
			-= object_type_3_buffer[701];
	} if (isObjectFlagSet(dereference(676), 3) || isObjectFlagSet(dereference(676), 7) || isObjectFlagSet(dereference(676), 5)) {
		set_value(SET_VALUE_DEREFERENCE, 676, 682);
	} set_object_location(85, object_type_3_buffer[676]); if (g10(85, -1)) { set_object_location(85, 205); }
} int
y20() {
	if (cheezy_rand(100) < object_type_3_buffer[701]) { printMessage(0, 1520, 0); return 0; } if (cheezy_rand(100) < object_type_3_buffer[700])
	{
		printMessage(0, 1299, 0); return 0;
	} b26(); if (object_type_3_buffer[699] == 0) { printMessage(0, 1298, 0); }
	else
	{
		if (g10(87, -1)) {
			printMessage(0, 1301, 0); set_value(0, 733, 4); set_object_location(87, LOCATION_LIMBO); set_value(0, 86, 1);
			if (object_type_3_buffer[ITEM_AXE] == 2) { set_value(0, 115, 0); }
		}
		else {
			if (g10(ITEM_DWARF, -1)) {
				printMessage(0, 1301, 0);
				set_value(SET_VALUE_DEREFERENCE, 704, ITEM_DWARF); r27();
			}
			else {
				if (g10(20, 0)) {
					printMessage(0, 1467, 0); set_object_location(85, LOCATION_LIMBO);
				}
				else { printMessage(0, 1300, 0); }
			}
		} copy_item_location_dereferencing_if_variable(682, 85); set_object_location(85, object_type_3_buffer[PLAYER_LOCATION]);
	}
} int z24() {
	set_value(SET_VALUE_DEREFERENCE, 702, 670); if (object_type_3_buffer[697] == 1 || (513 <= object_type_3_buffer[669] && object_type_3_buffer[669] <= 522)) {
		set_value(SET_VALUE_DEREFERENCE, 702, 669);
	} if (object_type_3_buffer[701] == 0) { modifyObjectFlag('s', dereference(PLAYER_LOCATION), 8); processMoveCommand(object_type_3_buffer[678], -1); }
	else {
		if (object_type_3_buffer[701] == object_type_3_buffer[702])
		{
			processMoveCommand(object_type_3_buffer[678], -2);
		} processMoveCommand(object_type_3_buffer[679], -2);
	}
} 

int j37() {
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7))
	{
		f3(699, 1695); 
		set_value(0, 700, 200); 
		replenish_thirst();
	} 
	
	object_type_3_buffer[THIRST_COUNTER] = cheezy_rand(750 - 600 + 1) + 600; 
	set_object_location(ITEM_CHALICE, LOCATION_LIMBO);
	modifyObjectFlag('s', dereference(710), 10); 
	
	if (isObjectFlagSet(ITEM_RING, 4)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1360, 0);	// As  you lift the chalice to your lips, there is a sharp plop and a horned creature with a pointed tail hurriedly steps  out  of  an  evil  smelling
															// cloud  of smoke.  "Oh no you don't!..." he says and points at the chalice which crumples to dust in your hands.  The creature gives you a  sardonic
															// salute,  screws its tail into a tight spiral and disappears in a dazzling shower of multicoloured sparks.

	} 
	
	printMessage(0, 1271, 0); // A glowing figure of a beautiful woman appears.  In a distant voice she says, "You have drunk  pure  water  from the  sacred chalice, my brave adventurer.  
							  // I come to you as the spirit of goodness, but my power is weak, for the wicked dwarves  have  stolen  the Ring  of  Orion  and  have  hidden  it deep in the Land of Mists, where I 
							  // cannot go.  Return the ring to me and together we shall  drive  the  evil from the caves....."

							  // A distant roll of thunder drowns the voice, and as the woman fades from a cloud of smoke steps a horned creature with a pointed tail.  "If you have
							  // anything  more  to do with that wisp," he says "you will find yourself in infernal hot water.  Just you stick to pilfering a few treasures and  you
						      // won't  come  to  much  harm!"  With  that he points to the chalice and it crumbles to dust, then with a flick of his tail he disappears.
	
	if (ask_user_yes_or_no_question(1272)) // A ringing in your ears seems to say "Will you help me, adventurer?".  What  do  you  reckon  -  will  you?
	{
		set_object_location(ITEM_UNICORN, object_type_3_buffer[PLAYER_LOCATION]);
		printMessage(PRINT_MESSAGE_END_COMMAND, 1276, 0); //  swirl of mist rises from the floor.  Gosh!  It's turned into a unicorn!
	} 
	printMessage(PRINT_MESSAGE_END_COMMAND, 1273, 0); // The ringing is replaced by a distant laugh.
} 

int x28() {
	set_value(0, 701, 1);
	b26(); 
	if (object_type_3_buffer[699] == 1) { 
		return 0; 
	} 
	
	set_value(0, 701, 0); 
	
	if (isObjectFlagSet(dereference(697), 7) ||	object_type_3_buffer[717] > 0 || isObjectFlagSet(dereference(PLAYER_LOCATION), 7) || 
		isObjectFlagSet(dereference(PLAYER_LOCATION), 5) || isObjectFlagSet(dereference(PLAYER_LOCATION), 11) || isObjectFlagSet(19, 13)
		|| g10(ITEM_DWARF, -1) || g10(20, -1) || g10(22, -1) || g10(7, -1) || g10(32, -1) ||
		object_type_3_buffer[FEE_FIE_FOE_FOO_COUNT] > 0) {
		
		set_value(0, 701, 1);
	}
} 

int check_little_figure_hint() {
	object_type_3_buffer[LITTLE_FIGURE_HINT_COUNTER] -= 1; 

	if (object_type_3_buffer[LITTLE_FIGURE_HINT_COUNTER] < 1 && cheezy_rand(100) < 25) {
		x28(); 
		
		if (object_type_3_buffer[701] == 1) { 
			return 0; 
		} 
		
		set_value(0, 755, -1); 
		
		if (!(isObjectFlagSet(dereference(755), 0) || cheezy_rand(100) < 75 || item_location[ITEM_CHALICE] == LOCATION_LIMBO 
			|| isObjectFlagSet(64, 4))) {
			set_value(0, 755, 0); 
			modifyObjectFlag('s', dereference(755), 0);
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 1) || cheezy_rand(100) < 75 || isObjectFlagSet(385, 4))) {
				set_value(0, 755, 1); 
				modifyObjectFlag('s', dereference(755), 1);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 9) || cheezy_rand(100) < 75 || isObjectFlagSet(119, 4) || !(isObjectFlagSet(ITEM_SWORD, 4)))) {
				set_value(0, 755, 9); 
				modifyObjectFlag('s', dereference(755), 9);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 2) || cheezy_rand(100) < 75 || isObjectFlagSet(LOCATION_SOUTH_END_STONE_FACES, 4) ||
				!(isObjectFlagSet(250, 4)))) {
				
				set_value(0, 755, 2); 
				modifyObjectFlag('s', dereference(755), 2);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 3) || cheezy_rand(100) < 75 || !(isObjectFlagSet(259, 4)) || isObjectFlagSet(ITEM_DJINN, 13))) {
				set_value(0, 755, 3);
				modifyObjectFlag('s', dereference(755), 3);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 4) || cheezy_rand(100) < 75	|| isObjectFlagSet(LOCATION_SOUTH_END_STONE_FACES, 4))) {
				set_value(0, 755, 4); 
				modifyObjectFlag('s', dereference(755), 4);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 6) || cheezy_rand(100) < 75 || item_location[ITEM_STARSTONE] == LOCATION_MAGNIFICENT_VIEW || 
				!(isObjectFlagSet(ITEM_STARSTONE, 4)))) {
				
				set_value(0, 755, 6);
				modifyObjectFlag('s', dereference(755), 6);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 7) || cheezy_rand(100) < 75	|| isObjectFlagSet(462, 4) || !(isObjectFlagSet(271, 4)))) {
				set_value(0, 755, 7); 
				modifyObjectFlag('s', dereference(755), 7);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 8) || cheezy_rand(100) < 75 || !(isObjectFlagSet(324, 4)))) {
				set_value(0, 755, 8);
				modifyObjectFlag('s', dereference(755), 8);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 11) || cheezy_rand(100) < 75 || isObjectFlagSet(58, 4) || isObjectFlagSet(LOCATION_PLOVER, 8))) {
				set_value(0, 755, 11); 
				modifyObjectFlag('s', dereference(755), 11);
			}
		} 
		
		if (object_type_3_buffer[755] == -1)
		{
			if (!(isObjectFlagSet(dereference(755), 10) || cheezy_rand(100) < 75 || !(isObjectFlagSet(35, 4)))) {
				set_value(0, 755, 10);
				modifyObjectFlag('s', dereference(755), 10);
			}
		} 
		
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 12) || cheezy_rand(100) < 75 || !(isObjectFlagSet(415, 4)) || isObjectFlagSet(420, 4))) {
				set_value(0, 755, 12); 
				modifyObjectFlag('s', dereference(755), 12);
			}
		}

		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(dereference(755), 5) || cheezy_rand(100) < 85)) {
				set_value(0, 755, 5);
				modifyObjectFlag('s', dereference(755), 5);
			}
		} 
		
		object_type_3_buffer[LITTLE_FIGURE_HINT_COUNTER] = cheezy_rand(100 - 20 + 1) + 20; 
		
		if (object_type_3_buffer[755] > -1) {
			f3(677, 1280);
			object_type_3_buffer[677] += object_type_3_buffer[755]; 
			printBlankLine(); 
			printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); 
			object_type_3_buffer[LITTLE_FIGURE_HINT_COUNTER] += 100;
		}
	}
} 

int a27()
{
	if (cheezy_rand(100) < 20) { 
		processMoveCommand(LOCATION_ROCK_IN_MIST, -2); 
	} 
	processMoveCommand(432, -2);
} 

int u23() {
	if (isObjectFlagSet(ITEM_SWORD, 13))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1333, 0);
	} modifyObjectFlag('s', ITEM_SWORD, 13); printMessage(PRINT_MESSAGE_END_COMMAND, 1332, 0);
} 

int e26() {
	if (object_type_3_buffer[715] < 1)
	{
		return 0;
	} 
	
	set_value(0, 700, 0); 
	modifyObjectFlag('s', ITEM_STARSTONE, 15); 
	*getObjectPointer(675) = -1; 

	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isObjectFlagSet(dereference(675), 3)) {
			modifyObjectFlag('c', dereference(675), 14); 
			if (isObjectFlagSet(dereference(675), 4) && !(isObjectFlagSet(dereference(675), 15)) && !g10(dereference(object_type_3_buffer[675]), -1)) {
				copy_item_location_dereferencing_if_variable(676, 675); 

				if (!(isObjectFlagSet(dereference(676), 7) || isObjectFlagSet(dereference(676), 5))) {
					if (!(isObjectFlagSet(dereference(676), 10))) {
						object_type_3_buffer[700] += 1; 
						modifyObjectFlag('s', dereference(675), 14);
					}
				}
			}
		}
	}  // for all items
	
	modifyObjectFlag('c', ITEM_STARSTONE, 15); 
	if (object_type_3_buffer[700] > 0) {
		object_type_3_buffer[701] = cheezy_rand(object_type_3_buffer[700]); 
		object_type_3_buffer[701] += 1; 
		*getObjectPointer(674) = -1; 
		
		object_type_3_buffer[674] = ITEM_MIN_ID - 1; 
		while (++object_type_3_buffer[674] <= ITEM_MAX_ID) {
			if (object_type_3_buffer[701] > 0 && isObjectFlagSet(dereference(674), 3) && isObjectFlagSet(dereference(674), 14)) {
				object_type_3_buffer[701] -= 1; 
				if (object_type_3_buffer[701] == 0) {
					copy_item_location_dereferencing_if_variable(676, 674);
					set_value(SET_VALUE_DEREFERENCE, 675, 674);
				}
			}
		} 
		
		set_value(SET_VALUE_DEREFERENCE, 699, 760); 
		object_type_3_buffer[699] *= 100; 
		object_type_3_buffer[699] /= object_type_3_buffer[715];
		object_type_3_buffer[699] *= object_type_3_buffer[ITEM_DWARF]; 
		
		if (cheezy_rand(100) < object_type_3_buffer[699]) {
			if (!(isObjectFlagSet(dereference(675), 5))) {
				return 0;
			} 
			
			object_type_3_buffer[701] = cheezy_rand(object_type_3_buffer[760]); 
			object_type_3_buffer[701] += 1; 
			*getObjectPointer(674) = -1; 

			object_type_3_buffer[674] = ITEM_MIN_ID - 1; 
			while (++object_type_3_buffer[674] <= ITEM_MAX_ID) {
				if (object_type_3_buffer[701] > 0 && item_location[object_type_3_buffer[674]] == LOCATION_DWARVES_STORES) {
					object_type_3_buffer[701] -= 1; 
					if(object_type_3_buffer[701] == 0) {
						if (isObjectFlagSet(dereference(674), 5) || object_type_3_buffer[674] == object_type_3_buffer[686]) { 
							return 0; 
						} 
						
						object_type_3_buffer[760] -= 1; 
						set_object_location(object_type_3_buffer[674], object_type_3_buffer[676]);
					}
				}
			}
		} 
		object_type_3_buffer[760] += 1; 
		set_object_location(object_type_3_buffer[675], LOCATION_DWARVES_STORES);
	}
} 

int a28()
{
	if (object_type_3_buffer[697] == 1) { set_value(SET_VALUE_DEREFERENCE, 700, 669); }
	else { set_value(SET_VALUE_DEREFERENCE, 700, 670); } if ((513 <= object_type_3_buffer[700]
		&& object_type_3_buffer[700] <= 522)) {
		object_type_3_buffer[700] += 4; f3(701, 522); if (!(object_type_3_buffer[700] < object_type_3_buffer[701])) {
			object_type_3_buffer[700] -= 8;
		} if (object_type_3_buffer[697] == 1) { special_action(9, 700); }
		else { special_action(10, 700); }
	}
}
int g32() {
	set_value(0, 673, 0); if (object_type_3_buffer[697] == 1) { set_value(SET_VALUE_DEREFERENCE, 675, 669); }
	else {
		set_value(SET_VALUE_DEREFERENCE, 675, 670);
	} if (!(isObjectFlagSet(dereference(675), 0))) { return 0; } if (g10(dereference(object_type_3_buffer[675]), -1)) {
		return
			0;
	} if (currentCommandContains(102)) {
		if (isObjectFlagSet(102, 4) && g10(104, -1) && !g10(102, -1)) {
			return
				0;
		}
	} if (!(isObjectFlagSet(dereference(675), 13) || isObjectFlagSet(dereference(675), 14))) { return 0; } if (currentCommandContains(27))
	{
		return 0;
	} if (isObjectFlagSet(dereference(675), 13)) { if (!(object_type_3_buffer[PLAYER_LOCATION] == 378)) { return 0; } }
	else { if (!(object_type_3_buffer[PLAYER_LOCATION] == 379)) { return 0; } } if (currentCommandContains(COMMAND_TAKE)) {
		if (currentCommandContains(ITEM_DWARF)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
		} if (isObjectFlagSet(dereference(675), 4)) { printMessage(76, 1378, 670); } if (object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS])
		{
			modifyObjectFlag('s', dereference(675), 4);
		}
		else { clear_command(); printMessage(PRINT_MESSAGE_END_COMMAND, 897, 0); }
	} copy_item_location_dereferencing_if_variable(673, 675); set_object_location(object_type_3_buffer[675], object_type_3_buffer[PLAYER_LOCATION]);
} int i42() {
	if (!(object_type_3_buffer[673] == 0)) {
		if (object_type_3_buffer[697] == 1) { set_value(SET_VALUE_DEREFERENCE, 675, 669); }
		else
		{
			set_value(SET_VALUE_DEREFERENCE, 675, 670);
		} if (!(isObjectFlagSet(dereference(675), 0))) { return 0; } if (!(isItemAtLocation(dereference(object_type_3_buffer[675]), -1)))
		{
			set_object_location(object_type_3_buffer[675], object_type_3_buffer[673]);
		}
	}
} int r28() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 147 || object_type_3_buffer[PLAYER_LOCATION] == 419 ||
		object_type_3_buffer[PLAYER_LOCATION] == 370 || object_type_3_buffer[PLAYER_LOCATION] == 380) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1377, 0);
	} printMessage(76, 829, 147);
} int u24()
{
	if (currentCommandContains(COMMAND_TAKE)) {
		if (q8(102, -1)) { return 0; } if (isItemAtLocation(104, -1)) {
			printMessage(76, 813, 670);
		} if (!(g10(104, -1))) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 379) {
				if (isObjectFlagSet(104, 4)) {
					printMessage(76, 1378, 670);
				}
			}
			else { return 0; }
		} if (object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]) {
			set_object_location(104, r5); modifyObjectFlag('s', 104, 4);
			set_value(0, 673, 0); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} clear_command(); printMessage(PRINT_MESSAGE_END_COMMAND, 897, 0);
	}
	if (currentCommandContains(535) || currentCommandContains(COMMAND_THROW)) {
		if (isItemAtLocation(ITEM_ROD,-1)) { return 0; } if (isItemAtLocation(104, -1))
		{
			set_object_location(104, PLAYER_LOCATION); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} printMessage(76, 1027, 670);
	} if
		(currentCommandContains(547)) {
		if (isItemAtLocation(ITEM_ROD,-1) || isItemAtLocation(104, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_NOTHING_HAPPENS, 0); } printMessage(76, 1027, 670);
	} if (currentCommandContains(COMMAND_LOOK)) {
		if (g10(102, -1) && !isItemAtLocation(104, -1) || isItemAtLocation(ITEM_ROD,-1)) {
			printMessage(76, 1541, 670);
		}
		else {
			modifyObjectFlag('s', dereference(697), 4); printMessage(0, 104, 0); modifyObjectFlag('c', dereference(697), 4); longjmp(done_with_command, 1);
		}
	}
	else { printMessage(PRINT_MESSAGE_END_COMMAND, 1396, 0); }
} int k21() {
	if (!(object_type_3_buffer[717] == 3)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1065, 0);
	} if (!(isItemAtLocation(107, -1))) { printMessage(PRINT_MESSAGE_END_COMMAND, 1066, 0); } if (isObjectFlagSet(107, 15)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1397, 0);
	} printMessage(9, 1387, 20); if (ask_user_yes_or_no_question(1388)) {
		modifyObjectFlag('s', 107, 15); object_type_3_buffer[707] += 20; printMessage(PRINT_MESSAGE_END_COMMAND, 1389, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1398, 0);
} 

int compute_score() {
	// 708 is score
	// 709 is max possible score
	if (object_type_3_buffer[718] == 0 || object_type_3_buffer[717] > 2) {
		set_value(0, 708, 10);
	}
	else { 
		set_value(0, 708, 0); 
	} 
	
	set_value(0, 709, 10); 
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isObjectFlagSet(dereference(675), 5)) { // if it's a treasure
			if (item_location[object_type_3_buffer[675]] == LOCATION_BUILDING || item_location[object_type_3_buffer[675]] == LOCATION_GRAY_NOWHERE)
			{
				object_type_3_buffer[708] += 15;
			}
			else { 
				if (isObjectFlagSet(dereference(675), 4)) { // seen ?
					object_type_3_buffer[708] += 7; 
				} 
			} 
			object_type_3_buffer[709] += 15;
		}
	} 
	
	if (item_location[ITEM_STARSTONE] == LOCATION_BUILDING) { 
		object_type_3_buffer[708] -= 8; 
	} else {
		if (item_location[ITEM_STARSTONE] == LOCATION_MAGNIFICENT_VIEW) {
			object_type_3_buffer[708] += 8;
		}
	} 
	
	if (!(isObjectFlagSet(ITEM_TUSK, 5))) {
		object_type_3_buffer[709] += 15; 
	} 
	
	if (isObjectFlagSet(ITEM_DRACHMA, 4)) {
		object_type_3_buffer[708] += 1; 
		
		if (item_location[ITEM_DRACHMA] == LOCATION_BUILDING) {
			object_type_3_buffer[708] += 1; 
		}
	} 
	
	if (item_location[ITEM_MAGAZINE] != LOCATION_WITTS_END) {
		object_type_3_buffer[708] += 1;
	} 
	
	object_type_3_buffer[709] += 1; 

	if (isObjectFlagSet(147, 4) || isObjectFlagSet(163, 4)) {
		object_type_3_buffer[708] += 20; 
		if (isObjectFlagSet(324, 4))
		{
			object_type_3_buffer[708] += 10;
		} 
		
		if (isObjectFlagSet(377, 4)) { 
			object_type_3_buffer[708] += 10; 
		} 
		
		if (isObjectFlagSet(LOCATION_SOUTH_END_STONE_FACES, 4)) {
			object_type_3_buffer[708] += 10;
		} 
		
		if (isObjectFlagSet(290, 4)) { 
			object_type_3_buffer[708] += 15; 
		} 
		
		if (isObjectFlagSet(27, 13)) {
			object_type_3_buffer[708] += 8;
		}
	} 
	
	object_type_3_buffer[709] += 73; 
	set_value(SET_VALUE_DEREFERENCE, 699, 717); 
	object_type_3_buffer[699] *= 16; 
	object_type_3_buffer[708] += object_type_3_buffer[699]; 
	
	object_type_3_buffer[709] += 96; 
	
	set_value(SET_VALUE_DEREFERENCE, 702, 706); 
	object_type_3_buffer[702] *= 10; 
	object_type_3_buffer[708] -= object_type_3_buffer[702]; 
	object_type_3_buffer[708] -= object_type_3_buffer[707];
	if (object_type_3_buffer[708] < 0) { 
		set_value(0, 708, 0); 
	}
} 

int print_score_and_rank_and_exit_game() {
	compute_score(); 
	printMessage(13, 1033, 708); 
	printMessage(13, 1035, 709);
	printMessage(13, 1036, 712); // You  have  scored  ASW]_OSB#0p  of  a  possible  maximum of ASW]_OSB#0p points, using , using   turns.
	printBlankLine();
	set_value(SET_VALUE_DEREFERENCE, 700, 708); 
	
	if (object_type_3_buffer[708] < 30) {
		printMessage(0, 1041, 0); // You are obviously a rank amateur.  Better luck next time.
		object_type_3_buffer[700] -= 30;
	}
	else {
		if (object_type_3_buffer[708] < 100) {
			printMessage(0, 1042, 0); // Your score qualifies you as a Novice Adventurer.
			object_type_3_buffer[700] -= 100;
		}
		else {
			if (object_type_3_buffer[708] < 200) { 
				printMessage(0, 1043, 0); // You are now an Apprentice Adventurer.
				object_type_3_buffer[700] -= 200; }
			else {
				if (object_type_3_buffer[708] < 300)
				{
					printMessage(0, 1044, 0); // You have achieved the rating of Experienced Adventurer.
					object_type_3_buffer[700] -= 300;
				}
				else {
					if (object_type_3_buffer[708] < 400) {
						printMessage(0, 1045, 0); // You may now consider yourself a Seasoned Adventurer.
						object_type_3_buffer[700] -= 400;
					}
					else {
						if (object_type_3_buffer[708] < 500) {
							printMessage(0, 1046, 0); // You have reached the Junior Master status.
							object_type_3_buffer[700] -= 500;
						}
						else {
							if (object_type_3_buffer[708] < 600) { 
								printMessage(0, 1047, 0); // Your score puts you in the Master Adventurer class.
								object_type_3_buffer[700] -= 600; 
							}
							else {
								if (object_type_3_buffer[708] < 650)
								{
									printMessage(0, 1048, 0); // You are now a Senior Master Adventurer.
									object_type_3_buffer[700] -= 650;
								}
								else {
									if (object_type_3_buffer[708] < 660) {
										printMessage(0, 1049, 0); // All of Adventuredom gives tribute to you, Adventurer Grandmaster!
										object_type_3_buffer[700] -= 660;
									}
									else { 
										printMessage(0, 1050, 0); // You have worked your way up to the elevated rank of a Cheater. To achieve the next higher rating would be a neat trick!!
										set_value(0, 700, 0); 
									}
								}
							}
						}
					}
				}
			}
		}
	} 
	printBlankLine();
	object_type_3_buffer[700] *= -1; 
	if (object_type_3_buffer[700] > 0) {
		if (object_type_3_buffer[700] == 1) { 
			printMessage(0, 1051, 0); 
		}
		else {
			printMessage(13, 1052, 700); // To reach the next qualification level you need 50 more points.
		}
	} 
	printBlankLine();
	r7();
} 

int b28() {
	if (object_type_3_buffer[14] < 8) {
		object_type_3_buffer[14] = cheezy_rand(8);
	} 
	
	object_type_3_buffer[15] = cheezy_rand(8); 
	if (g10(99, 1)) { 
		set_object_location(15, 484); 
	} else {
		set_object_location(15, 256);
		if (object_type_3_buffer[PLAYER_LOCATION] == 256 && !(isObjectFlagSet(dereference(697), 0))) { 
			printMessage(0, 15, 0); // A glow of light is visible through the fog to the north.
		}
	}
} 

int die() {
	set_value(0, 718, 0);
	clear_command(); 
	printBlankLine();

	modifyObjectFlag('c', dereference(710), 3); 
	modifyObjectFlag('c', dereference(710), 1); 
	modifyObjectFlag('c', ITEM_STARSTONE, 13);
	
	if (object_type_3_buffer[ITEM_STARSTONE] == 2) { 
		set_value(0, ITEM_STARSTONE, 3); 
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 432 || object_type_3_buffer[PLAYER_LOCATION] == 256) {
		processMoveCommand(LOCATION_LIMBO, -1);
	} 

	set_value(0, 17, 0); 
	set_object_location(17, 484); 
	if (!(item_location[ITEM_GOBLINS] == LOCATION_LIMBO)) { 
		set_object_location(ITEM_GOBLINS, 484); 
	} 
	
	if (object_type_3_buffer[ITEM_BASILISK] == 1)
	{
		set_value(0, ITEM_BASILISK, 0);
	} else { 
		if (object_type_3_buffer[ITEM_BASILISK] == 3) {
			set_value(0, 25, 2); 
		} 
	} 
	
	set_object_location(ITEM_FOG, 255);
	set_value(0, 14, 8);
	
	if (object_type_3_buffer[ITEM_CROWN] > 1) {
		set_value(0, ITEM_CROWN, 1);
	} 

	if (object_type_3_buffer[ITEM_SAFE] == 1) {
		set_value(0, ITEM_SAFE, 0);
		set_value(0, 683, 0);
		modifyObjectFlag('c', ITEM_SAFE, 13);
	} 
	
	object_type_3_buffer[706] += 1; 
	if (object_type_3_buffer[717] > 1) {
		if (object_type_3_buffer[717] == 2) {
			printMessage(0, 935, 0); // It  looks  as  though  you're dead.  Well, seeing as how it's so close to closing time anyway, I think we'll just call it a day.
		} else { 
			object_type_3_buffer[706] -= 1; 
		} 
		print_score_and_rank_and_exit_game();
	} 
	
	f3(677, 885); 
	object_type_3_buffer[677] += object_type_3_buffer[706]; 
	object_type_3_buffer[677] += object_type_3_buffer[706]; 
	
	if (ask_user_yes_or_no_question(object_type_3_buffer[677])) {
		object_type_3_buffer[677] += 1; 
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); 
		printBlankLine();
		f3(700, 894); 
		if (object_type_3_buffer[677] < object_type_3_buffer[700]) {
			if (isItemAtLocation(53, -1)) {
				set_object_location(53, LOCATION_LIMBO); 
				set_object_location(54, r5);
			} 
			
			if (isItemAtLocation(ITEM_BOTTLE, -1)) {
				set_value(0, 111, 2); 
			} 
			
			if (isItemAtLocation(ITEM_FLASK, -1) && object_type_3_buffer[ITEM_FLASK] != 1) {
				set_value(0, ITEM_FLASK, 2);
			} 
			
			*getObjectPointer(675) = -1; 
			object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
			
			while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
				if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1))
				{
					set_object_location(object_type_3_buffer[675], PLAYER_LOCATION);
				}
			} 
			
			set_value(0, CARRIED_ITEM_COUNT, 0); 
			set_value(0, ITEM_LAMP, 0);
			set_object_location(ITEM_FOG, 255);
			set_value(0, 14, 8);
			b28(); 
			processMoveCommand(LOCATION_BUILDING, -1); 
			set_value(0, PREVIOUS_LOCATION, 0); 
			set_object_location(ITEM_LAMP, 136);
			
			if (object_type_3_buffer[698] == 0) {
				if (!(isObjectFlagSet(324, 4)))
				{
					copy_item_location_dereferencing_if_variable(676, ITEM_BATTERIES);
					if (object_type_3_buffer[ITEM_BATTERIES] == 3 || !(isObjectFlagSet(dereference(676), 7))) {
						set_object_location(ITEM_LAMP, LOCATION_LIMBO);
					}
				}
			} 
			set_object_location(ITEM_DWARF, 484);
			set_value(0, ITEM_DWARF, 0); 
			modifyObjectFlag('c', 19, 13); 
			longjmp(done_with_command, 1);
		}
	} 
	print_score_and_rank_and_exit_game();
} 

int w25() {
	b26();
	if (object_type_3_buffer[699] == 1) { 
		printMessage(0, 1594, 0); // As  you  creep  about  in  the  dark, you incatiously stumble over a rock outcrop and with an almighty >>>>>CRUNCH<<<<< split  your  head  on   a conveniently positioned sharp stone.
		die(); 
	}
} 

int update_goblin_count() {
	if (g10(ITEM_GOBLINS, -1))
	{
		if (object_type_3_buffer[ITEM_GOBLINS] == 6) { 
			die(); 
		} 
		
		object_type_3_buffer[ITEM_GOBLINS] += 1;
	}
} 

int j39() {
	set_value(0, 701, 0);
	set_value(0, 700, 1); 
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (q8(dereference(object_type_3_buffer[675]), -1))
		{
			modifyObjectFlag('s', dereference(675), 4); if (object_type_3_buffer[700] == 1 && !(isObjectFlagSet(dereference(675), 10))) {
				set_value(0, 700, 0);
				printBlankLine();
			} if (object_type_3_buffer[701] == 20) {
				set_value(0, 701, 0); f3(674, ITEM_DWARF); if (object_type_3_buffer[675] < object_type_3_buffer[674])
				{
					if (!(ask_user_yes_or_no_question(1589))) { f3(675, ITEM_DWARF); }
				} object_type_3_buffer[675] -= 1;
			}
			else {
				object_type_3_buffer[701] +=
					1; modifyObjectFlag('s', dereference(675), 4); printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 675, 0);
			}
		}
	}
} 

int y21() {
	printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, PLAYER_LOCATION, 0); // Prints the location description

	if ((437 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 460)) {
		printMessage(0, 861, 0); // The  trees  of  the  forest  are  large  hardwood  oak and maple, with an occasional grove of pine or spruce.  There is quite a bit of undergrowth, 
								 // largely birch and ash saplings as well as nondescript bushes  of  various sorts.   This  time  of  year  visibility  is quite restricted by all the
								 // leaves, but travel is quite easy if you  detour  around  the  spruce  and berry bushes.
	} 

	if (object_type_3_buffer[700] > 0) {
		if (object_type_3_buffer[PLAYER_LOCATION] == 463) {
			printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 684, 0);
		} else { 
			if (object_type_3_buffer[PLAYER_LOCATION] == 150 && object_type_3_buffer[151] == 0) 
			{ 
				printMessage(0, 1225, 0); // Rough stone steps lead down the pit.
			} 
		}
	} 

	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 15))
	{
		printMessage(0, 876, 0); // The ground here is damp.
	} 
	
	j39(); 
	
	if (isItemAtLocation(ITEM_BEAR, -1)) {
		printMessage(0, 939, 0); // You are being followed by a very large, tame bear.
	} 

	update_goblin_count();
} 

int takeBird()
{
	if (!g10(ITEM_BIRD, -1))
		return 0; 
	
	if (isItemAtLocation(ITEM_BIRD, -1)) { 
		printMessage(76, 813, 101); // You are already carrying the bird!
	} 

	if (object_type_3_buffer[ITEM_BIRD] == 1)
	{
		set_object_location(ITEM_CAGE, r5);
		modifyObjectFlag('s', ITEM_CAGE, 4);
		set_object_location(ITEM_BIRD, r5);
		printMessage(12, 1489, 669); 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1514, 0); // You  the cage with the bird in it.
	} 
	
	if (isItemAtLocation(ITEM_CAGE, -1)) {
		if (isItemAtLocation(ITEM_ROD,-1)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 815, 0); // The  bird  was  unafraid when you entered, but as you approach it becomes disturbed and you cannot catch it.
		} 
		modifyObjectFlag('c', 149, 8); 
		set_object_location(ITEM_BIRD, r5);
		set_value(0, ITEM_BIRD, 1);
		printMessage(PRINT_MESSAGE_END_COMMAND, 1495, 0);  // You catch the bird and put it into the cage.
	} 

	printMessage(PRINT_MESSAGE_END_COMMAND, 816, 0); // You  might  be  able to catch the bird, but you have no means of carrying it
} 

int i44() {
	if (!g10(ITEM_CAGE, -1))
		return 0; 
	
	if (isItemAtLocation(ITEM_CAGE, -1)) { 
		printMessage(76, 813, ITEM_CAGE); // You are already carrying the cage!
	} 
	set_object_location(ITEM_CAGE, r5);
	printMessage(12, 1489, 669);

	if (object_type_3_buffer[ITEM_BIRD] == 1) {
		set_object_location(101, r5); 
		modifyObjectFlag('s', ITEM_BIRD, 4);
		printMessage(PRINT_MESSAGE_END_COMMAND, 1514, 0); 
	} 
	printMessage(76, 1490, 670);
} 

int t36() { 
	if (q8(ITEM_DWARF, -1)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 921, 0); 
	} 
} 

int e28() {
	if (q8(ITEM_ORB, -1))
	{
		if (object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]) {
			set_object_location(ITEM_ORB, r5); set_object_location(79, LOCATION_LIMBO); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} clear_command(); printMessage(PRINT_MESSAGE_END_COMMAND, 897, 0);
	}
} int p35() {
	if (g10(ITEM_STARSTONE, -1) && object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]
		&& !isItemAtLocation(ITEM_STARSTONE, -1)) {
		if (object_type_3_buffer[ITEM_STARSTONE] == 0) {
			set_value(0, ITEM_STARSTONE, 1); set_object_location(ITEM_STARSTONE, r5); printMessage(PRINT_MESSAGE_END_COMMAND, 1352, 0);
		} if (item_location[ITEM_STARSTONE] == object_type_3_buffer[PLAYER_LOCATION]) {
			if (isObjectFlagSet(ITEM_STARSTONE, 13)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1354, 0); } modifyObjectFlag('s', ITEM_STARSTONE, 13);
			printMessage(PRINT_MESSAGE_END_COMMAND, 1353, 0);
		}
	}
} int k22() {
	if (isItemAtLocation(ITEM_STARSTONE, -1)) {
		set_object_location(ITEM_STARSTONE, PLAYER_LOCATION); modifyObjectFlag('c', ITEM_STARSTONE, 13);
		b26(); if (object_type_3_buffer[ITEM_STARSTONE] > 1 || object_type_3_buffer[PLAYER_LOCATION] == 324) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 324) { printMessage(0, 1454, 0); }
			else { printMessage(0, 1455, 0); } set_value(0, ITEM_STARSTONE, 3); if (g10(85, -1)) { h23(); } if (object_type_3_buffer[699] == 1)
			{
				printBlankLine();
				y21();
			}
		}
		else {
			if (object_type_3_buffer[699] == 0) { printMessage(0, 1355, 0); }
			else
			{
				printMessage(0, 1356, 0);
			}
		} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) { e24(); } if (object_type_3_buffer[PLAYER_LOCATION] == 204) {
			set_object_location(ITEM_STARSTONE, 203);
		} longjmp(done_with_command, 1);
	}
} int k23() {
	if (!isItemAtLocation(97, -1)) return 0; if (!g10(34, -1))
		return 0; set_object_location(97, PLAYER_LOCATION); printMessage(PRINT_MESSAGE_END_COMMAND, 1385, 0);
} int s27() {
	if (!isItemAtLocation(ITEM_BIRD, -1)) return
		0; set_object_location(101, PLAYER_LOCATION); set_value(0, 101, 0); if (g10(7, -1)) {
		set_object_location(7, LOCATION_LIMBO); modifyObjectFlag('c', 155, 8);
		printMessage(PRINT_MESSAGE_END_COMMAND, 819, 0);
	} if (g10(20, -1)) {
		if (object_type_3_buffer[20] == 0) {
			b27(); printMessage(PRINT_MESSAGE_END_COMMAND, 957, 0);
		} printMessage(76, 1492, 670);
	} if (g10(22, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 958, 0); } if (g10(24, -1)) {
		b27(); printMessage(PRINT_MESSAGE_END_COMMAND, 959, 0);
	} if (g10(38, -1)) {
		if (object_type_3_buffer[38] == 0) {
			b27(); printMessage(PRINT_MESSAGE_END_COMMAND, 960, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 961, 0);
	} if (g10(25, -1) && object_type_3_buffer[25] < 2) {
		printMessage(0, 962, 0); b27(); die();
	} if (g10(ITEM_DWARF, -1)) { b27(); printMessage(13, 963, ITEM_DWARF); longjmp(done_with_command, 1); } if (g10(87, -1))
	{
		b27(); printMessage(PRINT_MESSAGE_END_COMMAND, 964, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 379) {
		if (!(item_location[104] == LOCATION_LIMBO)) {
			printMessage(0, 1384, 0);
			printMessage(0, 1372, 0); die();
		}
	} printMessage(12, 1492, 670); if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) { e24(); } longjmp(done_with_command, 1);
} int g33() {
	if (!isItemAtLocation(ITEM_CAGE, -1)) return 0; set_object_location(100, PLAYER_LOCATION); printMessage(12, 1489, 669); if
		(isItemAtLocation(ITEM_BIRD, -1)) {
		set_object_location(101, PLAYER_LOCATION); printMessage(0, 1514, 0); if (object_type_3_buffer[PLAYER_LOCATION] == 204) {
			printBlankLine();
			printMessage(0, 1543, 0); // You  the cage with the bird in it.
			set_object_location(101, 203);
		}
	}
	else { printMessage(12, 1490, 670); } if (object_type_3_buffer[PLAYER_LOCATION] == 204)
	{
		set_object_location(100, 203);
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) { e24(); } longjmp(done_with_command, 1);
} int e29()
{
	if (!isItemAtLocation(53, -1)) return 0; set_object_location(53, PLAYER_LOCATION); if (object_type_3_buffer[PLAYER_LOCATION] == 225) {
		printMessage(12, 1489, 669);
		printMessage(12, 1490, 670);
	}
	else {
		if (object_type_3_buffer[PLAYER_LOCATION] == 204) {
			printMessage(0, 1216, 0); set_object_location(53, LOCATION_LIMBO); set_object_location(54, 203);
		}
		else {
			if (isItemAtLocation(105, -1) || !g10(105, -1)) {
				set_value(0, 53, 2); printMessage(0, 53, 0); set_object_location(53, LOCATION_LIMBO);
				set_object_location(54, object_type_3_buffer[PLAYER_LOCATION]);
			}
			else { set_value(0, 53, 1); printMessage(0, 53, 0); set_value(0, 53, 0); }
		}
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR)
	{
		e24();
	} longjmp(done_with_command, 1);
} int h24() {
	if (object_type_3_buffer[670] == object_type_3_buffer[112]) {
		set_value(0, 700, 3);
	}
	else { set_value(0, 700, 4); } if (isItemAtLocation(111, dereference(object_type_3_buffer[700]))) {
		set_value(0, 111, 2); if (g10(ITEM_DWARF, -1)
			&& currentCommandContains(COMMAND_THROW)) {
			modifyObjectFlag('s', ITEM_DWARF, 14); if (object_type_3_buffer[ITEM_DWARF] == 1) { printMessage(76, 1062, 670); } printMessage(76, 1063, 670);
		} printMessage(76, 875, 670);
	} if (isItemAtLocation(114, dereference(object_type_3_buffer[700]))) {
		set_value(0, 114, 2); printMessage(PRINT_MESSAGE_END_COMMAND, 1367, 0);
	}
} int a30() {
	if (!isItemAtLocation(111, -1)) return 0; set_object_location(111, PLAYER_LOCATION); set_value(0, 111, 2); if
		(object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) {
		printMessage(12, 1544, 670); printMessage(9, 1601, 0); set_object_location(111, 419); e24();
	} if
		(object_type_3_buffer[PLAYER_LOCATION] == 415) {
		set_object_location(111, 419); printMessage(12, 1544, 670); printMessage(72, 1263, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 204
		|| object_type_3_buffer[PLAYER_LOCATION] == 418 || object_type_3_buffer[PLAYER_LOCATION] == 417) {
		printMessage(12, 1544, 670); if (object_type_3_buffer[PLAYER_LOCATION] == 204) {
			set_object_location(111, 203);
			modifyObjectFlag('s', 203, 15); printMessage(72, 1076, 0);
		} set_object_location(111, 419); printMessage(72, 1295, 0);
	} printMessage(12, 1489, 669);
	printMessage(12, 1491, 670); if (object_type_3_buffer[111] == 3) {
		modifyObjectFlag('s', dereference(PLAYER_LOCATION), 15); printMessage(76, 1493, 112);
	} if (object_type_3_buffer[111] == 4) { modifyObjectFlag('s', dereference(PLAYER_LOCATION), 15); printMessage(76, 1493, 113); } printMessage(PRINT_MESSAGE_END_COMMAND, 776, 0);
} 

int fill_with_oil() {
	if (q8(113, -1)) {
		if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1))) {
			printMessage(76, 909, 113); // You have nothing suitable for carrying oil.
		} 
		
		if (isItemAtLocation(111, 2)) { // Check if bottle is empty
			set_value(0, 111, 4); 
			printMessage(76, MESSAGE_FULL, 113); // Your bottle is now full of oil.
		} 
		
		if (isItemAtLocation(114, 2)) { // Check if flask is empty
			set_value(0, 114, 4);
			printMessage(76, MESSAGE_FLASK_FULL, 113); // Your flask is now full of oil.
		} 
		
		if (isItemAtLocation(111, -1) && isItemAtLocation(114, -1)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1368, 0); // Both the flask and the bottle are already full.
		} 
		
		if (isItemAtLocation(111, -1))
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_BOTTLE_FULL, 0); // Your bottle is already full.
		} 
		
		printMessage(PRINT_MESSAGE_END_COMMAND, 1369, 0); // The flask is already full.
	}
} 

int s28() {
	if (!(isObjectFlagSet(dereference(PLAYER_LOCATION), 9)))
	{
		return 0;
	} if (isItemAtLocation(81, -1)) {
		if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_PANTRY) {
			if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1)))
			{
				printMessage(PRINT_MESSAGE_END_COMMAND, 1268, 0);
			}
		}
		else {
			modifyObjectFlag('s', 81, 13); modifyObjectFlag('s', 81, 14); printMessage(PRINT_MESSAGE_END_COMMAND, 1269, 0);
		}
	} if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1))) { printMessage(76, 909, 112); } if (isItemAtLocation(111, 2)) {
		set_value(0, 111, 3); printMessage(76, MESSAGE_FULL, 112);
	} if (isItemAtLocation(114, 2)) {
		set_value(0, 114, 3); printMessage(76, MESSAGE_FLASK_FULL, 112);
	} if (isItemAtLocation(114, -1) && isItemAtLocation(111, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1368, 0); } if (isItemAtLocation(111, -1)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_BOTTLE_FULL, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1369, 0);
} int u25() {
	if (object_type_3_buffer[20] > 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 976, 0); } if (ask_user_yes_or_no_question(836))
	{
		set_value(0, 20, 1); set_object_location(60, 247); set_object_location(117, 247); modifyObjectFlag('c', 20, 6); *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1;
		while (++object_type_3_buffer[675] <= ITEM_MAX_ID) { if (q8(dereference(object_type_3_buffer[675]), -1)) { set_object_location(object_type_3_buffer[675], 247); } } processMoveCommand(247, -MESSAGE_DRAGON_DEAD);
	} printMessage(12, MESSAGE_JUST_AS_WELL, 669); printMessage(76, 1223, 670);
} int d35() {
	if (object_type_3_buffer[717] < 3) {
		b27();
		printMessage(PRINT_MESSAGE_END_COMMAND, 831, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1399, 0);
} int h25() {
	if (ask_user_yes_or_no_question(836)) {
		set_value(SET_VALUE_DEREFERENCE, 699, MAX_CARRIED_ITEMS);
		object_type_3_buffer[699] -= object_type_3_buffer[CARRIED_ITEM_COUNT]; object_type_3_buffer[699] += 2; object_type_3_buffer[699] *= 10; if (cheezy_rand(100) < object_type_3_buffer[699]) {
			set_value(0, 704, 1); printMessage(0, 833, 0); r27(); longjmp(done_with_command, 1);
		} if (cheezy_rand(100) < object_type_3_buffer[699])
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 834, 0);
		} printMessage(0, 835, 0); die();
	} printMessage(12, MESSAGE_JUST_AS_WELL, 669); printMessage(76, 1223, 670);
} int l33() {
	if (ask_user_yes_or_no_question(836)) {
		if (cheezy_rand(100) < 50) { printMessage(PRINT_MESSAGE_END_COMMAND, 1118, 0); } printMessage(0, 1119, 0);
		die();
	} printMessage(12, MESSAGE_JUST_AS_WELL, 669); printMessage(76, 1223, 670);
} int e30() {
	if (!g10(38, -1))
		return 0; if (isItemAtLocation(38, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1697, 0); } if (object_type_3_buffer[PLAYER_LOCATION] == 299 && object_type_3_buffer[38] < 2)
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 978, 0);
	} set_object_location(38, r5); printMessage(PRINT_MESSAGE_END_COMMAND, 1696, 0);
} int x29() {
	if (!g10(ITEM_SWORD, -1))
		return 0; if (object_type_3_buffer[ITEM_SWORD] == 0 && object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]) {
		if (object_type_3_buffer[119] == 2) {
			set_value(0, 733, 5);
			object_type_3_buffer[ITEM_SWORD] += 1; set_object_location(ITEM_SWORD, r5); modifyObjectFlag('c', 434, 8); printMessage(PRINT_MESSAGE_END_COMMAND, 1089, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1090, 0);
	}
} int s29() {
	if (!g10(56, -1)) return 0; if (object_type_3_buffer[56] == 0 && object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS])
	{
		set_object_location(56, r5); set_value(0, 56, 1); object_type_3_buffer[699] = cheezy_rand(4); if (object_type_3_buffer[699] == 0) {
			f3(683, 511);
		}
		else {
			if (object_type_3_buffer[699] == 1) { f3(683, 506); }
			else {
				if (object_type_3_buffer[699] == 2) {
					f3(683, 505);
				}
				else { f3(683, 499); }
			}
		} set_object_location(37, LOCATION_LIMBO); if (object_type_3_buffer[35] == 0) {
			printMessage(76, 1132, 683);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1133, 0);
	}
} int v37() {
	f3(677, 1018); object_type_3_buffer[677] += object_type_3_buffer[706]; printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0);
	die();
} int j40() {
	modifyObjectFlag('s', dereference(710), 2); x28(); if (object_type_3_buffer[701] == 1) {
		return
			0;
	} modifyObjectFlag('s', dereference(697), 7); 
	printBlankLine();
	object_type_3_buffer[677] = cheezy_rand(1199 - 1190 + 1) + 1190; printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0);
} int j41() {
	printMessage(0, 936, 0); *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID)
	{
		modifyObjectFlag('c', dereference(675), 4); if (!(object_type_3_buffer[675] == 27)) {
			modifyObjectFlag('c', dereference(675), 13); modifyObjectFlag('c', dereference(675), 14);
		} if (isObjectFlagSet(dereference(675), 3)) { if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1)) { set_object_location(object_type_3_buffer[675], PLAYER_LOCATION); } }
	} set_object_location(10, 379);
	modifyObjectFlag('s', 111, 13); set_value(0, 111, 2); modifyObjectFlag('s', 11, 13); modifyObjectFlag('s', 107, 13); set_value(0, 107, 0);
	modifyObjectFlag('s', 107, 7); modifyObjectFlag('c', 107, 15); modifyObjectFlag('s', 102, 13); modifyObjectFlag('s', 99, 13); set_value(0, 99, 0);
	set_value(0, 698, 0); modifyObjectFlag('s', ITEM_DWARF, 13); set_value(0, ITEM_DWARF, 0); modifyObjectFlag('s', 104, 14); modifyObjectFlag('s', 7, 14);
	modifyObjectFlag('s', 100, 14); set_value(0, 100, 1); modifyObjectFlag('s', 101, 14); set_value(0, 101, 1); modifyObjectFlag('s', 105, 14);
	set_value(0, 120, 2); *getObjectPointer(676) = -1; object_type_3_buffer[676] = MIN_LOCATION_ID - 1; while (++object_type_3_buffer[676] <= MAX_LOCATION_ID) {
		if (isObjectFlagSet(dereference(676), 7))
		{
			modifyObjectFlag('c', dereference(676), 4);
		}
	} modifyObjectFlag('s', 461, 4); modifyObjectFlag('s', LOCATION_GRAY_NOWHERE, 4); set_value(0, 717, 3); set_value(0, 143, 1);
	set_value(0, 716, 999); set_value(0, PREVIOUS_LOCATION, 0); processMoveCommand(378, -2);
} int i45() {
	*getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1;
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isObjectFlagSet(dereference(675), 5)) {
			if (!(item_location[object_type_3_buffer[675]] == LOCATION_BUILDING ||
				item_location[object_type_3_buffer[675]] == LOCATION_LIMBO)) {
				return 0;
			}
		}
	} if (!(item_location[ITEM_STARSTONE] == LOCATION_BUILDING || item_location[ITEM_STARSTONE] == LOCATION_MAGNIFICENT_VIEW || item_location[ITEM_STARSTONE] == LOCATION_LIMBO))
	{
		return 0;
	} if (!(isItemAtLocation(64, -1) || item_location[64] == LOCATION_BUILDING || item_location[64] == LOCATION_LIMBO)) {
		return 0;
	} if (item_location[80] == LOCATION_BUILDING || item_location[80] == LOCATION_LIMBO) { set_value(0, 717, 1); }
} int w26() {
	modifyObjectFlag('s', dereference(697), 7);
	if (object_type_3_buffer[43] > 1) { return 0; } if (object_type_3_buffer[717] == 0) {
		modifyObjectFlag('c', ITEM_STARSTONE, 5); modifyObjectFlag('c', 64, 5);
		i45(); modifyObjectFlag('s', 64, 5); modifyObjectFlag('s', ITEM_STARSTONE, 5); if (object_type_3_buffer[717] == 1) { set_value(0, 716, 35); }
		else
		{
			object_type_3_buffer[716] = cheezy_rand(39 - 30 + 1) + 30;
		} if (object_type_3_buffer[66] > 0) { object_type_3_buffer[66] = cheezy_rand(16) + 1; } if
			(object_type_3_buffer[ITEM_SWORD] > 0) {
			object_type_3_buffer[ITEM_SWORD] = cheezy_rand(14) + 1;
		} if (object_type_3_buffer[20] == 1) {
			object_type_3_buffer[723] -= object_type_3_buffer[724];
			if (object_type_3_buffer[723] < 0) { set_value(0, 20, 2); }
		} if (!(item_location[82] == 484 || g10(82, -1))) {
			set_object_location(82, LOCATION_LIMBO);
		} if (isObjectFlagSet(27, 13) && !(isObjectFlagSet(27, 14)) && !g10(ITEM_DWARF, -1)) {
			modifyObjectFlag('s', 27, 14); printMessage(0, 1170, 0);
			set_value(0, 716, 5); set_value(SET_VALUE_DEREFERENCE, 724, 716); return 0;
		} if (object_type_3_buffer[119] == 2) {
			object_type_3_buffer[722] -= object_type_3_buffer[724];
			if (object_type_3_buffer[722] < 0) {
				set_value(0, 119, 3); set_value(0, 722, 40); printMessage(0, 119, 0); set_value(0, 119, 0);
				set_value(0, MAX_CARRIED_ITEMS, 7); set_value(0, 716, 8); set_value(SET_VALUE_DEREFERENCE, 724, 716); return 0;
			}
		} if (isObjectFlagSet(151, 4) ||
			isObjectFlagSet(163, 4)) {
			if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7) || isObjectFlagSet(dereference(PLAYER_LOCATION), 5)) {
				object_type_3_buffer[716] = cheezy_rand(17 - 8 + 1) + 8;
			}
			else {
				b26(); if ((object_type_3_buffer[699] == 0 && object_type_3_buffer[713] > 150 && !(isObjectFlagSet(19, 4)) || isObjectFlagSet(19, 13)
					|| cheezy_rand(100) < 10) && !(isObjectFlagSet(49, 4)) && !g10(ITEM_DWARF, -1) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 3)) && !(isObjectFlagSet(43, 12)))
				{
					modifyObjectFlag('c', 19, 13); set_value(0, 700, 0); if (object_type_3_buffer[64] == 2) { modifyObjectFlag('c', 64, 5); } if (isObjectFlagSet(62, 12))
					{
						modifyObjectFlag('c', 62, 5);
					} if (isObjectFlagSet(67, 12)) { modifyObjectFlag('c', 67, 5); } copy_item_location_dereferencing_if_variable(676, ITEM_STARSTONE); if (object_type_3_buffer[676] == object_type_3_buffer[PLAYER_LOCATION])
					{
						modifyObjectFlag('c', ITEM_STARSTONE, 5);
					} *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
						if
							(g10(dereference(object_type_3_buffer[675]), 1029)) {
							set_object_location(object_type_3_buffer[675], 192); set_value(0, 700, 1);
						}
					} modifyObjectFlag('s', 64, 5);
					modifyObjectFlag('s', ITEM_STARSTONE, 5); modifyObjectFlag('s', 62, 5); modifyObjectFlag('s', 67, 5); if (object_type_3_buffer[700] == 0) {
						if (isObjectFlagSet(19, 4)
							|| object_type_3_buffer[713] < 150) {
							printMessage(0, 930, 0); modifyObjectFlag('s', 19, 13); object_type_3_buffer[716] = cheezy_rand(13 - 4 + 1) + 4;
						}
						else { set_object_location(49, 192); set_object_location(29, 311); modifyObjectFlag('s', 19, 4); printMessage(0, 998, 0); }
					}
					else {
						if
							(isObjectFlagSet(19, 4)) {
							printMessage(0, 932, 0);
						}
						else {
							printMessage(0, 931, 0); modifyObjectFlag('s', 19, 4); set_object_location(49, 192);
							set_object_location(29, 311);
						}
					}
				}
				else {
					set_value(SET_VALUE_DEREFERENCE, 699, 715); object_type_3_buffer[699] += 2; object_type_3_buffer[699] *= 10; if
						((g10(ITEM_DWARF, -1) || cheezy_rand(100) < object_type_3_buffer[699]) && object_type_3_buffer[ITEM_DWARF] < object_type_3_buffer[715]) {
						if (isObjectFlagSet(115, 4)) {
							set_object_location(ITEM_DWARF, object_type_3_buffer[PLAYER_LOCATION]); object_type_3_buffer[ITEM_DWARF] += 1; if (object_type_3_buffer[ITEM_DWARF] == 1) {
								b26(); if (object_type_3_buffer[699] == 0)
								{
									printMessage(0, ITEM_DWARF, 0);
								} modifyObjectFlag('s', ITEM_DWARF, 13); modifyObjectFlag('c', ITEM_DWARF, 14);
							} if (object_type_3_buffer[686] == 0) {
								randomly_select_item_from_dwarves_to_686();
							}
						}
						else {
							if (!(isObjectFlagSet(dereference(PLAYER_LOCATION), 11))) {
								b26(); if (object_type_3_buffer[699] == 0) {
									set_object_location(ITEM_AXE, object_type_3_buffer[PLAYER_LOCATION]);
									modifyObjectFlag('s', ITEM_AXE, 4); printMessage(0, 783, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		if (object_type_3_buffer[717] == 1) {
			set_value(0, 717, 2);
			set_value(0, 4, 0); printMessage(0, 933, 0); if (g10(ITEM_DWARF, -1)) { printMessage(13, 1039, ITEM_DWARF); } set_object_location(ITEM_DWARF, 484);
			set_value(0, ITEM_DWARF, 0); set_value(0, 715, 0); set_value(0, 760, 0); set_value(0, 686, 0); set_value(0, 8, 0); set_value(0, 30, 0);
			set_object_location(22, LOCATION_LIMBO); set_object_location(20, LOCATION_LIMBO); set_value(0, 22, 4); set_object_location(23, 244); modifyObjectFlag('s', 8, 10); modifyObjectFlag('s', 30, 10);
			set_object_location(82, LOCATION_LIMBO); set_value(0, 716, 30);
		}
		else {
			if (isObjectFlagSet(dereference(710), 4)) {
				modifyObjectFlag('c', dereference(710), 4);
				set_value(0, 716, 15);
			}
			else { j41(); }
		}
	} set_value(SET_VALUE_DEREFERENCE, 724, 716);
} int x30() {
	if (currentCommandContains(113))
	{
		w24();
	} if (currentCommandContains(112)) { r26(); } if (object_type_3_buffer[697] == 1) {
		if ((533 <= object_type_3_buffer[669] &&
			object_type_3_buffer[669] <= 570) || currentCommandContains(COMMAND_SAY)) {
			modifyObjectFlag('s', dereference(697), 5); printMessage(76, 1038, 669);
		} if ((615 <= object_type_3_buffer[669]
			&& object_type_3_buffer[669] <= 629)) {
			printMessage(0, 937, 0);
		}
		else {
			if ((630 <= object_type_3_buffer[669] && object_type_3_buffer[669] <= 659))
			{
				printMessage(12, MESSAGE_NO_X_HERE, 669);
			}
			else { printMessage(0, 1503, 0); }
		}
	}
	else {
		if (object_type_3_buffer[697] == 2 && isObjectFlagSet(dereference(670), 0))
		{
			if (currentCommandContains(112) && isObjectFlagSet(dereference(PLAYER_LOCATION), 9)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1588, 0); } if (g10(dereference(object_type_3_buffer[670]), -1))
			{
				printMessage(12, 1504, 669); printMessage(12, 1505, 670);
			}
			else { printMessage(12, MESSAGE_NO_X_HERE, 670); }
		}
		else {
			if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 663)) {
				if (currentCommandContains(550)) { printMessage(0, MESSAGE_RIDICULOUS, 0); }
				else
				{
					if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 659)) { printMessage(12, MESSAGE_NO_X_HERE, 670); }
					else {
						printMessage(12, 1504, 669);
						printMessage(12, 1505, 670);
					}
				}
			}
			else {
				object_type_3_buffer[699] = cheezy_rand(1009 - 1005 + 1) + 1005; printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0);
			}
		}
	} longjmp(done_with_command, 1);
} int z25() {
	if (object_type_3_buffer[698] > 0) {
		if (object_type_3_buffer[39] == 3) {
			printMessage(0, 1001, 0);
		}
		else {
			if (g10(39, -1)) { printMessage(0, 1000, 0); set_value(0, 39, 3); set_value(0, 698, 400); }
			else {
				if (isObjectFlagSet(39, 4)) { printMessage(0, 999, 0); }
				else {
					if ((168 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 193))
					{
						printMessage(9, 995, 1);
					}
					else {
						if ((300 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 311)) {
							printMessage(9, 995, 2);
						}
						else { printMessage(9, 995, 0); }
					}
				}
			}
		}
	}
	else {
		if (object_type_3_buffer[717] == 2) { j41(); }
		else {
			if
				(g10(39, 1)) {
				printMessage(0, 1000, 0); set_value(0, 39, 3); object_type_3_buffer[698] += 400;
			}
			else {
				printMessage(0, 996, 0);
				set_value(0, 99, 0); modifyObjectFlag('s', dereference(710), 6); b28();
			}
		}
	}
} int h26() {
	modifyObjectFlag('s', dereference(PLAYER_LOCATION), 14);
	if ((329 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 364) || object_type_3_buffer[PLAYER_LOCATION] == 328) {
		modifyObjectFlag('s', 328, 14); *getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364) { modifyObjectFlag('s', dereference(676), 14); }
	} if ((271 <= object_type_3_buffer[PLAYER_LOCATION]
		&& object_type_3_buffer[PLAYER_LOCATION] <= 289)) {
		*getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
			modifyObjectFlag('s', dereference(676), 14);
		}
	} if ((385 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 390)) {
		*getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) { modifyObjectFlag('s', dereference(676), 14); }
	} if ((168 <= object_type_3_buffer[PLAYER_LOCATION]
		&& object_type_3_buffer[PLAYER_LOCATION] <= 193)) {
		*getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193) {
			modifyObjectFlag('s', dereference(676), 14);
		}
	} if ((300 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 311)) {
		*getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) { modifyObjectFlag('s', dereference(676), 14); }
	}
} 

int p36() {
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 14) && !currentCommandContains(COMMAND_HELP) || !(isObjectFlagSet(dereference(PLAYER_LOCATION), 8))) {
		return 0;
	} 
	set_value(0, 677, 0); 
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_ROCK_IN_MIST && currentCommandContains(COMMAND_HELP)) {
		set_value(0, 720, 0); 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1474, 0);
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_OUTSIDE_GRATE && object_type_3_buffer[4] == 0 && !isItemAtLocation(ITEM_KEYS, -1)) { 
		f3(677, 859); 
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 149	&& g10(101, 0) && isItemAtLocation(ITEM_ROD,-1)) {
		f3(677, 806);
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 155 && g10(7, -1))
	{
		if (isObjectFlagSet(dereference(735), 0)) {
			if (!(currentCommandContains(COMMAND_HELP) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 14)))) {
				f3(677, 1579);
			}
		}
		else { 
			if (item_location[101] == LOCATION_LIMBO) { 
				f3(677, 810); 
			} else { 
				f3(677, 808); 
			} 
		}
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_WITTS_END) {
		f3(677, 992);
	} 
	
	if ((object_type_3_buffer[PLAYER_LOCATION] == LOCATION_PLOVER || object_type_3_buffer[PLAYER_LOCATION] == 227 || object_type_3_buffer[PLAYER_LOCATION] == 229) && !(isObjectFlagSet(229, 4))) {
		f3(677, 990);
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 256) { 
		f3(677, 1140); 
	} 
	
	if ((168 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 193) || (300 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 311) || (385 <= object_type_3_buffer[PLAYER_LOCATION]
			&& object_type_3_buffer[PLAYER_LOCATION] <= 390)) {
		f3(677, 987);
	} 
	
	if ((328 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 364)) {
		f3(677, 1217);
	} 
	
	if ((271 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 289)) {
		if (currentCommandContains(COMMAND_HELP) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 14)))
		{
			return 0;
		} else { 
			f3(677, 1320); 
		}
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 427 || object_type_3_buffer[PLAYER_LOCATION] == 428) {
		f3(677, 1654);
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 239) { f3(677, 1318); } if (g10(16, -1)) {
		f3(677, 1431);
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 252) { 
		f3(677, 1436); 
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 264) { 
		f3(677, 1517); 
	}
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 254) {
		if (isObjectFlagSet(dereference(735), 1)) {
			if (!(currentCommandContains(COMMAND_HELP) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 14))))
			{
				f3(677, 1512);
			}
		}
		else { 
			f3(677, 1438); 
			modifyObjectFlag('s', dereference(735), 1); 
		}
	} 
	
	if (g10(24, -1))
	{
		f3(677, 1441);
	} 
	
	if (g10(35, -1)) { 
		f3(677, 1443); 
	} 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 259) {
		if (currentCommandContains(COMMAND_HELP)) {
			f3(677, 1452);
		} else { 
			return 0; 
		}
	} 
	
	if (object_type_3_buffer[677] == 0) {
		return 0;
	} 
	
	set_value(0, 720, 0); 
	
	if (ask_user_yes_or_no_question(object_type_3_buffer[677])) {
		printMessage(9, 985, 20);  // I  can  give  you some advice that might help you solve your problem, but I'll have to charge you 20 points for it.  TANSTAAFL, y'know!
		
		if (ask_user_yes_or_no_question(986)) {
			object_type_3_buffer[677]+= 1; 
			printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); 

			object_type_3_buffer[707] += 20; 
			modifyObjectFlag('c', dereference(PLAYER_LOCATION), 8); 
			modifyObjectFlag('c', dereference(PLAYER_LOCATION), 14);
			object_type_3_buffer[677] -= 1; 

			if (object_type_3_buffer[PLAYER_LOCATION] == 427) { 
				modifyObjectFlag('c', 428, 8); 
			} 
			
			if (object_type_3_buffer[PLAYER_LOCATION] == 428) {
				modifyObjectFlag('c', 427, 8);
			} if (g10(7, -1)) {
				if (object_type_3_buffer[677] == 1579) { modifyObjectFlag('c', dereference(735), 0); }
				else {
					modifyObjectFlag('s', dereference(PLAYER_LOCATION), 8);
					modifyObjectFlag('s', dereference(735), 0);
				}
			} if (object_type_3_buffer[PLAYER_LOCATION] == 254) {
				if (object_type_3_buffer[677] == 1512) {
					modifyObjectFlag('c', dereference(735), 1);
				}
				else { modifyObjectFlag('s', dereference(PLAYER_LOCATION), 8); modifyObjectFlag('s', dereference(735), 1); }
			} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_PLOVER || object_type_3_buffer[PLAYER_LOCATION] == 227
				|| object_type_3_buffer[PLAYER_LOCATION] == 229) {
				modifyObjectFlag('c', LOCATION_PLOVER, 8); modifyObjectFlag('c', 229, 8); modifyObjectFlag('c', 227, 8);
			} if (object_type_3_buffer[PLAYER_LOCATION] == 254
				&& isObjectFlagSet(197, 4) && isObjectFlagSet(dereference(735), 1)) {
				printMessage(0, MESSAGE_SUCKER, 0);
			} if (g10(35, -1)) {
				modifyObjectFlag('c', 314, 8);
				modifyObjectFlag('c', 315, 8);
			} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_WITTS_END) { modifyObjectFlag('s', dereference(735), 2); } if ((328 <= object_type_3_buffer[PLAYER_LOCATION]
				&& object_type_3_buffer[PLAYER_LOCATION] <= 364) || object_type_3_buffer[PLAYER_LOCATION] == 328) {
				modifyObjectFlag('c', 328, 8); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328;
				while (++object_type_3_buffer[676] <= 364) { modifyObjectFlag('c', dereference(676), 8); }
			} if ((271 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 289))
			{
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
					modifyObjectFlag('c', dereference(676), 8);
				}
			} if ((385 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 390)) {
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while
					(++object_type_3_buffer[676] <= 390) {
					modifyObjectFlag('c', dereference(676), 8);
				}
			} if ((168 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 193))
			{
				if (object_type_3_buffer[168] == 0) { printMessage(0, 989, 0); }
				else { 
					printBlankLine();
				} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167;
				while (++object_type_3_buffer[676] <= 193) { modifyObjectFlag('c', dereference(676), 8); }
			} if ((300 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 311))
			{
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) {
					modifyObjectFlag('c', dereference(676), 8);
				}
			} if (g10(16, -1)) { modifyObjectFlag('c', 165, 8); modifyObjectFlag('c', 166, 8); }
		}
		else { h26(); }
	}
	else { h26(); }
}
