/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int r29() {
	b26(); 
	if (object_type_3_buffer[699] == 0) {
		if ((168 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 193) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 11))) {
			printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_CRAWLED_AROUND, 0); // You  have  crawled around in some little passages and wound up back where you started from.
		} 
		
		if (currentCommandContains(COMMAND_GO)) {
			set_value(SET_VALUE_DEREFERENCE, 674, 670);
		}
		else { 
			set_value(SET_VALUE_DEREFERENCE, 674, 669); 
		} 
		
		object_type_3_buffer[677] = cheezy_rand(797 - 792 + 1) + 792; 
		printMessage(78, 677, 674);
	} 
	
	if (cheezy_rand(100) < 25 && object_type_3_buffer[PLAYER_LOCATION] != LOCATION_CELLAR && object_type_3_buffer[717] < 3) { 
		printMessage(0, 812, 0); // You fell into a pit and broke every bone in your body!
		die(); 
	} 
	
	printMessage(PRINT_MESSAGE_END_COMMAND, 798, 0); // You have run into a wall of rock and can go no further in this direction.
} 

int t37() {
	set_object_location(118, LOCATION_LIMBO); printMessage(0, 1092, 0); object_type_3_buffer[677] = cheezy_rand(1099 - 1093 + 1) + 1093;
	printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); if (g10(33, -1)) { set_value(0, 118, 8); set_object_location(33, LOCATION_LIMBO); }
	else {
		if (g10(ITEM_DWARF, -1))
		{
			printBlankLine(); if (object_type_3_buffer[ITEM_DWARF] == 1) { set_value(0, 118, 1); }
			else { set_value(0, 118, 2); }
			set_value(SET_VALUE_DEREFERENCE, 704, ITEM_DWARF); printMessage(0, 118, 0); r27(); longjmp(done_with_command, 1);
		} if (g10(22, -1)) {
			set_value(0, 118, 3);
		} if (g10(38, -1)) { set_value(0, 118, 4); if (object_type_3_buffer[38] > 0) { set_value(0, 118, 5); } } if (g10(7, -1))
		{
			set_value(0, 118, 6);
		} if (g10(101, -1)) { set_value(0, 118, 7); } if (g10(20, -1) && object_type_3_buffer[20] == 0)
		{
			set_value(0, 118, 9);
		} if (g10(27, -1)) { set_value(0, 118, 10); } if (g10(25, -1) && object_type_3_buffer[25] < 2)
		{
			set_value(0, 118, 11);
		} if (g10(ITEM_GOBLINS, -1)) { set_value(0, 118, 12); set_object_location(ITEM_GOBLINS, 484); } if (g10(87, -1))
		{
			set_value(0, 118, 13);
		} if (g10(24, -1)) { set_value(0, 118, 14); }
	} if (object_type_3_buffer[118] > 0) {
		printMessage(0, 118, 0);
	} longjmp(done_with_command, 1);
} int t38() {
	if (isItemAtLocation(118, -1) && cheezy_rand(100) < 10)
	{
		printMessage(0, 1091, 0); set_object_location(118, LOCATION_LIMBO); die();
	}
} 

int t39() {
	b26(); 

	if (object_type_3_buffer[699] == 0)
	{
		set_value(SET_VALUE_DEREFERENCE, 700, ITEM_DWARF); 
		object_type_3_buffer[700] += 2; 
		object_type_3_buffer[700] = cheezy_rand(object_type_3_buffer[700]); 
		object_type_3_buffer[700] -= 1; 
		if (object_type_3_buffer[700] < 1) {
			return 0;
		} 
		
		printMessage(13, 784, 700); // * nasty sharp knives are thrown at you!
		set_value(SET_VALUE_DEREFERENCE, 701, MAX_CARRIED_ITEMS); 
		object_type_3_buffer[701] -= object_type_3_buffer[CARRIED_ITEM_COUNT];
		object_type_3_buffer[701] *= 5; 
		
		if (isObjectFlagSet(ITEM_DWARF, 14)) { 
			object_type_3_buffer[701] -= 20; 
		} 
		
		object_type_3_buffer[728] += object_type_3_buffer[701]; 
		object_type_3_buffer[728] += 35; 
		object_type_3_buffer[728] /= object_type_3_buffer[700]; 
		
		if (object_type_3_buffer[64] == 2) {
			object_type_3_buffer[701] = cheezy_rand(5); 
			if (object_type_3_buffer[701] > 0)
			{
				f3(677, 786); 
				object_type_3_buffer[677] += object_type_3_buffer[701]; 
				printMessage(15, 677, 700); 
				return 0;
			}
		} 
		
		if (cheezy_rand(100) < object_type_3_buffer[728] || isObjectFlagSet(ITEM_DWARF, 13)) {
			printMessage(13, 785, 700); // They miss you!
			modifyObjectFlag('c', ITEM_DWARF, 13); 
		} else {
			printMessage(13, 786, 700); // One of them gets you!
			// BJB - this is too annoying die();
		}
	}
} 

int o21() {
	if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) {
		if (currentCommandContains(COMMAND_THROW)) {
			set_object_location(object_type_3_buffer[670], PLAYER_LOCATION);
		} if (g10(ITEM_DWARF, -1)) {
			set_value(SET_VALUE_DEREFERENCE, 699, MAX_CARRIED_ITEMS); object_type_3_buffer[699] -= object_type_3_buffer[CARRIED_ITEM_COUNT]; object_type_3_buffer[699] *= 5; set_value(SET_VALUE_DEREFERENCE, 700, ITEM_DWARF);
			object_type_3_buffer[700] += 2; object_type_3_buffer[700] *= 15; object_type_3_buffer[699] += object_type_3_buffer[700]; if (currentCommandContains(ITEM_AXE) || currentCommandContains(547))
			{
				if (!(currentCommandContains(ITEM_AXE) && currentCommandContains(547))) { object_type_3_buffer[699] += 15; }
			} if (cheezy_rand(100) < object_type_3_buffer[699]) {
				if (cheezy_rand(100) < 5 && !(isObjectFlagSet(dereference(710), 8))) {
					printMessage(12, 952, 670); modifyObjectFlag('s', dereference(710), 8);
				}
				else { printMessage(0, 951, 0); } set_value(0, 704, 1); r27(); if (object_type_3_buffer[ITEM_DWARF] > 0) {
					set_value(0, 728, 0);
					set_value(0, 727, 100);
				}
			}
			else { printMessage(0, 834, 0); set_value(0, 728, 0); set_value(0, 727, 100); }
		}
		else {
			if (g10(7, -1)) {
				if (currentCommandContains(COMMAND_THROW)) { set_object_location(object_type_3_buffer[670], r5); } printMessage(PRINT_MESSAGE_END_COMMAND, 832, 0);
			} if (g10(20, -1)) { printMessage(76, 955, 670); } if (g10(38, -1)) {
				if (object_type_3_buffer[38] == 0) {
					if (currentCommandContains(COMMAND_THROW)) {
						if (currentCommandContains(ITEM_AXE)) { set_value(0, ITEM_AXE, 1); printMessage(PRINT_MESSAGE_END_COMMAND, 974, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1102, 0);
					} if (cheezy_rand(100) < 50) { printMessage(PRINT_MESSAGE_END_COMMAND, 1103, 0); } printMessage(0, 1104, 0); die();
				} printMessage(76, 975, 38);
			} if (g10(22, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 967, 0); } if (g10(24, -1)) {
				if (currentCommandContains(547)) {
					printMessage(12, 1115, 670);
					die();
				} if (currentCommandContains(ITEM_AXE)) { printMessage(12, 1116, 670); die(); } modifyObjectFlag('c', 323, 8); set_object_location(24, LOCATION_LIMBO);
				set_object_location(ITEM_SWORD, PLAYER_LOCATION); set_value(0, 733, 6); modifyObjectFlag('c', 323, 5); printMessage(PRINT_MESSAGE_END_COMMAND, 1117, 0);
			} if (g10(17, -1))
			{
				printMessage(76, 1137, 670);
			} if (g10(25, -1)) {
				if (object_type_3_buffer[25] > 1) {
					if (currentCommandContains(COMMAND_THROW)) {
						set_object_location(object_type_3_buffer[670], r5);
					} printMessage(PRINT_MESSAGE_END_COMMAND, 976, 0);
				} printMessage(12, 1146, 670); die();
			} if (g10(27, -1)) {
				printMessage(76, 1147, 670);
			} if (g10(ITEM_GOBLINS, -1)) { printMessage(12, 1148, 670); die(); } if (g10(135, -1)) {
				printMessage(12, 1314, 670);
				die();
			} if (currentCommandContains(COMMAND_THROW)) { set_object_location(object_type_3_buffer[670], r5); return 0; } printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		}
	}
	else { printMessage(76, 1027, 670); } longjmp(done_with_command, 1);
} int r30() {
	if (g10(35, -1))
	{
		modifyObjectFlag('c', 314, 8); modifyObjectFlag('c', 315, 8); if (object_type_3_buffer[35] == 0) {
			if (object_type_3_buffer[697] == 2 && object_type_3_buffer[670] == object_type_3_buffer[683]
				|| object_type_3_buffer[669] == object_type_3_buffer[683]) {
				set_value(0, 35, 1); modifyObjectFlag('s', 35, 13); if (!(isObjectFlagSet(462, 4))) {
					set_value(0, 733, 11);
				} printMessage(PRINT_MESSAGE_END_COMMAND, 1131, 0);
			} if (!(isObjectFlagSet(35, 13))) {
				set_value(0, 35, 2); set_value(0, 17, 1); modifyObjectFlag('s', dereference(710), 1);
				modifyObjectFlag('s', dereference(710), 3); set_value(0, 4, 0); printMessage(PRINT_MESSAGE_END_COMMAND, 1134, 0);
			}
		}
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_NOTHING_HAPPENS, 0);
} 

int j42()
{
	if (object_type_3_buffer[17] > 0) {
		object_type_3_buffer[17] += 1; 
		if (object_type_3_buffer[17] > 15) { 
			set_object_location(17, object_type_3_buffer[PLAYER_LOCATION]); 
		} 
		f3(677, 1521);
		object_type_3_buffer[677] += object_type_3_buffer[17]; 
		object_type_3_buffer[677] -= 2; 
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); 
		if (object_type_3_buffer[17] == 18) { 
			die(); 
		}
	}
} 

int s30() { 
	if (object_type_3_buffer[697] > 1) { 
		printMessage(12, 1040, 670); 
	} 
} 

int jump_into_bottomless_pit() {
	processMoveCommand(LOCATION_LIMBO, -1);

	if (object_type_3_buffer[ITEM_LAMP] == 1) {
		set_value(0, 698, 0); 
		if (isItemAtLocation(ITEM_LAMP, -1)) {
			printMessage(0, 1158, 0); // You  have  jumped into a bottomless pit.  You continue to fall for a very long time.  First, your lamp runs out of power and goes dead.  Later, you die of hunger and thirst.
		} else {
			printMessage(0, 1159, 0); // You have jumped into a bottomless pit.  Eventually, you die of thirst.
		}
	} else { 
		printMessage(0, 1159, 0); // You have jumped into a bottomless pit.  Eventually, you die of thirst.
	} 
	die();
} 

int n24() {
	if (currentCommandContains(101) || currentCommandContains(38)) {
		return 0;
	} set_value(0, 677, 0); if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_MAGNIFICENT_VIEW) {
		f3(677, 1200); f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 150) { f3(677, 1201); f3(676, 151); } if (object_type_3_buffer[PLAYER_LOCATION] == 152) {
		f3(677, 1202);
		f3(676, 224);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 153) { f3(677, 1202); f3(676, 224); } if (object_type_3_buffer[PLAYER_LOCATION] == 156)
	{
		f3(677, 1201); f3(676, 159);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 157) {
		f3(677, 1201); f3(676, 158);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 160) { f3(677, 1203); f3(676, 198); } if (object_type_3_buffer[PLAYER_LOCATION] == 165) {
		f3(677, 1201);
		f3(676, 237);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 166) { f3(677, 1201); f3(676, 237); } if (object_type_3_buffer[PLAYER_LOCATION] == 199)
	{
		f3(677, 1201); f3(676, 200);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 201) {
		f3(677, 1203); f3(676, 202);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 193) { f3(677, 1201); f3(676, 149); } if (object_type_3_buffer[PLAYER_LOCATION] == 210) {
		f3(677, 1204);
		f3(676, LOCATION_SLAB_ROOM);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 211) { f3(677, 1204); f3(676, 207); } if (object_type_3_buffer[PLAYER_LOCATION] == 215)
	{
		f3(677, 1205); f3(676, 216);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 221) {
		f3(677, 1204); f3(676, 213);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 224) { f3(677, 1206); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 230) {
		f3(677, 1207);
		f3(676, 224);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 238) { f3(677, 1204); f3(676, 176); } if (object_type_3_buffer[PLAYER_LOCATION] == 239
		|| object_type_3_buffer[PLAYER_LOCATION] == 240) {
		f3(677, 1215); f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 242) {
		f3(677, 1204);
		f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 244) { f3(677, 1208); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 245)
	{
		f3(677, 1208); f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 252) {
		f3(677, 1209); f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_SOUTH_END_STONE_FACES) { f3(677, 1209); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 261) {
		f3(677, 1210);
		f3(676, 260);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 463) { f3(677, 1214); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 262)
	{
		f3(677, 1211); f3(676, 255);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 265) {
		f3(677, 1212); f3(676, 266);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 266) { f3(677, 1212); f3(676, 267); } if (object_type_3_buffer[PLAYER_LOCATION] == 267) {
		f3(677, 1212);
		f3(676, 268);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 325) { f3(677, 1201); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 326)
	{
		f3(677, 1201); f3(676, LOCATION_LIMBO);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 327) {
		f3(677, 1213); f3(676, 328);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 365) { f3(677, 1201); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 376) {
		f3(677, 1214);
		f3(676, 377);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 382) { f3(677, 1209); f3(676, LOCATION_LIMBO); } if (object_type_3_buffer[PLAYER_LOCATION] == 204)
	{
		f3(677, 1204); f3(676, 203);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 395) {
		f3(677, 954); f3(676, 394);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 408) { f3(677, 954); f3(676, 203); } if ((399 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 404))
	{
		f3(677, 954); set_value(SET_VALUE_DEREFERENCE, 676, PLAYER_LOCATION); object_type_3_buffer[676] -= 1;
	} if (object_type_3_buffer[PLAYER_LOCATION] == 394) {
		set_value(0, 677, 1);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151) {
		f3(677, 1680); if (isObjectFlagSet(dereference(670), 11)) {
			object_type_3_buffer[677] += 1;
		} f3(676, 150);
	} if (object_type_3_buffer[677] == 0) { return 0; } if (object_type_3_buffer[PLAYER_LOCATION] == 394) {
		q36();
	}
	else { printMessage(14, 677, 670); set_object_location(object_type_3_buffer[670], object_type_3_buffer[676]); } if (currentCommandContains(53)) {
		set_object_location(53, LOCATION_LIMBO);
		set_object_location(54, object_type_3_buffer[676]); if (!(item_location[54] == LOCATION_LIMBO)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1216, 0); }
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151)
	{
		if (currentCommandContains(44)) { set_value(0, 154, 1); set_value(0, 7, 1); printMessage(PRINT_MESSAGE_END_COMMAND, 1682, 0); }
	} if (currentCommandContains(111))
	{
		if (object_type_3_buffer[111] == 3 || object_type_3_buffer[111] == 4) { modifyObjectFlag('s', dereference(676), 15); }
	} if (currentCommandContains(113) ||
		currentCommandContains(112)) {
		set_value(0, 700, 3); if (currentCommandContains(113)) { set_value(0, 700, 4); } if (isItemAtLocation(111, dereference(object_type_3_buffer[700])))
		{
			set_value(0, 111, 2);
		}
		else { if (isItemAtLocation(114, dereference(object_type_3_buffer[700]))) { set_value(0, 114, 2); } }
	} if
		(currentCommandContains(100) && isItemAtLocation(ITEM_BIRD, -1)) {
		set_object_location(101, object_type_3_buffer[676]); if (!(item_location[101] == LOCATION_LIMBO)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 151)
			{
				set_value(0, 700, 1);
			}
			else { set_value(0, 700, 0); printBlankLine(); } printMessage(12, 1543, 700);
		}
		longjmp(done_with_command, 1);
	} if (currentCommandContains(99) && object_type_3_buffer[99] == 1) {
		b26(); if (object_type_3_buffer[699] > 0) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 805, 0);
		}
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151) { printBlankLine(); } longjmp(done_with_command, 1);
} int u26() {
	if (object_type_3_buffer[697] == 1)
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1219, 0);
	} if (isObjectFlagSet(dereference(670), 0)) {
		if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1) || !(isObjectFlagSet(dereference(670), 3)))
		{
			return 0;
		} set_value(SET_VALUE_DEREFERENCE, 699, CARRIED_ITEM_COUNT); object_type_3_buffer[699] -= object_type_3_buffer[MAX_CARRIED_ITEMS]; object_type_3_buffer[699] *= 5; object_type_3_buffer[699]
			+= 60; if (cheezy_rand(100) < object_type_3_buffer[699]) { printMessage(12, 1220, 670); die(); } printMessage(76, 1221, 670);
	}
} 

int process_sewage() {
	object_type_3_buffer[SEWAGE_COUNT] += 1; 
	if (cheezy_rand(100) < 40) {
		object_type_3_buffer[SEWAGE_COUNT] -= 2; 
		if (object_type_3_buffer[SEWAGE_COUNT] < 0)
		{
			set_value(0, SEWAGE_COUNT, 1);
		}
	} 
	
	f3(677, 1237); 
	object_type_3_buffer[677] += object_type_3_buffer[SEWAGE_COUNT]; 
	printBlankLine(); 

	if (object_type_3_buffer[SEWAGE_COUNT] == 7)
	{
		if (object_type_3_buffer[PLAYER_LOCATION] == 420 || object_type_3_buffer[PLAYER_LOCATION] == 421) { 
			object_type_3_buffer[677] += 1; 
		} 
		
		if (isItemAtLocation(ITEM_FOOD, -1)) {
			set_object_location(ITEM_FOOD, 484);
		} 
		processMoveCommand(419, -1); 
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); 
		die();
	} 
	
	printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0);

	/* Messages :
		Sewage laps about your legs.
		Sewage laps about your knees.
		The sewage comes above your knees.
		The sewage comes nearly up to your waist.  This is not at all pleasant!
		You are up to your waist in sewage.  Lets leave!
		The sewage comes nearly up to your chest!  Lets get out of here!
		You are nearly up to your neck in sewage.  Help!!!
		The pipe has completely filled with sewage......
	*/
} 

int u27() {
	if (object_type_3_buffer[135] > 3)
	{
		if ((isItemAtLocation(ITEM_STARSTONE, -1) || isObjectFlagSet(135, 14)) && isObjectFlagSet(27, 14)) {
			printMessage(0, 1365, 0); set_object_location(135, LOCATION_LIMBO);
			set_value(0, 135, 0);
		}
		else {
			if (cheezy_rand(100) < 20 || !(isObjectFlagSet(27, 14))) {
				modifyObjectFlag('s', 135, 14);
			} set_value(0, 135, 5); processMoveCommand(139, -1361);
		} return 0;
	} if (isItemAtLocation(88, -1)) {
		printMessage(0, 1306, 0);
		if (!(isObjectFlagSet(27, 14))) { printMessage(0, 1307, 0); } set_object_location(83, object_type_3_buffer[PLAYER_LOCATION]); set_object_location(135, LOCATION_MAGNIFICENT_VIEW); set_value(0, 135, 4);
		set_object_location(88, LOCATION_LIMBO); return 0;
	} if (isItemAtLocation(50, -1)) {
		set_value(0, 135, 2); object_type_3_buffer[757] = cheezy_rand(60 - 40 + 1) + 40;
		printMessage(8, 1305, 0); printMessage(0, 1308, 0); set_object_location(50, 484); if (!(isObjectFlagSet(385, 4))) {
			set_value(0, 733, 3);
		}
	}
	else {
		if (object_type_3_buffer[135] == 0) {
			if (isObjectFlagSet(135, 4) && !isItemAtLocation(110, -1) && !(isObjectFlagSet(135, 13))
				&& cheezy_rand(100) < 10) {
				printMessage(0, 1315, 0); modifyObjectFlag('s', 135, 13); return 0;
			}
			else {
				set_value(0, 701, 0);
				*getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
					if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1)
						&& object_type_3_buffer[675] != 99) {
						if (isObjectFlagSet(dereference(675), 16)) {
							z5(700, 675); if (object_type_3_buffer[700] < 2) {
								set_object_location(object_type_3_buffer[675], PLAYER_LOCATION);
								object_type_3_buffer[701] += 1;
							}
						}
						else { set_object_location(object_type_3_buffer[675], PLAYER_LOCATION); object_type_3_buffer[701] += 1; }
					}
				} if (g10(110, -1))
				{
					object_type_3_buffer[701] -= 1;
				} printMessage(12, 1305, 701); if (g10(110, -1)) {
					set_object_location(110, 484); processMoveCommand(LOCATION_PANTRY, -1309);
				}
				else {
					set_value(0, 135, 1); object_type_3_buffer[757] = cheezy_rand(10 - 6 + 1) + 6; object_type_3_buffer[758] = cheezy_rand(10 - 8 + 1) + 8; processMoveCommand(384, -1310);
				}
			}
		} if (object_type_3_buffer[135] == 1) {
			printMessage(8, 1305, 0); if (object_type_3_buffer[757] > 0) { processMoveCommand(384, -1310); } printMessage(0, 1311, 0);
			set_value(0, 135, 0); die();
		}
	}
} int h27() {
	if (object_type_3_buffer[135] == 1) {
		b26(); if (object_type_3_buffer[699] == 0
			&& object_type_3_buffer[758] == 0) {
			printMessage(0, 1262, 0);
		} if (object_type_3_buffer[757] < 1) {
			set_value(0, 699, 9); object_type_3_buffer[699]
				+= object_type_3_buffer[757]; if (object_type_3_buffer[699] < 1) { set_value(0, 699, 1); } object_type_3_buffer[699] *= 10; if (cheezy_rand(100) < object_type_3_buffer[699])
			{
				printMessage(0, 1312, 0);
			}
				else {
					printMessage(0, 1313, 0); printMessage(0, 1311, 0); processMoveCommand(383, -1); set_value(0, 135, 0);
					die();
				}
		}
	}
} 

int update_thirst() {
	object_type_3_buffer[THIRST_COUNTER] -= object_type_3_buffer[CARRIED_ITEM_COUNT]; 

	if (object_type_3_buffer[THIRST_COUNTER] < 155 && object_type_3_buffer[THIRST_COUNTER]>135)
	{
		printMessage(0, 1341, 0); // Exploring  is a thirsty work.  You must soon take a drink or lighten your load.
		object_type_3_buffer[THIRST_COUNTER] = cheezy_rand(135 - 110 + 1) + 110;
	}
	else {
		if (object_type_3_buffer[THIRST_COUNTER] < 60 &&
			object_type_3_buffer[THIRST_COUNTER]>40) {
			printMessage(0, 1342, 0); // I cannot go much further without a drink.
			object_type_3_buffer[THIRST_COUNTER] = cheezy_rand(39 - 25 + 1) + 25;
		} else {
			if (object_type_3_buffer[THIRST_COUNTER] < 0)
			{
				printMessage(0, 1343, 0); // You have collapsed and died of thirst!
				object_type_3_buffer[THIRST_COUNTER] = cheezy_rand(650 - 550 + 1) + 550; 
				die();
			}
		}
	}
} 

int r31() {
	if
		(isObjectFlagSet(16, 14)) {
		modifyObjectFlag('s', 16, 13); modifyObjectFlag('c', 16, 14);
	}
} 

int fee_fie_foe_foo_out_of_order() {
	if (object_type_3_buffer[FEE_FIE_FOE_FOO_COUNT] > -1)
	{
		printMessage(0, 1068, 0); // What's  the  matter,  can't  you read?  Now you'll have to start all over again...
	} else { 
		printMessage(0, MESSAGE_NOTHING_HAPPENS, 0); 
	} 
	set_value(0, FEE_FIE_FOE_FOO_COUNT, 0);
} 

int h29() {
	if (isObjectFlagSet(dereference(670), 16))
	{
		z5(700, 670); if (object_type_3_buffer[700] > 1) {
			c16(670, 1); if (!(object_type_3_buffer[670] == 64)) {
				modifyObjectFlag('c', dereference(670), 12);
			}
		}
	} if (isObjectFlagSet(dereference(670), 7)) {
		z5(700, 670); if (object_type_3_buffer[700] == 0) {
			if (object_type_3_buffer[670] == 111)
			{
				set_value(0, 111, 2);
			}
			else { c16(670, 1); }
		}
	}
} int n25() {
	if (object_type_3_buffer[678] == object_type_3_buffer[PREVIOUS_LOCATION])
	{
		processMoveCommand(object_type_3_buffer[679], -2);
	} if (object_type_3_buffer[679] == object_type_3_buffer[PREVIOUS_LOCATION]) { processMoveCommand(object_type_3_buffer[678], -2); } printMessage(PRINT_MESSAGE_END_COMMAND, 799, 0);
} int h30() {
	if (isObjectFlagSet(8, 13)) { printMessage(0, 1488, 0); }
	else {
		printMessage(0, 1487, 0); modifyObjectFlag('s', 8, 13);
	}
} int i46() {
	if (object_type_3_buffer[ITEM_RAT] > 1) {
		if (currentCommandContains(554)) { printMessage(PRINT_MESSAGE_END_COMMAND, 867, 0); } if (currentCommandContains(559))
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 1502, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1501, 0);
	} printMessage(76, MESSAGE_NO_X_HERE, ITEM_RAT);
} int v38() {
	set_value(0, 117, 0);
	if (currentCommandContains(COMMAND_THROW) && object_type_3_buffer[PLAYER_LOCATION] != LOCATION_CELLAR && !g10(ITEM_GOBLINS, -1)) { n24(); } printMessage(0, 1510, 0); set_object_location(117, PLAYER_LOCATION);
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) { e24(); } if (g10(ITEM_GOBLINS, -1)) {
		set_object_location(117, LOCATION_LIMBO); set_object_location(ITEM_GOBLINS, LOCATION_LIMBO);
		printMessage(PRINT_MESSAGE_END_COMMAND, 1151, 0);
	} longjmp(done_with_command, 1);
} int s31() {
	if (g10(8, -1)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1538, 0);
	} if (g10(30, -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1549, 0); } if (g10(21, -1)) {
		if (object_type_3_buffer[21] == 0) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1539, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1540, 0);
	}
} int c28() {
	object_type_3_buffer[699] = object_type_3_buffer[700] - 1; while (++object_type_3_buffer[699] <= object_type_3_buffer[701])
	{
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0); if (object_type_3_buffer[699] < object_type_3_buffer[701]) { if (!(ask_user_yes_or_no_question(944))) { return 0; } }
	}
}
int v39() { object_type_3_buffer[677] = cheezy_rand(852 - 847 + 1) + 847; printMessage(78, 677, 669); } int o23() {
	f3(677, 1591);
	object_type_3_buffer[677] += object_type_3_buffer[11]; printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); object_type_3_buffer[11] += 1; if (object_type_3_buffer[11] > 2) {
		set_value(0, 11, 0);
		modifyObjectFlag('s', 12, 10);
	}
	else { modifyObjectFlag('c', 12, 10); } printBlankLine(); printMessage(0, 11, 0); set_value(SET_VALUE_DEREFERENCE, 12, 11);
} 

int u28() {
	if (currentCommandContains(120) || currentCommandContains(125)) {
		if (currentCommandContains(COMMAND_LOOK) || currentCommandContains(562)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1397, 0); // It says the same thing as it did before.
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	}
} 

int b30() {
	if (currentCommandContains(COMMAND_EXIT)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1551, 0); } if (!(currentCommandContains(641)))
	{
		return 0;
	} if (currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1636, 0); } if (currentCommandContains(556) || currentCommandContains(COMMAND_BREAK) ||
		currentCommandContains(536) || currentCommandContains(COMMAND_CLOSE)) {
		printMessage(76, 1637, 669);
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} 

int maybe_look_at_slab() {
	if (currentCommandContains(LOCATION_SLAB_ROOM)) {
		if (currentCommandContains(COMMAND_LOOK)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1640, 0); // A  massive  hunk  of  stone.   Nothing particularly special about it.
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	}
} 

int check_command_steps()
{
	if (currentCommandContains(ITEM_STEPS)) {
		printMessage(76, MESSAGE_FIXTURE, 5); 
	}
} 

int h31() {
	if (object_type_3_buffer[717] == 5) {
		if (isObjectFlagSet(dereference(717), 0))
		{
			printMessage(0, MESSAGE_CONFUSED, 0); // Sorry, somehow I think I got confused again...
		} else { 
			modifyObjectFlag('s', dereference(717), 0); 
			printMessage(0, 1661, 0);   // Oh...   something  strange  here.   Don't  think  this  is  where we were supposed to wind up.
		} 
		processMoveCommand(object_type_3_buffer[679], -2);
	} 
	processMoveCommand(object_type_3_buffer[678], -2);
} 

int o24() {
	if (item_location[82] == 379) {
		if (isObjectFlagSet(82, 14)) {
			if (isObjectFlagSet(82, 13))
			{
				modifyObjectFlag('c', 82, 13); printMessage(PRINT_MESSAGE_END_COMMAND, 1582, 0);
			}
			else { set_object_location(82, LOCATION_LIMBO); printMessage(PRINT_MESSAGE_END_COMMAND, 1584, 0); }
		}
		else {
			printMessage(0, 1582, 0); if (isObjectFlagSet(82, 13)) { modifyObjectFlag('s', 82, 14); printMessage(PRINT_MESSAGE_END_COMMAND, 1583, 0); } modifyObjectFlag('s', 82, 13);
			longjmp(done_with_command, 1);
		}
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1582, 0);
} int z27() {
	if (!g10(dereference(object_type_3_buffer[670]), -1))
		return 0; if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) { printMessage(76, 925, 670); } if (isItemAtLocation(51, -1)) {
		if (currentCommandContains(106)) { set_object_location(106, LOCATION_LIMBO); set_object_location(107, object_type_3_buffer[PLAYER_LOCATION]); set_object_location(59, 234); printMessage(PRINT_MESSAGE_END_COMMAND, 927, 0); }
		printMessage(PRINT_MESSAGE_END_COMMAND, 928, 0);
	} printMessage(76, 926, 670);
} int c29() {
	if (currentCommandContains(COMMAND_TAKE) || currentCommandContains(535)) {
		return 0;
	} f3(700, 3); if (object_type_3_buffer[700] == object_type_3_buffer[669]) { printMessage(PRINT_MESSAGE_END_COMMAND, 1485, 0); } if (currentCommandContains(601))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1679, 0);
	} printMessage(12, 1483, 669); printMessage(76, 1484, 670);
} int o25() {
	if (isItemAtLocation(114, 4)
		|| isItemAtLocation(111, 4)) {
		if (isItemAtLocation(111, 4)) { set_value(0, 111, 2); }
		else { set_value(0, 114, 2); }
	}
	else { printMessage(76, 1027, 113); }
} int t40() {
	if (!(g10(66, -1))) {
		printMessage(76, MESSAGE_NO_X_HERE, 670);
	} set_value(SET_VALUE_DEREFERENCE, 699, 670); f3(702, 642); object_type_3_buffer[699] -= object_type_3_buffer[702]; if (object_type_3_buffer[66] == 0 && object_type_3_buffer[699] == 1
		|| object_type_3_buffer[66] == object_type_3_buffer[699]) {
		f3(702, 66); special_action(10, 702);
	}
	else {
		printMessage(76, MESSAGE_NO_X_HERE, 670);
	} if (!currentCommandIsOneOf(643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, -1))
		return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 776, 0);
} 

int command_outside_building_136() {
	if (currentCommandContains(COMMAND_LOOK)) {
		if (currentCommandContains(LOCATION_BUILDING)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1639, 0);
		} 
		return 0;
	} 
	processMoveCommand(137, 0, 136, COMMAND_WEST, -COMMAND_UP); 
	processMoveCommand(LOCATION_BUILDING, 0, COMMAND_ENTER, LOCATION_BUILDING, -COMMAND_EAST); 
	processMoveCommand(142, 0, COMMAND_DOWNSTREAM, 626, COMMAND_SOUTH, -COMMAND_DOWN);
	processMoveCommand(440, 0, COMMAND_NORTH, -622); 
	processMoveCommand(458, 0, -COMMAND_NORTHEAST); 
	processMoveCommand(460, 0, -COMMAND_SOUTHEAST); 
	processMoveCommand(450, 0, -COMMAND_SOUTHWEST); 
	processMoveCommand(457, 0, COMMAND_NORTHWEST, -457);
	processMoveCommand(138, 0, -138); 
	if (currentCommandContains(LOCATION_OUTSIDE_GRATE) || currentCommandContains(619)) {
		f3(679, 461); 
		if (currentCommandContains(LOCATION_OUTSIDE_GRATE)) {
			f3(678, LOCATION_OUTSIDE_GRATE);
		} else { 
			f3(678, LOCATION_MAGNIFICENT_VIEW); 
		} 
		h31();
	} 
	
	if (currentCommandContains(6)) { 
		printMessage(72, 1458, 526);  // The building may have had a proper door once, but if so, it is long gone.  If you want to get in, why not just go in?
	}
} 

int r32()
{
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(LOCATION_END_OF_ROAD, 0, 136, LOCATION_BUILDING, -COMMAND_EAST); processMoveCommand(457, 0, -COMMAND_NORTH); processMoveCommand(440, 0, COMMAND_NORTHEAST, -622);
	processMoveCommand(142, 0, -COMMAND_SOUTHEAST); processMoveCommand(450, 0, -COMMAND_SOUTH); processMoveCommand(461, 0, -COMMAND_SOUTHWEST); processMoveCommand(438, 0, -COMMAND_NORTHWEST); if (!currentCommandIsOneOf(COMMAND_WEST, 529, COMMAND_CLIMB, -1))
		return 0; if (ask_user_yes_or_no_question(1264)) { printMessage(0, 1265, 0); r7(); } printMessage(PRINT_MESSAGE_END_COMMAND, 1253, 0);
} int o26()
{
	u28(); if (!currentCommandIsNotOneOf(COMMAND_CLOSE, 93, -1)) return 0; printMessage(76, 1129, 670);
} 

int f22() {
	if(currentCommandContains(6)) {
		printMessage(72, 1458, 527); // The building may have had a proper door once, but if so, it is long gone.  If you want to get out, why not just go out?
	} 
	
	if (currentCommandContains(639)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1586, 0); // I  really  don't know what you are getting at.  The spring is a source of water.  Nothing more to it.  If you want to get into the cave, I  suggest you look elsewhere.
	} 
	
	if (currentCommandContains(638))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1585, 0); // No,  no...  a misunderstanding.  "Well house" does not imply a "well". It just means that the spring wells out within the house.  There is no  well to be seen here.  I hope I am making myself clear enough for you.
	} 
	
	if (!currentCommandIsNotOneOf(COMMAND_LOOK, LOCATION_BUILDING, -1)) 
		return 0; 
	
	printMessage(PRINT_MESSAGE_END_COMMAND, 1639, 0);  // It's  no  architectural  miracle  - just a simple brick structure with no windows, serving as a well house for a large spring.
} 

int n26()
{
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	processMoveCommand(LOCATION_END_OF_ROAD, 0, 136, COMMAND_EXIT, -COMMAND_WEST); 
	
	if (object_type_3_buffer[717] < 2) {
		processMoveCommand(147, object_type_3_buffer[685], -497);
		processMoveCommand(LOCATION_Y2, object_type_3_buffer[685], -501);
	} 
	
	if (!currentCommandIsOneOf(626, COMMAND_DOWNSTREAM, -1)) 
		return 0; 
	
	printMessage(PRINT_MESSAGE_END_COMMAND, 1026, 0);  // The  stream  flows out through a pair of 1 foot diameter sewer pipes.  It would be advisable to leave via the exit.
}

int f23() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(LOCATION_END_OF_ROAD, 0, COMMAND_UPSTREAM, COMMAND_NORTH, COMMAND_NORTHEAST, -COMMAND_NORTHWEST); processMoveCommand(460, 0, -COMMAND_EAST);
	processMoveCommand(454, 0, -COMMAND_SOUTHEAST); processMoveCommand(451, 0, -COMMAND_SOUTHWEST); processMoveCommand(450, 0, COMMAND_WEST, -622); if (currentCommandContains(COMMAND_UP)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(450, -2);
		} processMoveCommand(460, -2);
	} if (currentCommandContains(LOCATION_BUILDING)) {
		f3(679, 143); f3(678, 136); h31();
	} if (currentCommandContains(LOCATION_OUTSIDE_GRATE)) { f3(679, 440); f3(678, LOCATION_OUTSIDE_GRATE); h31(); } if (!currentCommandIsNotOneOf(COMMAND_GO, 626, -1))
		return 0; f3(678, 136); f3(679, 143); n25();
} int t41() {
	if (!currentCommandIsOneOf(COMMAND_SOUTH, COMMAND_DOWN, COMMAND_DOWNSTREAM, -1))
		return 0; processMoveCommand(143, -2);
} int j11() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } if (object_type_3_buffer[143] > 0)
	{
		if (currentCommandContains(LOCATION_BUILDING)) { f3(679, 436); f3(678, 136); h31(); } if (currentCommandContains(LOCATION_OUTSIDE_GRATE)) {
			f3(679, 142);
			f3(678, LOCATION_OUTSIDE_GRATE); h31();
		}
	}
	else { processMoveCommand(LOCATION_END_OF_ROAD, 0, -LOCATION_BUILDING); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -LOCATION_OUTSIDE_GRATE); } processMoveCommand(142, 0, COMMAND_UPSTREAM, -COMMAND_NORTH);
	processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, COMMAND_DOWNSTREAM, 640, COMMAND_SOUTH, -LOCATION_OUTSIDE_GRATE); processMoveCommand(460, 0, -COMMAND_NORTHEAST); processMoveCommand(454, 0, -COMMAND_EAST); processMoveCommand(455, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(452, 0, -COMMAND_SOUTHWEST); processMoveCommand(451, 0, COMMAND_WEST, -622); processMoveCommand(450, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_UP)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(451, -2);
		} processMoveCommand(454, -2);
	} if (!currentCommandIsOneOf(143, 626, COMMAND_DOWN, COMMAND_ENTER, -1)) return 0; if
		(object_type_3_buffer[143] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 901, 0);
	} set_value(0, 717, 6); compute_score(); printMessage(0, 1390, 0); if (ask_user_yes_or_no_question(1391))
	{
		printMessage(0, 1392, 0); if (ask_user_yes_or_no_question(1391)) {
			if (object_type_3_buffer[708] > 658) { printMessage(0, 1394, 0); }
			else
			{
				printMessage(0, 1393, 0);
			}
		}
	} set_value(0, 718, 0); a29();
} int r9() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(454, 0, -COMMAND_NORTHEAST); processMoveCommand(455, 0, -COMMAND_EAST); processMoveCommand(456, 0, -COMMAND_SOUTHEAST); processMoveCommand(436, 0, -COMMAND_SOUTH); processMoveCommand(453, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(452, 0, COMMAND_WEST, -622); processMoveCommand(451, 0, -COMMAND_NORTHWEST); if (currentCommandContains(LOCATION_BUILDING)) {
		f3(679, 436); f3(678, 136);
		h31();
	} if (currentCommandContains(COMMAND_UP)) { if (cheezy_rand(100) < 50) { processMoveCommand(455, -2); } processMoveCommand(452, -2); } processMoveCommand(143, 0, COMMAND_UPSTREAM, COMMAND_NORTH, -143);
	if (!currentCommandIsOneOf(COMMAND_ENTER, COMMAND_DOWN, COMMAND_ENTER, -1)) return 0; if (object_type_3_buffer[4] == 1) { processMoveCommand(145, -2); } printMessage(PRINT_MESSAGE_END_COMMAND, 899, 0);
} int p13() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(146, 0, 627, 146, COMMAND_ENTER, -COMMAND_WEST); processMoveCommand(150, 0, -150);
	processMoveCommand(147, 0, -147); if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_EXIT, COMMAND_EXIT, 620, -1)) return 0; if (object_type_3_buffer[4] == 1) {
		processMoveCommand(LOCATION_OUTSIDE_GRATE, -2);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 899, 0);
} int j12() {
	processMoveCommand(145, 0, COMMAND_EXIT, 620, 623, -COMMAND_EAST); processMoveCommand(147, 0, COMMAND_ENTER, 229, COMMAND_WEST, -147);
	processMoveCommand(150, 0, -150);
} int t13() {
	processMoveCommand(145, 0, -623); processMoveCommand(146, 0, 627, 146, 625, 213, -COMMAND_EAST);
	processMoveCommand(148, 0, 148, COMMAND_ENTER, COMMAND_UP, -COMMAND_WEST); processMoveCommand(150, 0, -150); if (object_type_3_buffer[4] == 1) {
		processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -LOCATION_OUTSIDE_GRATE);
	}
	else { processMoveCommand(145, 899, -LOCATION_OUTSIDE_GRATE); } if (currentCommandContains(497)) {
		if (object_type_3_buffer[717] > 1 || isObjectFlagSet(dereference(710), 3))
		{
			modifyObjectFlag('s', dereference(710), 4); printMessage(PRINT_MESSAGE_END_COMMAND, 934, 0);
		} processMoveCommand(LOCATION_BUILDING, -object_type_3_buffer[685]);
	} if (!currentCommandIsNotOneOf(125, -1))
		return 0; if (currentCommandContains(COMMAND_LOOK) || currentCommandContains(562)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1614, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int
l16() {
	processMoveCommand(145, 0, -623); processMoveCommand(147, 0, COMMAND_DOWN, COMMAND_EAST, -147); processMoveCommand(149, 0, COMMAND_ENTER, COMMAND_UP, -COMMAND_WEST);
	processMoveCommand(150, 0, -150); if (object_type_3_buffer[4] == 1) { processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -LOCATION_OUTSIDE_GRATE); }
	else {
		processMoveCommand(145, 899, -LOCATION_OUTSIDE_GRATE);
	}
} int h9() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(145, 0, -623); processMoveCommand(147, 0, -147);
	processMoveCommand(148, 0, 148, -COMMAND_EAST); processMoveCommand(150, 0, 625, 150, -COMMAND_WEST); if (object_type_3_buffer[4] == 1) {
		processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -LOCATION_OUTSIDE_GRATE);
	}
	else { processMoveCommand(145, 899, -LOCATION_OUTSIDE_GRATE); }
} 

int move_from_top_of_small_pit() {
	if (object_type_3_buffer[154] == 0) {
		if (isItemAtLocation(44, -1))
		{
			set_object_location(5, 484);
		} else { 
			set_object_location(5, 150); 
		}
	} 
	
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	
	processMoveCommand(145, 0, -623);
	processMoveCommand(147, 0, -147); 
	processMoveCommand(149, 0, 625, -COMMAND_EAST); 
	processMoveCommand(151, 0, -COMMAND_DOWN); 
	if (object_type_3_buffer[4] == 1) {
		processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -LOCATION_OUTSIDE_GRATE);
	} else { 
		processMoveCommand(145, 899, -LOCATION_OUTSIDE_GRATE); 
	} 
	
	if (!currentCommandIsOneOf(COMMAND_DOWN, 150, 5, -1)) 
		return 0; 
	
	if (q8(5, -1))
	{
		processMoveCommand(151, -2);
	} 
	
	printMessage(0, 1014, 0); // You are at the bottom of the pit with a broken neck.
	processMoveCommand(151, -1); 
	die();
} 


int y23() {
	if (!currentCommandIsOneOf(COMMAND_WEST, 616, -1))
		return 0; if (currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1025, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1024, 0);
} int p37() {
	if
		(!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return 0; processMoveCommand(151, -1); v37();
} int u9() {
	if (object_type_3_buffer[154] == 0)
	{
		if (isItemAtLocation(44, -1)) { set_object_location(5, 484); set_value(0, 151, 1); }
		else {
			set_object_location(5, 150); set_value(0, 151, 0);
		}
	} if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(154, 0, -COMMAND_SOUTH); processMoveCommand(312, 0, -COMMAND_EAST); processMoveCommand(152, 0, 529, 628, -COMMAND_WEST);
	processMoveCommand(155, 0, COMMAND_DOWN, -COMMAND_NORTH); processMoveCommand(164, 0, -163); if (!currentCommandIsOneOf(COMMAND_CLIMB, COMMAND_UP, 150, 618, 625, 5, -1)) return
		0; if (q8(5, -1)) { processMoveCommand(150, -2); } printMessage(PRINT_MESSAGE_END_COMMAND, 1015, 0);
} int q37() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(151, 0, COMMAND_EAST, -628); if (!currentCommandIsOneOf(529, COMMAND_CROSS, COMMAND_WEST, -1)) return 0; if
		(object_type_3_buffer[8] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 903, 0);
	} h30(); processMoveCommand(153, -2);
} int u30() {
	if (currentCommandContains(COMMAND_JUMP))
	{
		if (object_type_3_buffer[8] == 1) { printMessage(PRINT_MESSAGE_END_COMMAND, 902, 0); } processMoveCommand(224, -1); v37();
	} if (currentCommandContains(9) && object_type_3_buffer[8] == 1)
	{
		set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]);
	}
} int c17() {
	processMoveCommand(151, 0, COMMAND_NORTH, COMMAND_EXIT, -628); if (!currentCommandIsNotOneOf(125, -1))
		return 0; if (currentCommandContains(COMMAND_LOOK) || currentCommandContains(562)) { printMessage(76, 1615, 154); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} 

int n27() {
	set_value(0, 676, 0); 
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	
	if (!currentCommandIsOneOf(5, COMMAND_UP, COMMAND_EAST, -1))
		return 0; 
	
	f3(676, 151);
} 

int move_from_mt_king() {
	if (currentCommandContains(COMMAND_NORTH)) { 
		f3(676, 160); 
	}
	else
	{
		if (currentCommandContains(COMMAND_SOUTHWEST) || currentCommandContains(624)) { 
			f3(676, 215); 
		} else {
			if (currentCommandContains(COMMAND_SOUTH)) {
				f3(676, 161);
			} else {
				if (currentCommandContains(COMMAND_WEST)) { 
					f3(676, 162); 
				} else {
					if (currentCommandContains(COMMAND_DOWN)) {
						f3(676, 314);
					} else {
						if (currentCommandContains(COMMAND_NORTHEAST)) { 
							f3(676, 313); 
						} else {
							if (currentCommandContains(COMMAND_NORTHWEST)) {
								f3(676, 319);
							} else { 
								if (currentCommandContains(COMMAND_SOUTHEAST)) { 
									f3(676, 316); 
								} 
							}
						}
					}
				}
			}
		}
	} 
	
	if (object_type_3_buffer[676] == 0) {
		return 0;
	} 
	
	if (g10(ITEM_SNAKE, -1) && object_type_3_buffer[676] != object_type_3_buffer[681]) {
		w25(); 
		if (object_type_3_buffer[ITEM_SNAKE] == 1) {
			printMessage(0, 1426, 0); // The  snake attempts to block your way, but its movements are sluggish and you manage to slip past.  The snake,  now  fully  awake,  hisses  angrily after you.
			set_value(0, 7, 0);
		}
		else { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1016, 0); // You can't get past the snake.
		}
	} 
	
	if (currentCommandContains(COMMAND_SOUTHWEST) && cheezy_rand(100) < 66) {
		set_value(SET_VALUE_DEREFERENCE, 681, 676);
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_CRAWLED_AROUND, 0); // You  have  crawled around in some little passages and wound up back where you started from.
	} 
	
	processMoveCommand(object_type_3_buffer[676], -2);
} 

int q10() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; }
	processMoveCommand(157, 0, COMMAND_EAST, -COMMAND_CROSS); processMoveCommand(LOCATION_SLAB_ROOM, 0, COMMAND_WEST, -LOCATION_SLAB_ROOM); processMoveCommand(159, 0, COMMAND_DOWN, -150); if (!currentCommandIsNotOneOf(621, -1))
		return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 950, 0);
} int n10() { processMoveCommand(157, 0, COMMAND_UP, -COMMAND_EXIT); } int c18() {
	processMoveCommand(156, 0, COMMAND_UP, -COMMAND_EXIT); if (currentCommandContains(COMMAND_CLIMB)) {
		if (object_type_3_buffer[11] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 1028, 0); } if
			(object_type_3_buffer[11] == 1) {
			processMoveCommand(156, -1029);
		} if (!(isObjectFlagSet(220, 4))) { set_value(0, 733, 2); } processMoveCommand(220, -1030);
	} if (!currentCommandIsNotOneOf(COMMAND_TAKE, 11, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_DEEP_ROOTS, 0);
} int p14() {
	processMoveCommand(167, 0, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_JUMP)) { if (object_type_3_buffer[8] == 1) { printMessage(PRINT_MESSAGE_END_COMMAND, 902, 0); } processMoveCommand(224, -1); v37(); } if (currentCommandContains(COMMAND_NORTH))
	{
		processMoveCommand(167, -1017);
	} if (currentCommandContains(9) && object_type_3_buffer[8] == 1) { set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]); } if (!currentCommandIsOneOf(529, COMMAND_CROSS, COMMAND_EAST, -1))
		return 0; if (object_type_3_buffer[8] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 903, 0); } h30(); processMoveCommand(152, -2);
} int a10()
{
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(155, 0, COMMAND_SOUTH, COMMAND_EXIT, -628); processMoveCommand(LOCATION_Y2, 0, COMMAND_NORTH, -163);
	processMoveCommand(198, 0, COMMAND_DOWN, -621); processMoveCommand(198, 0, -621);
} int s12() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(155, 0, COMMAND_NORTH, COMMAND_EXIT, -628); processMoveCommand(395, 0, COMMAND_DOWN, -5); check_command_steps();
} int j13() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(LOCATION_MT_KING, 0, COMMAND_EAST, COMMAND_EXIT, -628); processMoveCommand(196, 0, COMMAND_WEST, -COMMAND_UP);
} 

int y2_163() {
	processMoveCommand(160, 0, -COMMAND_SOUTH); 
	processMoveCommand(164, 0, COMMAND_EAST, -164); 
	processMoveCommand(165, 0, -COMMAND_WEST); 
	
	if (!currentCommandIsOneOf(501, LOCATION_PLOVER, -1))
		return 0; 
	
	if (object_type_3_buffer[697] == 2 && !currentCommandContains(COMMAND_SAY)) { 
		return 0; 
	} 
	
	if (currentCommandContains(LOCATION_PLOVER)) {
		modifyObjectFlag('c', LOCATION_PLOVER, 8);
		modifyObjectFlag('c', 227, 8); 
		modifyObjectFlag('c', 229, 8); 
		processMoveCommand(LOCATION_PLOVER, -2);
	} 
	
	if (object_type_3_buffer[717] > 1 || isObjectFlagSet(dereference(710), 3))
	{
		modifyObjectFlag('s', dereference(710), 4); 
		printMessage(PRINT_MESSAGE_END_COMMAND, 934, 0);
	} 
	processMoveCommand(LOCATION_BUILDING, -object_type_3_buffer[685]);
} 

int v11() {
	processMoveCommand(LOCATION_Y2, 0, COMMAND_DOWN, -163);
	processMoveCommand(151, 0, -COMMAND_UP);
} int k6() {
	processMoveCommand(LOCATION_Y2, 0, COMMAND_EAST, -163); b30(); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; printMessage(0, 1014, 0); processMoveCommand(237, -1); die();
} int o6() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(199, 0, COMMAND_EAST, -627); processMoveCommand(160, 0, COMMAND_UP, -621); processMoveCommand(201, 0, -COMMAND_WEST); processMoveCommand(207, 0, -207);
} int l17() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(198, 0, COMMAND_WEST, -627); processMoveCommand(200, 0, COMMAND_DOWN, COMMAND_CLIMB, -150);
}

int bottom_of_pit_with_stream_200() {
	processMoveCommand(199, 0, COMMAND_UP, COMMAND_EXIT, -COMMAND_CLIMB); 
	if (!currentCommandIsOneOf(143, 626, COMMAND_DOWN, COMMAND_UPSTREAM, COMMAND_DOWNSTREAM, -1)) 
		return 0; 
	printMessage(PRINT_MESSAGE_END_COMMAND, 901, 0);
} 

int dusty_rock_room_201() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	processMoveCommand(198, 0, COMMAND_EAST, -625);
	processMoveCommand(202, 0, COMMAND_DOWN, -621); 
	processMoveCommand(207, 0, -207);
} 

int g13() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(168, 0, COMMAND_SOUTH, COMMAND_UP, 625, -COMMAND_CLIMB); processMoveCommand(153, 0, -COMMAND_EAST); processMoveCommand(194, 0, COMMAND_WEST, -627); if
		(!currentCommandIsNotOneOf(COMMAND_NORTH, -1)) return 0; processMoveCommand(153, -1017);
} int z7() {
	processMoveCommand(167, 0, -COMMAND_UP); processMoveCommand(168, 0, -COMMAND_NORTH);
	processMoveCommand(169, 0, -COMMAND_EAST); processMoveCommand(171, 0, -COMMAND_SOUTH); processMoveCommand(178, 0, -COMMAND_WEST);
} int p15() {
	processMoveCommand(168, 0, -COMMAND_WEST);
	processMoveCommand(170, 0, -COMMAND_SOUTH); processMoveCommand(171, 0, -COMMAND_EAST);
} int j14() {
	processMoveCommand(169, 0, -COMMAND_EAST); processMoveCommand(189, 0, -COMMAND_DOWN);
	processMoveCommand(173, 0, -COMMAND_SOUTH); processMoveCommand(191, 0, -COMMAND_NORTH);
} int r10() {
	processMoveCommand(168, 0, -COMMAND_WEST); processMoveCommand(169, 0, -COMMAND_NORTH);
	processMoveCommand(182, 0, -COMMAND_EAST); processMoveCommand(185, 0, -COMMAND_SOUTH); processMoveCommand(181, 0, COMMAND_UP, -COMMAND_DOWN); processMoveCommand(181, 0, -COMMAND_DOWN);
} int
q11() { processMoveCommand(171, 0, COMMAND_EXIT, -COMMAND_WEST); } int p16() { processMoveCommand(171, 0, COMMAND_EXIT, -COMMAND_EAST); } int j15()
{
	processMoveCommand(170, 0, COMMAND_EXIT, -COMMAND_UP);
} int k7() { processMoveCommand(173, 0, -COMMAND_EAST); processMoveCommand(174, 0, -COMMAND_WEST); } int
d16() {
	processMoveCommand(170, 0, -COMMAND_EAST); processMoveCommand(172, 0, -COMMAND_WEST); processMoveCommand(174, 0, -COMMAND_DOWN); processMoveCommand(175, 0, -COMMAND_SOUTH);
} int o5() {
	processMoveCommand(172, 0, -COMMAND_WEST); processMoveCommand(173, 0, -COMMAND_UP); processMoveCommand(175, 0, -COMMAND_EAST); processMoveCommand(176, 0, -COMMAND_SOUTH);
} int r11() {
	processMoveCommand(173, 0, -COMMAND_WEST); processMoveCommand(174, 0, -COMMAND_EAST); processMoveCommand(175, 0, -COMMAND_SOUTH); processMoveCommand(176, 0, -COMMAND_UP);
	processMoveCommand(177, 0, -COMMAND_NORTH); processMoveCommand(188, 0, -COMMAND_DOWN);
} int r12() {
	processMoveCommand(174, 0, -COMMAND_WEST); processMoveCommand(175, 0, -COMMAND_NORTH);
	processMoveCommand(183, 0, -COMMAND_SOUTH);
} int w12() { processMoveCommand(176, 0, COMMAND_EXIT, -COMMAND_WEST); } int g14() {
	processMoveCommand(175, 0, -COMMAND_WEST);
	processMoveCommand(177, 0, -COMMAND_NORTH); processMoveCommand(190, 0, -COMMAND_DOWN); processMoveCommand(193, 0, -COMMAND_EAST);
} int g15() {
	processMoveCommand(177, 0, COMMAND_EXIT, -COMMAND_UP);
} int j17() {
	processMoveCommand(149, 0, COMMAND_DOWN, -COMMAND_CLIMB); processMoveCommand(177, 0, -COMMAND_WEST); processMoveCommand(186, 0, -COMMAND_SOUTH); processMoveCommand(179, 0, -COMMAND_NORTH);
	processMoveCommand(180, 0, -COMMAND_EAST);
} int i17() { processMoveCommand(193, 0, COMMAND_EXIT, -COMMAND_EAST); } int z9() {
	processMoveCommand(167, 0, COMMAND_EAST, COMMAND_UP, -627);
	processMoveCommand(195, 0, -COMMAND_WEST); processMoveCommand(196, 0, COMMAND_NORTH, COMMAND_DOWN, -621);
} 
int h11() {
	processMoveCommand(194, 0, -COMMAND_EAST); processMoveCommand(196, 0, -COMMAND_NORTH);
	processMoveCommand(300, 0, -COMMAND_SOUTH);
} 
int w13() {
	processMoveCommand(194, 0, -COMMAND_WEST); processMoveCommand(197, 0, -COMMAND_NORTH); processMoveCommand(162, 0, -COMMAND_EAST);
	processMoveCommand(195, 0, -COMMAND_SOUTH);
} 

int m8() { 
	processMoveCommand(196, 0, COMMAND_EXIT, -COMMAND_SOUTH); 
} 

int r13() {
	processMoveCommand(201, 0, COMMAND_UP, -COMMAND_CLIMB);
	processMoveCommand(207, 0, COMMAND_WEST, -207); 
	processMoveCommand(232, 0, COMMAND_NORTH, -232); 
	processMoveCommand(235, 0, -COMMAND_EAST);
} 

int bedquilt_207() {
	processMoveCommand(202, 0, -COMMAND_EAST);
	processMoveCommand(208, 0, -COMMAND_WEST); 
	processMoveCommand(LOCATION_SLAB_ROOM, 0, -LOCATION_SLAB_ROOM); 
	if (currentCommandContains(COMMAND_NORTHWEST)) {
		if (cheezy_rand(100) < 50) {
			printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_CRAWLED_AROUND, 0); // You  have  crawled around in some little passages and wound up back where you started from.
		} 
		processMoveCommand(LOCATION_ORIENTAL, -2);
	} 
	
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_UP, COMMAND_DOWN, -1)) 
		return 0; 
	
	if (cheezy_rand(100) < 65) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 929, 0); // You  have  crawled around in some little holes and found your way blocked by a recent cave-in.  You are now back in the main passage.
	} 
	
	processMoveCommand(235, 0, -COMMAND_DOWN); 

	if (cheezy_rand(100) < 75) {
		processMoveCommand(213, 0, -COMMAND_NORTH); // Large low room (80)
		processMoveCommand(201, 0, -COMMAND_UP);	// Dusty rock room (27)
		processMoveCommand(LOCATION_SLAB_ROOM, 0, -COMMAND_SOUTH); // Slab room
	} else {
		processMoveCommand(212, 0, -COMMAND_NORTH); // Juntion of three secret canyons
		processMoveCommand(211, 0, -COMMAND_UP); 
		processMoveCommand(218, 0, -COMMAND_SOUTH);
	}
} // bedquilt

int swiss_cheese_room_208() {
	processMoveCommand(207, 0, -COMMAND_NORTHEAST); 
	processMoveCommand(157, 0, -COMMAND_WEST); 
	processMoveCommand(218, 0, -148); 
	processMoveCommand(225, 0, COMMAND_EAST, -225);
	processMoveCommand(LOCATION_ORIENTAL, 0, -LOCATION_ORIENTAL); 
	if (!currentCommandIsOneOf(COMMAND_NORTHWEST, COMMAND_SOUTH, -1)) 
		return 0; 
	
	if (cheezy_rand(100) < 33) {
		processMoveCommand(218, 0, -COMMAND_SOUTH);
		processMoveCommand(LOCATION_ORIENTAL, 0, -COMMAND_NORTHWEST);
	} else { 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_CRAWLED_AROUND, 0);  // You  have  crawled around in some little passages and wound up back where you started from.
	}
} // swiss cheese


int m7() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return	0;
	} 
	processMoveCommand(208, 0, -COMMAND_EAST); 
	processMoveCommand(156, 0, COMMAND_WEST, -COMMAND_CROSS); 
	processMoveCommand(158, 0, COMMAND_DOWN, -150);
} 

int slab_room_209()
{
	processMoveCommand(156, 0, -COMMAND_SOUTH); 
	processMoveCommand(210, 0, COMMAND_UP, -COMMAND_CLIMB); 
	processMoveCommand(207, 0, COMMAND_NORTH, -207); 
	processMoveCommand(207, 0, -207);
	maybe_look_at_slab();
} 

int i18() {
	processMoveCommand(LOCATION_SLAB_ROOM, 0, COMMAND_DOWN, -LOCATION_SLAB_ROOM); processMoveCommand(237, 0, COMMAND_NORTH, -10); processMoveCommand(239, 0, -239);
	processMoveCommand(247, 0, -COMMAND_SOUTH);
} int y12() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(212, 0, -COMMAND_NORTH);
	processMoveCommand(207, 0, COMMAND_DOWN, -625); processMoveCommand(238, 0, -COMMAND_SOUTH);
} int f5() {
	processMoveCommand(207, 0, -COMMAND_SOUTHEAST); processMoveCommand(211, 0, -COMMAND_SOUTH);
	processMoveCommand(166, 0, -COMMAND_NORTH);
} int v14() {
	processMoveCommand(207, 0, -207); processMoveCommand(246, 0, -COMMAND_SOUTHWEST); processMoveCommand(214, 0, -COMMAND_NORTH);
	processMoveCommand(LOCATION_ORIENTAL, 0, COMMAND_SOUTHEAST, -LOCATION_ORIENTAL);
} int d18() { processMoveCommand(213, 0, COMMAND_SOUTH, COMMAND_EXIT, -627); } int t14() {
	processMoveCommand(LOCATION_MT_KING, 0, -COMMAND_EAST); processMoveCommand(216, 0, -COMMAND_DOWN); if (!currentCommandIsNotOneOf(COMMAND_WEST, -1)) return 0; if (object_type_3_buffer[20] == 0)
	{
		processMoveCommand(248, -2);
	} processMoveCommand(247, -2);
} int w14() {
	processMoveCommand(217, 0, -COMMAND_SOUTH); processMoveCommand(218, 0, -COMMAND_NORTH);
} 

int too_tight_canyon_217() 
{ 
	processMoveCommand(216, 0, -COMMAND_NORTH); 
} 

int v15() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(216, 0, -COMMAND_EAST);
	processMoveCommand(219, 0, -COMMAND_WEST); processMoveCommand(208, 0, COMMAND_NORTH, -627); processMoveCommand(483, 0, COMMAND_SOUTH, -COMMAND_ENTER);
} 

int command_valuation_room_483() {
	if (currentCommandContains(125)) {
		if (currentCommandContains(COMMAND_LOOK) || currentCommandContains(562)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1616, 0); 
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} 
	
	processMoveCommand(218, 0, COMMAND_NORTH, -COMMAND_EXIT);

	if (currentCommandContains(COMMAND_ENTER)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1575, 0); 
	} 
	
	if (currentCommandContains(535) && object_type_3_buffer[697] == 2) {
		if (!(isItemAtLocation(dereference(object_type_3_buffer[670]), -1)))
		{
			printMessage(76, 1027, 670);
		} 
		
		if (currentCommandContains(ITEM_TUSK)) {
			printMessage(0, 1565, 0); 
		} else {
			if (currentCommandContains(ITEM_CAGE) && isItemAtLocation(ITEM_BIRD, -1)) {
				printMessage(0, 1566, 0);
			} else {
				if (currentCommandContains(ITEM_CAGE)) {
					set_object_location(ITEM_BIRD, PLAYER_LOCATION);
					set_value(0, 101, 0);
					printMessage(PRINT_MESSAGE_END_COMMAND, 1567, 0);
				} 
				
				if (currentCommandContains(ITEM_STARSTONE)) {
					if (object_type_3_buffer[ITEM_STARSTONE] == 1) {
						printMessage(0, 1569, 0); 
					} else {
						printMessage(0, 1570, 0);
					}
				} else { 
					if (currentCommandContains(ITEM_VASE)) {
						printMessage(0, 1568, 0); 
					} else { 
						printMessage(12, 1564, 670); 
					} 
				}
			}
		} 
		
		if (isObjectFlagSet(dereference(710), 7)) {
			printMessage(0, 1572, 0);
		} else {
			printMessage(0, 1571, 0); 
			modifyObjectFlag('s', dereference(710), 7);
		} 
		
		if (currentCommandContains(ITEM_CAGE) && isItemAtLocation(ITEM_BIRD, -1)) {
			printMessage(0, 1574, 0); 
			set_object_location(101, 149); 
			set_value(0, 101, 0);
		} 
		
		printMessage(0, 1573, 0); 
		if (currentCommandContains(ITEM_TUSK)) {
			modifyObjectFlag('s', 80, 5); 
		} 
		
		if (currentCommandContains(ITEM_DRACHMA) || currentCommandContains(ITEM_MAGAZINE)) {
			printMessage(0, 1561, 0);
		} else {
			if (currentCommandContains(ITEM_STARSTONE)) {
				printMessage(0, 1563, 0); 
			} else {
				if (currentCommandContains(ITEM_VASE)) {
					printMessage(0, 1562, 0);
				} else { 
					if (isObjectFlagSet(dereference(670), 5)) { 
						printMessage(0, 1559, 0); 
					} else { 
						printMessage(0, 1560, 0); 
					} 
				}
			}
		}

		set_object_location(object_type_3_buffer[670], LOCATION_LIMBO); 
		if (currentCommandContains(111)) { 
			set_value(0, 111, 2); 
		} 
		
		if (currentCommandContains(114)) {
			set_value(0, 114, 2);
		} 
		
		longjmp(done_with_command, 1);
	} 
	
	if (currentCommandContains(637)) {
		if (currentCommandContains(COMMAND_LOOK)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1576, 0); 
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	}
} 

int q13() { processMoveCommand(218, 0, -COMMAND_SOUTH); } int v12() {
	processMoveCommand(168, 0, -COMMAND_NORTH); processMoveCommand(178, 0, COMMAND_WEST, -COMMAND_SOUTH);
	processMoveCommand(184, 0, -COMMAND_EAST);
} int h10() { processMoveCommand(178, 0, COMMAND_WEST, -COMMAND_EXIT); } int e10() {
	processMoveCommand(170, 0, COMMAND_EXIT, -COMMAND_SOUTH);
} int v13() { processMoveCommand(193, 0, -COMMAND_SOUTH); processMoveCommand(180, 0, -COMMAND_EAST); processMoveCommand(187, 0, -COMMAND_WEST); } int z8()
{
	processMoveCommand(193, 0, -COMMAND_NORTH); processMoveCommand(179, 0, -COMMAND_WEST); processMoveCommand(192, 0, -COMMAND_NORTHWEST);
} int n12() {
	processMoveCommand(179, 0, COMMAND_EXIT, -COMMAND_EAST);
} int q12() { processMoveCommand(175, 0, COMMAND_EXIT, -COMMAND_UP); } int c19() { processMoveCommand(171, 0, COMMAND_UP, -COMMAND_DOWN); } int
v40() { processMoveCommand(159, 0, COMMAND_EAST, COMMAND_DOWN, -COMMAND_CLIMB); processMoveCommand(LOCATION_GIANT_ROOM, 0, -COMMAND_WEST); } int f24() {
	if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; processMoveCommand(159, -1); v37();
} int o8() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(224, 0, COMMAND_NORTH, 224, -625);
	processMoveCommand(213, 1112, COMMAND_DOWN, -COMMAND_CLIMB);
} int s13() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(220, 0, COMMAND_SOUTH, -249);
	processMoveCommand(322, 0, -COMMAND_EAST); processMoveCommand(223, 0, -COMMAND_NORTH);
} int v17() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; }
	processMoveCommand(LOCATION_GIANT_ROOM, 0, COMMAND_SOUTH, -625); processMoveCommand(LOCATION_GIANT_ROOM, 0, -625); if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_ENTER, 224, -1)) return 0; if
		(object_type_3_buffer[6] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RUSTY, 0);
	} processMoveCommand(224, -2);
} 

int command_waterfall_224() {
	processMoveCommand(223, 0, COMMAND_SOUTH, -COMMAND_EXIT);
	processMoveCommand(221, 0, COMMAND_WEST, -221); 

	if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_JUMP, -1)) 
		return 0; 
	
	if (ask_user_yes_or_no_question(1166)) {
		modifyObjectFlag('c', 239, 8);
		set_value(0, 701, 0); 
		if (isItemAtLocation(ITEM_BIRD, -1)) { 
			set_object_location(ITEM_BIRD, LOCATION_LIMBO);
		} 
		
		*getObjectPointer(675) = -1; 
		object_type_3_buffer[675] = ITEM_MIN_ID - 1;
		
		while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
			if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1) && !(isObjectFlagSet(dereference(675), 12)) &&	object_type_3_buffer[675] != ITEM_LAMP) {
				set_object_location(object_type_3_buffer[675], LOCATION_LIMBO); 
				object_type_3_buffer[701] += 1;
			}
		} 
		
		if (isItemAtLocation(ITEM_LAMP, -1)) {
			set_value(0, CARRIED_ITEM_COUNT, 1);
			set_value(0, 701, 1);
		} else { 
			set_value(0, CARRIED_ITEM_COUNT, 0); 
		} 
		
		printMessage(12, 1167, CARRIED_ITEM_COUNT); // You  plunge  into  the water and are sucked down by the whirlpool.
		
		if (object_type_3_buffer[701] > 0) {
			printMessage(12, 1168, CARRIED_ITEM_COUNT); // The  current  is incredibly strong, and you barely manage to hold onto your lamp; everything else is pulled from your grasp and is lost  in  the swirling waters.
		} else { 
			printBlankLine(); 
		} 
		processMoveCommand(240, -1169);
	} 
	printMessage(PRINT_MESSAGE_END_COMMAND | PRINT_MESSAGE_DEREFERENCE_MSG, 719, 0);
} 

int c30() {
	processMoveCommand(429, 0, -COMMAND_EAST); processMoveCommand(392, 0, -COMMAND_SOUTHEAST); processMoveCommand(208, 0, COMMAND_WEST, COMMAND_EXIT, -208); if
		(!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_NORTHWEST, COMMAND_NORTHEAST, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 1248, 0);
} int s32() {
	if
		(currentCommandContains(COMMAND_LOOK)) {
		if (currentCommandContains(661)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1596, 0); } if (currentCommandContains(40)) {
			printMessage(76, MESSAGE_FIXTURE, 670);
		}
	}
} int l18() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(208, 0, -COMMAND_SOUTHEAST); processMoveCommand(213, 0, COMMAND_WEST, -627);
	processMoveCommand(213, 0, -627); processMoveCommand(230, 0, COMMAND_NORTH, COMMAND_UP, -224);
} int s14() {
	processMoveCommand(LOCATION_ORIENTAL, 0, COMMAND_SOUTH, -LOCATION_ORIENTAL);
	processMoveCommand(227, 0, -COMMAND_WEST); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return 0; processMoveCommand(224, -1); v37();
} 

int alcove_227()
{
	processMoveCommand(230, 0, COMMAND_NORTHWEST, -224); 
	if (!currentCommandIsOneOf(COMMAND_EAST, 625, LOCATION_PLOVER, -1)) 
		return 0; 
	
	set_value(SET_VALUE_DEREFERENCE, 699, CARRIED_ITEM_COUNT);
	if (isItemAtLocation(ITEM_EMERALD, -1)) {
		object_type_3_buffer[699] -= 1; 
	} 
	
	if (isItemAtLocation(ITEM_PYRAMID, -1)) {
		object_type_3_buffer[699] -= 1; 
	} 
	
	if (object_type_3_buffer[699] == 0)
	{
		processMoveCommand(LOCATION_PLOVER, -2);
	} 
	
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1) && !(isObjectFlagSet(dereference(675), 12))) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 922, 0);
		}
	} 
	processMoveCommand(LOCATION_PLOVER, -2);
} 

int t16() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(229, 0, COMMAND_NORTHEAST, 229, -COMMAND_ENTER); if (currentCommandContains(LOCATION_PLOVER)) {
		if (isItemAtLocation(55, -1)) {
			set_object_location(55, PLAYER_LOCATION);
			printMessage(0, 1581, 0);
		} processMoveCommand(LOCATION_Y2, -2);
	} if (!currentCommandIsOneOf(COMMAND_WEST, 625, 227, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 699, CARRIED_ITEM_COUNT);
	if (isItemAtLocation(55, -1)) { object_type_3_buffer[699] -= 1; } if (isItemAtLocation(58, -1)) { object_type_3_buffer[699] -= 1; } if (object_type_3_buffer[699] == 0)
	{
		processMoveCommand(227, -2);
	} *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1)
			&& !(isObjectFlagSet(dereference(675), 12))) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 922, 0);
		}
	} processMoveCommand(227, -2);
} int e12() {
	processMoveCommand(LOCATION_PLOVER, 0, COMMAND_SOUTH, COMMAND_EXIT, -LOCATION_PLOVER);
	if (!currentCommandIsNotOneOf(124, -1)) return 0; if (currentCommandContains(562) || currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1010, 0); } printMessage(76, MESSAGE_FIXTURE, 124);
} int i19() { processMoveCommand(232, 0, COMMAND_DOWN, -232); processMoveCommand(370, 0, COMMAND_EAST, -COMMAND_UP); } int p17() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(231, 0, COMMAND_UP, COMMAND_WEST, -628); processMoveCommand(233, 0, COMMAND_DOWN, -249); if (!currentCommandIsOneOf(COMMAND_SOUTH, 202, -1))
		return 0; if (isItemAtLocation(106, -1)) { printMessage(76, 923, 106); } if (isItemAtLocation(107, -1)) {
		printMessage(76, 923, 107);
	} processMoveCommand(202, -2);
} int f6() { processMoveCommand(232, 0, COMMAND_UP, -232); processMoveCommand(234, 0, -COMMAND_DOWN); } int m10()
{
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(233, 0, COMMAND_UP, COMMAND_EXIT, -249); processMoveCommand(232, 0, -232);
} 

int anteroom_235() {
	processMoveCommand(413, 0, -COMMAND_NORTHEAST); 
	processMoveCommand(203, 0, -COMMAND_SOUTH); 
	processMoveCommand(202, 0, -COMMAND_UP); 
	processMoveCommand(207, 0, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_EAST)) { 
		modifyObjectFlag('c', dereference(735), 2); processMoveCommand(LOCATION_WITTS_END, -2); 
	} 
	u28();
} 

int t19() {
	processMoveCommand(302, 0, -COMMAND_SOUTH);
	processMoveCommand(303, 0, -COMMAND_SOUTHWEST); processMoveCommand(304, 0, -COMMAND_NORTHEAST); processMoveCommand(305, 0, -COMMAND_SOUTHEAST); processMoveCommand(306, 0, -COMMAND_UP); processMoveCommand(307, 0, -COMMAND_NORTHWEST);
	processMoveCommand(308, 0, -COMMAND_EAST); processMoveCommand(309, 0, -COMMAND_WEST); processMoveCommand(310, 0, -COMMAND_NORTH); processMoveCommand(195, 0, -COMMAND_DOWN);
} 

int command_witts_end_236()
{
	if (currentCommandContains(COMMAND_WEST)) { 
		modifyObjectFlag('c', dereference(735), 2); 
		processMoveCommand(LOCATION_WITTS_END, -2); 
	} 
	
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_EAST, COMMAND_UP, COMMAND_DOWN, COMMAND_NORTHEAST, COMMAND_NORTHWEST, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, -1))
		return 0; 
	
	if (isObjectFlagSet(dereference(735), 2)) { 
		set_value(0, 700, 50); 
	} else { 
		set_value(0, 700, 95); 
	}
		
	if (cheezy_rand(100) < object_type_3_buffer[700]) { 
		processMoveCommand(LOCATION_WITTS_END, -2); 
	} 
	processMoveCommand(235, -2);
} 

int e14() {
	processMoveCommand(210, 0, -COMMAND_SOUTH);
	processMoveCommand(239, 0, COMMAND_NORTH, -239); if (!currentCommandIsOneOf(10, 641, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 950, 0);
} int a11()
{
	processMoveCommand(212, 0, -COMMAND_WEST); b30(); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return 0; printMessage(0, 1014, 0); processMoveCommand(237, -1);
	die();
} int n14() {
	processMoveCommand(211, 0, -COMMAND_NORTH); if (currentCommandContains(COMMAND_DOWN) && cheezy_rand(100) < 67) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(176, -2);
		} processMoveCommand(171, -2);
	} if (!currentCommandIsOneOf(COMMAND_JUMP, COMMAND_CLIMB, COMMAND_DOWN, -1)) return 0; processMoveCommand(173, -2);
} int q18() {
	processMoveCommand(302, 0, -COMMAND_SOUTHWEST); processMoveCommand(303, 0, -COMMAND_NORTH); processMoveCommand(304, 0, -COMMAND_EAST); processMoveCommand(305, 0, -COMMAND_NORTHWEST);
	processMoveCommand(306, 0, -COMMAND_SOUTHEAST); processMoveCommand(307, 0, -COMMAND_NORTHEAST); processMoveCommand(308, 0, -COMMAND_WEST); processMoveCommand(309, 0, -COMMAND_DOWN); processMoveCommand(310, 0, -COMMAND_UP);
	processMoveCommand(311, 0, -COMMAND_SOUTH);
}
