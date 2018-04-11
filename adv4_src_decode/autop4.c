/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int i40() {
	if (isObjectFlagSet(dereference(710), ITEM_FLAG_TREASURE)) { set_value(0, 716, 0); processMoveCommand(object_type_3_buffer[PLAYER_LOCATION], -777); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_HUH, 0);
} int k20() { printMessage(0, 1258, 0); printMessage(PRINT_MESSAGE_END_COMMAND, 1675, 0); } int i32() {
	if (object_type_3_buffer[697] > 1)
	{
		(*command_by_location_dispatch_table[490])();
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_BUILDING || object_type_3_buffer[PLAYER_LOCATION] == 205) { printMessage(PRINT_MESSAGE_END_COMMAND, 1557, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1259, 0);
} int x26() { printMessage(PRINT_MESSAGE_END_COMMAND, 1260, 0); } 

int r24() {
	if (object_type_3_buffer[697] == 1) {
		if (item_location[85] == LOCATION_LIMBO)
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 1520, 0); // Your hoot echoes in the distance, but otherwise nothing happens.
		} 
		
		if (g10(85, -1)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1302, 0); // Nearby an owl cries "HOOT".
		} 
		
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), 3) || isObjectFlagSet(dereference(PLAYER_LOCATION), 5) || isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) {
			if (g10(87, -1) || object_type_3_buffer[PLAYER_LOCATION] == 205 ||	g10(20, -1)) {
				set_value(0, 701, 0); 
				set_value(0, 700, 30); 
				y20();
			} else {
				printMessage(0, 1520, 0); // Your hoot echoes in the distance, but otherwise nothing happens.
			} 
			longjmp(done_with_command, 1);
		} 

		copy_item_location_dereferencing_if_variable(701, 85); 
		object_type_3_buffer[701] -= object_type_3_buffer[PLAYER_LOCATION]; 
		if (object_type_3_buffer[701] < 0) {
			object_type_3_buffer[701] *= -1;
		} 
		object_type_3_buffer[701] -= 1; 
		object_type_3_buffer[701] *= 3; 
		set_value(SET_VALUE_DEREFERENCE, 700, 701); 
		object_type_3_buffer[700] += object_type_3_buffer[701];
		y20();
	} else { 
		printMessage(0, MESSAGE_HUH, 0);  // Huh??
	} 
	longjmp(done_with_command, 1);
} 

int command_cut_544() {
	if (object_type_3_buffer[697] == 1)
	{
		return 0;
	} 

	if (!(isItemAtLocation(ITEM_SWORD, -1) || isItemAtLocation(ITEM_AXE, -1))) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1326, 0); 
	} 
	
	if (!(isObjectFlagSet(dereference(670), 0)	|| currentCommandContains(122))) {
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} 
	
	if (currentCommandContains(122)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1345, 0); 
	} 
	
	if (currentCommandContains(75) && g10(75, -1)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1327, 0);
	} 
	
	if (currentCommandContains(ITEM_PLANT)) {
		if (object_type_3_buffer[PLAYER_LOCATION] == 159) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1328, 0);
		} 
		
		if (object_type_3_buffer[PLAYER_LOCATION] == 156 && object_type_3_buffer[ITEM_PLANT] > 0) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1328, 0); 
		}
	} 
	
	if (currentCommandContains(86)) {
		if (object_type_3_buffer[PLAYER_LOCATION] == 388)
		{
			if (object_type_3_buffer[86] == 0) { 
				printMessage(PRINT_MESSAGE_END_COMMAND, 1304, 0); 
			} 
			
			if (object_type_3_buffer[86] == 1) {
				set_object_location(88, object_type_3_buffer[PLAYER_LOCATION]); 
				set_value(0, 86, 2);
				printMessage(PRINT_MESSAGE_END_COMMAND, 1323, 0);
			} 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1329, 0);
		}
	}
} 

int j32() {
	if (!currentCommandContains(90)) return; if
		(isItemAtLocation(90, -1)) {
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1338, 0); } if ((399 <= object_type_3_buffer[PLAYER_LOCATION] &&
			object_type_3_buffer[PLAYER_LOCATION] <= 404)) {
			set_value(SET_VALUE_DEREFERENCE, 700, PLAYER_LOCATION); f3(701, 398); object_type_3_buffer[700] -= object_type_3_buffer[701]; object_type_3_buffer[715]
				+= object_type_3_buffer[700]; if (object_type_3_buffer[715] > 9) { set_value(0, 715, 9); } if (object_type_3_buffer[730] == 0) {
				set_value(0, 730, 1);
			}
		} if (isObjectFlagSet(dereference(PLAYER_LOCATION), 5) || object_type_3_buffer[715] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 1340, 0); } if (object_type_3_buffer[ITEM_DWARF] < object_type_3_buffer[715])
		{
			set_value(SET_VALUE_DEREFERENCE, 700, 715); object_type_3_buffer[700] -= object_type_3_buffer[ITEM_DWARF]; printMessage(13, 1339, 700); set_object_location(ITEM_DWARF, object_type_3_buffer[PLAYER_LOCATION]);
			set_value(SET_VALUE_DEREFERENCE, ITEM_DWARF, 715); b26(); if (object_type_3_buffer[699] == 0) { modifyObjectFlag('s', ITEM_DWARF, 14); printMessage(0, ITEM_DWARF, 0); }
		}
		else {
			printMessage(13, 1363, ITEM_DWARF); modifyObjectFlag('s', ITEM_DWARF, 14); set_value(0, 728, 0); set_value(0, 727, 100);
		}
	}
	else { printMessage(12, 1027, 670); } longjmp(done_with_command, 1);
} int d32() {
	if ((currentCommandContains(34) ||
		object_type_3_buffer[697] == 1) && g10(34, -1)) {
		if (isObjectFlagSet(39, 4) && !(isObjectFlagSet(97, 4))) {
			modifyObjectFlag('s', 97, 4);
			set_object_location(97, object_type_3_buffer[PLAYER_LOCATION]); printMessage(PRINT_MESSAGE_END_COMMAND, 1357, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_NOTHING_HAPPENS, 0);
	} if (!(object_type_3_buffer[697] == 2)) {
		return
			0;
	} if (isObjectFlagSet(dereference(670), 2)) { printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0); } if (g10(dereference(object_type_3_buffer[670]), -1)) {
		if
			(currentCommandContains(ITEM_DWARF) && g10(ITEM_DWARF, -1)) {
			if (object_type_3_buffer[717] == 3) { printMessage(0, 1373, 0); }
			else {
				printMessage(0, 835, 0);
			} die();
		} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	}
} int g29() {
	if (!currentCommandContains(39)) return; if (g10(39, -1)
		&& object_type_3_buffer[39] < 3) {
		set_value(0, 698, 400); set_value(0, 39, 3); printMessage(PRINT_MESSAGE_END_COMMAND, 1359, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1358, 0);
} int p33() { object_type_3_buffer[677] = cheezy_rand(885 - 878 + 1) + 878; printMessage(PRINT_MESSAGE_END_COMMAND | PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0); } int s25() {
	if
		(object_type_3_buffer[697] == 2) {
		if (g10(dereference(object_type_3_buffer[670]), -1)) {
			if (object_type_3_buffer[717] == 3 && currentCommandContains(ITEM_DWARF)) {
				printMessage(0, 1373, 0); die();
			} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
		}
	}
} 

int blast_command() {
	if (object_type_3_buffer[717] == 3 && isObjectFlagSet(104, 4)) {
		if (item_location[104] == LOCATION_LIMBO) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1401, 0); // I think enough is enough.
		} 
		
		if (g10(104, -1)) {
			printMessage(0, 1374, 0); // There  is  a  loud  explosion.   Being  foolishly near its epicentre, you suddenly find yourself splashed across the walls of the cave.
			die();
		} 
		
		if (object_type_3_buffer[PLAYER_LOCATION] == 378) { 
			printMessage(0, 1375, 0); // There  is a loud explosion at the other end of the repository and the far wall collapses, burying the snakes in the rubble.  A river of molten lava pours in through the hole, destroying everything in its  path,  including you.  (Not even cinders remain!).
			die(); 
		} 
		
		modifyObjectFlag('s', 381, 4); 
		f3(PREVIOUS_LOCATION, 380);
		set_object_location(104, LOCATION_LIMBO); 
		set_object_location(ITEM_DWARF, LOCATION_LIMBO); 
		set_object_location(82, object_type_3_buffer[PLAYER_LOCATION]); 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1376, 0); // There  is  a  loud  explosion  at  the  other end of the repository and a section of the far wall collapses, burying the  dwarves  in  the  rubble. The  settling dust reveals a dark hole leading northeast. When the air is finally clear, a snow-white golden-horned unicorn walks out of  the  hole and,  gracefully  picking  its  way  through  the heaps of rubble, calmly approaches you.
	} 
	
	printMessage(PRINT_MESSAGE_END_COMMAND, 864, 0); // Blasting requires dynamite
} 

int u20() { printMessage(PRINT_MESSAGE_END_COMMAND, 1382, 0); } int KilobyteInputBuffer9() {
	if (object_type_3_buffer[697] == 1 || !(isObjectFlagSet(dereference(670), 0)))
	{
		return 0;
	} if (g10(dereference(object_type_3_buffer[670]), -1)) {
		if (!(isObjectFlagSet(dereference(670), 16))) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 814, 0);
		} if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) {
			z5(700, 670); if (object_type_3_buffer[700] > 1) {
				printMessage(76, 1418, 670);
			}
		} if (currentCommandContains(52)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1417, 0); } if (!(isItemAtLocation(dereference(object_type_3_buffer[670]), -1))) {
			if (object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]
				|| isObjectFlagSet(dereference(670), 12)) {
				set_object_location(object_type_3_buffer[670], r5); h29();
			}
			else { printMessage(PRINT_MESSAGE_END_COMMAND, 897, 0); }
		} if
			(currentCommandContains(47)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1423, 0);
		} c16(670, 2); modifyObjectFlag('s', dereference(670), 12); if (currentCommandContains(43))
		{
			if (isObjectFlagSet(43, 14)) { printMessage(12, 1489, 669); printMessage(12, 1490, 670); }
			else {
				modifyObjectFlag('s', 43, 14);
				printMessage(0, 1425, 0);
			}
		}
		else { printMessage(12, 1489, 669); printMessage(12, 1490, 670); } longjmp(done_with_command, 1);
	}
} int v30() {
	if (currentCommandContains(101) && isItemAtLocation(ITEM_BIRD, -1)) { s27(); longjmp(done_with_command, 1); } if
		(object_type_3_buffer[697] == 1) {
		return 0;
	} if (!(isObjectFlagSet(dereference(670), 16))) { printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0); } z5(700, 670);
	if (object_type_3_buffer[700] < 2 || !isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1419, 0); } if (!(object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS]))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 897, 0);
	} if (!(currentCommandContains(64))) { modifyObjectFlag('c', dereference(670), 12); } if (currentCommandContains(43)) {
		set_value(SET_VALUE_DEREFERENCE, 699, 43); if (object_type_3_buffer[699] > 1) {
			set_value(0, 43, 1); if (object_type_3_buffer[699] < 9) {
				if (!(object_type_3_buffer[699] == 3
					|| object_type_3_buffer[PLAYER_LOCATION] == 252 || object_type_3_buffer[PLAYER_LOCATION] == LOCATION_SOUTH_END_STONE_FACES || object_type_3_buffer[PLAYER_LOCATION] == 251)) {
					printMessage(PRINT_MESSAGE_END_COMMAND, 1607, 0);
				}
			}
			else
			{
				if (object_type_3_buffer[699] < 12) { printMessage(PRINT_MESSAGE_END_COMMAND, 1608, 0); } if (object_type_3_buffer[699] < 17) { printMessage(PRINT_MESSAGE_END_COMMAND, 1609, 0); }
				if (object_type_3_buffer[699] < 19) { printMessage(PRINT_MESSAGE_END_COMMAND, 1610, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1611, 0);
			}
		}
	} c16(670, 1); printMessage(12, 1489, 669);
	printMessage(76, 1490, 670);
} int l30() { printMessage(PRINT_MESSAGE_END_COMMAND, 1427, 0); } int u18() {
	if (object_type_3_buffer[697] == 1)
	{
		if (g10(16, -1)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 165) { processMoveCommand(166, -1); }
			else {
				processMoveCommand(165, -1);
			} modifyObjectFlag('c', dereference(697), 0); modifyObjectFlag('c', 16, 14); printMessage(PRINT_MESSAGE_END_COMMAND, 1081, 0);
		} if (g10(10, -1)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1430, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1429, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int o19() {
	if (object_type_3_buffer[697] == 2)
	{
		if (!(currentCommandContains(70) || currentCommandContains(108) || currentCommandContains(ITEM_DWARF) || currentCommandContains(88))) { printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0); }
	} if (g10(88, -1))
	{
		if (object_type_3_buffer[697] == 1 || currentCommandContains(88)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1054, 0); }
	} if (g10(70, -1) || g10(108, -1)
		|| g10(ITEM_DWARF, -1)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1433, 0);
	} printMessage(76, 1434, 669);
} int u19() {
	if (cheezy_rand(100) < 30)
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1506, 0);
	} if (cheezy_rand(100) < 50) { printMessage(PRINT_MESSAGE_END_COMMAND, 1507, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1508, 0);
} int
g31() { f3(700, 1471); f3(701, 1473); c28(); longjmp(done_with_command, 1); } int q32() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 136 || object_type_3_buffer[PLAYER_LOCATION] == 142 || object_type_3_buffer[PLAYER_LOCATION] == 143 || object_type_3_buffer[PLAYER_LOCATION] == 200 || object_type_3_buffer[PLAYER_LOCATION] == 425
		|| object_type_3_buffer[PLAYER_LOCATION] == 427 || object_type_3_buffer[PLAYER_LOCATION] == 428) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1476, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int j30()
{
	if (object_type_3_buffer[PLAYER_LOCATION] == 252 || object_type_3_buffer[PLAYER_LOCATION] == LOCATION_SOUTH_END_STONE_FACES || object_type_3_buffer[PLAYER_LOCATION] == 251) { printMessage(PRINT_MESSAGE_END_COMMAND, 1480, 0); } if (isItemAtLocation(43, -1)
		&& object_type_3_buffer[43] > 2) {
		if (!(isObjectFlagSet(43, 13))) { object_type_3_buffer[43] += 1; } if (object_type_3_buffer[43] < 9) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1612, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, 1613, 0);
	} if (g10(ITEM_DWARF, -1) || g10(ITEM_GOBLINS, -1) || object_type_3_buffer[17] > 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1481, 0);
	} if (q8(101, -1)) { printMessage(76, 1478, 101); } if (g10(ITEM_SWORD, -1)) {
		printMessage(76, 1478, ITEM_SWORD);
	} if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7) && object_type_3_buffer[PLAYER_LOCATION] != LOCATION_BUILDING) { printMessage(PRINT_MESSAGE_END_COMMAND, 1482, 0); } if (object_type_3_buffer[PLAYER_LOCATION] == 432
		|| object_type_3_buffer[PLAYER_LOCATION] == 250 || object_type_3_buffer[PLAYER_LOCATION] == 249 || object_type_3_buffer[PLAYER_LOCATION] == 296 || object_type_3_buffer[PLAYER_LOCATION] == 463 || object_type_3_buffer[PLAYER_LOCATION] == 324)
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1479, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 230 || object_type_3_buffer[PLAYER_LOCATION] == 239) { printMessage(PRINT_MESSAGE_END_COMMAND, 1638, 0); } if
		(isObjectFlagSet(19, 13) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 3))) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 930, 0);
	}
	printMessage(PRINT_MESSAGE_END_COMMAND, 1477, 0);
} int KilobyteInputBuffer6() { printMessage(PRINT_MESSAGE_END_COMMAND, 1519, 0); } int a24() {
	if (object_type_3_buffer[697] > 1)
	{
		if (isObjectFlagSet(dereference(670), 3)) {
			if (!(g10(dereference(object_type_3_buffer[670]), -1))) { printMessage(76, MESSAGE_NO_X_HERE, 670); }
			if (isObjectFlagSet(dereference(PLAYER_LOCATION), 9)) {
				if ((object_type_3_buffer[PLAYER_LOCATION] == 428 || object_type_3_buffer[PLAYER_LOCATION] == 427) && isObjectFlagSet(ITEM_RAT, 14)) {
					printMessage(PRINT_MESSAGE_END_COMMAND, 1658, 0);
				} if (currentCommandContains(ITEM_RAGS) && object_type_3_buffer[ITEM_RAGS] == 2) { printMessage(PRINT_MESSAGE_END_COMMAND, 1657, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1656, 0);
			} printMessage(PRINT_MESSAGE_END_COMMAND, 1653, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} if ((object_type_3_buffer[PLAYER_LOCATION] == 427 || object_type_3_buffer[PLAYER_LOCATION] == 428) && isObjectFlagSet(ITEM_RAT, 14)) {
		if (isObjectFlagSet(ITEM_RAT, 12))
		{
			printMessage(0, 1663, 0);
		}
		else { printMessage(0, 1649, 0); modifyObjectFlag('s', ITEM_RAT, 12); } modifyObjectFlag('c', ITEM_RAT, 14); modifyObjectFlag('c', 428, 8);
		modifyObjectFlag('c', 427, 8); longjmp(done_with_command, 1);
	} if ((419 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 426)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1650, 0);
	} if (isObjectFlagSet(dereference(PLAYER_LOCATION), 9)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1651, 0); } if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1652, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1653, 0);
} int s26() {
	printMessage(0, 777, 0); 
	printBlankLine(); // blank line
	object_type_3_buffer[699] = cheezy_rand(1674 - 1666 + 1) + 1666;
	printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0); printMessage(PRINT_MESSAGE_END_COMMAND, 1675, 0);
} int v36() {
	if ((437 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 461))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 938, 0);
	} if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) { printMessage(76, 1677, 669); } printMessage(76, 1678, 669);
} int j34() {
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1683, 0); } if (isObjectFlagSet(dereference(735), 5))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1686, 0);
	} if (ask_user_yes_or_no_question(1684)) { modifyObjectFlag('s', dereference(735), 5); printMessage(PRINT_MESSAGE_END_COMMAND, 1685, 0); }
	printMessage(PRINT_MESSAGE_END_COMMAND, 1687, 0);
} int u22() {
	if (!currentCommandContains(60)) return; if (g10(60, -1)) {
		if (object_type_3_buffer[60] == 1)
		{
			printMessage(72, 1688, 1);
		} set_value(0, 60, 1); printMessage(72, 1689, 1);
	}
} int l31() {
	if (!currentCommandContains(60))
		return; if (g10(60, -1)) {
		if (object_type_3_buffer[60] == 0) { printMessage(72, 1688, 0); } if (isItemAtLocation(60, -1))
		{
			if (isObjectFlagSet(dereference(735), 7)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1691, 0); } modifyObjectFlag('s', dereference(735), 7); printMessage(PRINT_MESSAGE_END_COMMAND, 1690, 0);
		} set_value(0, 60, 0); printMessage(72, 1689, 0);
	}
} int n23() {
	if ((300 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 311))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1712, 0);
	} if (object_type_3_buffer[193] == 0) {
		if ((168 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 193))
		{
			printMessage(9, 1706, 20); if (ask_user_yes_or_no_question(1707)) {
				object_type_3_buffer[707] += 20; *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167;
				while (++object_type_3_buffer[676] <= 193) { c16(676, 1); } printMessage(PRINT_MESSAGE_END_COMMAND, 1708, 0);
			} printMessage(PRINT_MESSAGE_END_COMMAND, 1711, 0);
		}
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), 10)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1713, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, 1709, 0);
	} if ((168 <= object_type_3_buffer[PLAYER_LOCATION]
		&& object_type_3_buffer[PLAYER_LOCATION] <= 193) && !(isObjectFlagSet(192, 4)) && !(isObjectFlagSet(dereference(735), 8))) {
		if (isObjectFlagSet(193, 4))
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 1714, 0);
		}
		else { printMessage(PRINT_MESSAGE_END_COMMAND, 1715, 0); }
	} if (isObjectFlagSet(dereference(PLAYER_LOCATION), 10)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1713, 0);
	} printMessage(PRINT_MESSAGE_END_COMMAND, 1710, 0);
} 

int j47() {
	printBlankLine(); // blank line
	modifyObjectFlag('s', ITEM_KEYS, 3); 
	modifyObjectFlag('s', 99, 3);
	modifyObjectFlag('s', 100, 3); 
	modifyObjectFlag('s', 102, 3); 
	modifyObjectFlag('s', 104, 3); 
	modifyObjectFlag('s', 101, 3); 
	modifyObjectFlag('s', 105, 3);
	modifyObjectFlag('s', 106, 3); 
	modifyObjectFlag('s', 107, 3); 
	modifyObjectFlag('s', 108, 3); 
	modifyObjectFlag('s', 109, 3); 
	modifyObjectFlag('s', 110, 3);
	modifyObjectFlag('s', 111, 3);
	modifyObjectFlag('s', ITEM_AXE, 3);
	modifyObjectFlag('s', 38, 3); 
	modifyObjectFlag('s', 39, 3); 
	modifyObjectFlag('s', 44, 3);
	modifyObjectFlag('s', 45, 3);
	modifyObjectFlag('s', 46, 3); modifyObjectFlag('s', 47, 3); modifyObjectFlag('s', 48, 3); modifyObjectFlag('s', 49, 3); modifyObjectFlag('s', 50, 3);
	modifyObjectFlag('s', 51, 3); modifyObjectFlag('s', 53, 3); modifyObjectFlag('s', 54, 3); modifyObjectFlag('s', 55, 3); modifyObjectFlag('s', 58, 3); modifyObjectFlag('s', 59, 3);
	modifyObjectFlag('s', 60, 3); modifyObjectFlag('s', 61, 3); modifyObjectFlag('s', 63, 3); modifyObjectFlag('s', 64, 3); modifyObjectFlag('s', 65, 3); modifyObjectFlag('s', 42, 3);
	modifyObjectFlag('s', 52, 3); modifyObjectFlag('s', 117, 3); modifyObjectFlag('s', 118, 3); modifyObjectFlag('s', 119, 3); modifyObjectFlag('s', 66, 3);
	modifyObjectFlag('s', 67, 3); modifyObjectFlag('s', 68, 3); modifyObjectFlag('s', ITEM_SWORD, 3); modifyObjectFlag('s', 43, 3); modifyObjectFlag('s', 56, 3); modifyObjectFlag('s', 57, 3);
	modifyObjectFlag('s', 114, 3); modifyObjectFlag('s', ITEM_PLATE, 3); modifyObjectFlag('s', 62, 3); modifyObjectFlag('s', 78, 3); modifyObjectFlag('s', 92, 3);
	modifyObjectFlag('s', 89, 3); modifyObjectFlag('s', 80, 3); modifyObjectFlag('s', 85, 3); modifyObjectFlag('s', 81, 3); modifyObjectFlag('s', 88, 3); modifyObjectFlag('s', 90, 3);
	modifyObjectFlag('s', 83, 3); modifyObjectFlag('s', 84, 3); modifyObjectFlag('s', ITEM_STARSTONE, 3); modifyObjectFlag('s', 97, 3); modifyObjectFlag('s', ITEM_RAGS, 3); modifyObjectFlag('s', 101, 12);
	modifyObjectFlag('s', 38, 12); modifyObjectFlag('s', 97, 12); modifyObjectFlag('s', 64, 12); modifyObjectFlag('s', 59, 12); modifyObjectFlag('s', 136, 3);
	modifyObjectFlag('s', 137, 3); modifyObjectFlag('s', 437, 3); modifyObjectFlag('s', 438, 3); modifyObjectFlag('s', 439, 3); modifyObjectFlag('s', 440, 3);
	modifyObjectFlag('s', 441, 3); modifyObjectFlag('s', 442, 3); modifyObjectFlag('s', 443, 3); modifyObjectFlag('s', 444, 3); modifyObjectFlag('s', 445, 3);
	modifyObjectFlag('s', 446, 3); modifyObjectFlag('s', 447, 3); modifyObjectFlag('s', 448, 3); modifyObjectFlag('s', 449, 3); modifyObjectFlag('s', 450, 3);
	modifyObjectFlag('s', 451, 3); modifyObjectFlag('s', 452, 3); modifyObjectFlag('s', 453, 3); modifyObjectFlag('s', 454, 3); modifyObjectFlag('s', 455, 3);
	modifyObjectFlag('s', 456, 3); modifyObjectFlag('s', 461, 3); modifyObjectFlag('s', 460, 3); modifyObjectFlag('s', 459, 3); modifyObjectFlag('s', 458, 3);
	modifyObjectFlag('s', 138, 3); modifyObjectFlag('s', 139, 3); modifyObjectFlag('s', LOCATION_MAGNIFICENT_VIEW, 3); modifyObjectFlag('s', 457, 3); modifyObjectFlag('s', 141, 3);
	modifyObjectFlag('s', 142, 3); modifyObjectFlag('s', 143, 3); modifyObjectFlag('s', LOCATION_OUTSIDE_GRATE, 3); modifyObjectFlag('s', 436, 3); modifyObjectFlag('s', 145, 3);
	modifyObjectFlag('s', 146, 3); modifyObjectFlag('s', LOCATION_PLOVER, 3); modifyObjectFlag('s', 252, 3); modifyObjectFlag('s', 324, 3); modifyObjectFlag('s', 376, 3);
	modifyObjectFlag('s', 377, 3); modifyObjectFlag('s', 256, 3); modifyObjectFlag('s', 257, 3); modifyObjectFlag('s', 463, 3); modifyObjectFlag('s', LOCATION_SOUTH_END_STONE_FACES, 3);
	modifyObjectFlag('s', 254, 3); modifyObjectFlag('s', 290, 3); modifyObjectFlag('s', 291, 3); modifyObjectFlag('s', 295, 3); modifyObjectFlag('s', 382, 3);
	modifyObjectFlag('s', LOCATION_GRAY_NOWHERE, 3); modifyObjectFlag('s', 242, 3); modifyObjectFlag('s', 419, 3); modifyObjectFlag('s', 399, 3); modifyObjectFlag('s', 400, 3);
	modifyObjectFlag('s', 401, 3); modifyObjectFlag('s', 402, 3); modifyObjectFlag('s', 403, 3); modifyObjectFlag('s', 404, 3); modifyObjectFlag('s', 383, 3);
	modifyObjectFlag('s', 483, 3); modifyObjectFlag('s', 378, 3); modifyObjectFlag('s', 380, 3); modifyObjectFlag('s', 379, 3); 
	modifyObjectFlag('s', 145, 5);
	modifyObjectFlag('s', 146, 5); modifyObjectFlag('s', 227, 5); modifyObjectFlag('s', 244, 5); modifyObjectFlag('s', 245, 5); modifyObjectFlag('s', 249, 5);
	modifyObjectFlag('s', LOCATION_PLOVER, 5); modifyObjectFlag('s', 229, 5); modifyObjectFlag('s', 250, 5); modifyObjectFlag('s', 251, 5); modifyObjectFlag('s', 252, 5);
	modifyObjectFlag('s', 296, 5); modifyObjectFlag('s', 297, 5); modifyObjectFlag('s', 298, 5); modifyObjectFlag('s', 299, 5); modifyObjectFlag('s', 192, 5);
	modifyObjectFlag('s', 158, 5); modifyObjectFlag('s', 159, 5); modifyObjectFlag('s', 200, 5); modifyObjectFlag('s', 377, 5); modifyObjectFlag('s', 376, 5);
	modifyObjectFlag('s', LOCATION_SOUTH_END_STONE_FACES, 5); modifyObjectFlag('s', 254, 5); modifyObjectFlag('s', 255, 5); modifyObjectFlag('s', 256, 5); modifyObjectFlag('s', 257, 5);
	modifyObjectFlag('s', 463, 5); modifyObjectFlag('s', 258, 5); modifyObjectFlag('s', 259, 5); modifyObjectFlag('s', 260, 5); modifyObjectFlag('s', 261, 5);
	modifyObjectFlag('s', 262, 5); modifyObjectFlag('s', 263, 5); modifyObjectFlag('s', 264, 5); modifyObjectFlag('s', 265, 5); modifyObjectFlag('s', 315, 5);
	modifyObjectFlag('s', 266, 5); modifyObjectFlag('s', 267, 5); modifyObjectFlag('s', 268, 5); modifyObjectFlag('s', 269, 5); modifyObjectFlag('s', 270, 5);
	
	*getObjectPointer(676) = -1; 
	object_type_3_buffer[676] = 270; 
	while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', dereference(676), 5);
	} 
	
	modifyObjectFlag('s', 290, 5); modifyObjectFlag('s', 291, 5); modifyObjectFlag('s', 292, 5); modifyObjectFlag('s', 293, 5); modifyObjectFlag('s', 294, 5);
	modifyObjectFlag('s', 295, 5); modifyObjectFlag('s', 240, 5); modifyObjectFlag('s', 241, 5); modifyObjectFlag('s', 242, 5); modifyObjectFlag('s', 462, 5);
	modifyObjectFlag('s', 323, 5); modifyObjectFlag('s', LOCATION_CELLAR, 5); modifyObjectFlag('s', 388, 5); modifyObjectFlag('s', 433, 5); modifyObjectFlag('s', 383, 5);
	modifyObjectFlag('s', 384, 5); modifyObjectFlag('s', 405, 5); modifyObjectFlag('s', 406, 5); modifyObjectFlag('s', 432, 5); modifyObjectFlag('s', 420, 5);
	modifyObjectFlag('s', 421, 5); modifyObjectFlag('s', 428, 5); modifyObjectFlag('s', 419, 5); modifyObjectFlag('s', 422, 5); modifyObjectFlag('s', 423, 5);
	modifyObjectFlag('s', 424, 5); modifyObjectFlag('s', 425, 5); modifyObjectFlag('s', 426, 5); modifyObjectFlag('s', 418, 5); modifyObjectFlag('s', 417, 5);
	modifyObjectFlag('s', 416, 5); modifyObjectFlag('s', 415, 5); modifyObjectFlag('s', 205, 5); modifyObjectFlag('s', 434, 5); modifyObjectFlag('s', 484, 5);
	modifyObjectFlag('s', 485, 5); modifyObjectFlag('s', 147, 5); modifyObjectFlag('s', 148, 5); modifyObjectFlag('s', 149, 5); modifyObjectFlag('s', 150, 5);
	modifyObjectFlag('s', 411, 5); modifyObjectFlag('s', 204, 5); modifyObjectFlag('s', 382, 5); modifyObjectFlag('s', LOCATION_DWARVES_STORES, 5); modifyObjectFlag('s', 136, 7);
	modifyObjectFlag('s', 137, 7); modifyObjectFlag('s', 437, 7); modifyObjectFlag('s', 438, 7); modifyObjectFlag('s', 439, 7); modifyObjectFlag('s', 440, 7);
	modifyObjectFlag('s', 441, 7); modifyObjectFlag('s', 442, 7); modifyObjectFlag('s', 443, 7); modifyObjectFlag('s', 444, 7); modifyObjectFlag('s', 445, 7);
	modifyObjectFlag('s', 446, 7); modifyObjectFlag('s', 447, 7); modifyObjectFlag('s', 448, 7); modifyObjectFlag('s', 449, 7); modifyObjectFlag('s', 450, 7);
	modifyObjectFlag('s', 451, 7); modifyObjectFlag('s', 452, 7); modifyObjectFlag('s', 453, 7); modifyObjectFlag('s', 454, 7); modifyObjectFlag('s', 455, 7);
	modifyObjectFlag('s', 456, 7); modifyObjectFlag('s', 141, 7); modifyObjectFlag('s', 461, 7); modifyObjectFlag('s', 458, 7); modifyObjectFlag('s', 459, 7);
	modifyObjectFlag('s', 460, 7); modifyObjectFlag('s', 457, 7); modifyObjectFlag('s', 138, 7); modifyObjectFlag('s', 139, 7); modifyObjectFlag('s', LOCATION_MAGNIFICENT_VIEW, 7);
	modifyObjectFlag('s', 142, 7); modifyObjectFlag('s', 143, 7); modifyObjectFlag('s', LOCATION_OUTSIDE_GRATE, 7); modifyObjectFlag('s', 436, 7); modifyObjectFlag('s', 169, 6);
	modifyObjectFlag('s', 170, 6); modifyObjectFlag('s', 171, 6); modifyObjectFlag('s', 182, 6); modifyObjectFlag('s', 185, 6); modifyObjectFlag('s', 189, 6);
	modifyObjectFlag('s', 172, 6); modifyObjectFlag('s', 173, 6); modifyObjectFlag('s', 174, 6); modifyObjectFlag('s', 175, 6); modifyObjectFlag('s', 176, 6);
	modifyObjectFlag('s', 183, 6); modifyObjectFlag('s', 177, 6); modifyObjectFlag('s', 190, 6); modifyObjectFlag('s', 193, 6); modifyObjectFlag('s', 186, 6);
	modifyObjectFlag('s', 178, 6); modifyObjectFlag('s', 184, 6); modifyObjectFlag('s', 191, 6); modifyObjectFlag('s', 179, 6); modifyObjectFlag('s', 180, 6);
	modifyObjectFlag('s', 187, 6); modifyObjectFlag('s', 188, 6); modifyObjectFlag('s', 181, 6); modifyObjectFlag('s', 301, 6); modifyObjectFlag('s', 192, 6);
	modifyObjectFlag('s', 302, 6); modifyObjectFlag('s', 303, 6); modifyObjectFlag('s', 304, 6); modifyObjectFlag('s', 305, 6); modifyObjectFlag('s', 306, 6);
	modifyObjectFlag('s', 307, 6); modifyObjectFlag('s', 308, 6); modifyObjectFlag('s', 309, 6); modifyObjectFlag('s', 310, 6); modifyObjectFlag('s', 311, 6);
	modifyObjectFlag('s', 232, 6); modifyObjectFlag('s', 370, 6); modifyObjectFlag('s', 371, 6); modifyObjectFlag('s', 240, 6); modifyObjectFlag('s', 221, 6);
	modifyObjectFlag('s', 238, 6); modifyObjectFlag('s', 244, 6); modifyObjectFlag('s', 245, 6); modifyObjectFlag('s', LOCATION_WITTS_END, 6); modifyObjectFlag('s', 227, 6);
	modifyObjectFlag('s', LOCATION_PLOVER, 6); modifyObjectFlag('s', 229, 6); modifyObjectFlag('s', 216, 6); modifyObjectFlag('s', 329, 6); modifyObjectFlag('s', 331, 6);
	modifyObjectFlag('s', 333, 6); modifyObjectFlag('s', 335, 6); modifyObjectFlag('s', 336, 6); modifyObjectFlag('s', 337, 6); modifyObjectFlag('s', 338, 6);
	modifyObjectFlag('s', 339, 6); modifyObjectFlag('s', 340, 6); modifyObjectFlag('s', 341, 6); modifyObjectFlag('s', 342, 6); modifyObjectFlag('s', 343, 6);
	modifyObjectFlag('s', 345, 6); modifyObjectFlag('s', 346, 6); modifyObjectFlag('s', 347, 6); modifyObjectFlag('s', 349, 6); modifyObjectFlag('s', 350, 6);
	modifyObjectFlag('s', 351, 6); modifyObjectFlag('s', 352, 6); modifyObjectFlag('s', 353, 6); modifyObjectFlag('s', 354, 6); modifyObjectFlag('s', 328, 6);
	modifyObjectFlag('s', 327, 6); 
	
	*getObjectPointer(676) = -1; 
	object_type_3_buffer[676] = 270;
	while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', dereference(676), 6);
	} 
	
	modifyObjectFlag('s', LOCATION_SOUTH_END_STONE_FACES, 6); modifyObjectFlag('s', 255, 6); modifyObjectFlag('s', 256, 6); modifyObjectFlag('s', 263, 6); modifyObjectFlag('s', LOCATION_GRAY_NOWHERE, 6);
	modifyObjectFlag('s', 382, 6); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) {
		modifyObjectFlag('s', dereference(676), 6);
	} modifyObjectFlag('s', 428, 6); modifyObjectFlag('s', LOCATION_CELLAR, 6); modifyObjectFlag('s', 432, 6); modifyObjectFlag('s', 164, 6); modifyObjectFlag('s', 270, 6);
	modifyObjectFlag('s', 461, 6); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193) {
		modifyObjectFlag('s', dereference(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) {
		modifyObjectFlag('s', dereference(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) {
		modifyObjectFlag('s', dereference(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364) {
		modifyObjectFlag('s', dereference(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', dereference(676), 10);
	} modifyObjectFlag('s', 154, 11); modifyObjectFlag('s', 394, 11); modifyObjectFlag('s', 165, 11); modifyObjectFlag('s', 166, 11); modifyObjectFlag('s', 182, 11);
	modifyObjectFlag('s', 185, 11); modifyObjectFlag('s', 189, 11); modifyObjectFlag('s', 172, 11); modifyObjectFlag('s', 183, 11); modifyObjectFlag('s', 190, 11);
	modifyObjectFlag('s', 186, 11); modifyObjectFlag('s', 197, 11); modifyObjectFlag('s', 214, 11); modifyObjectFlag('s', 219, 11); modifyObjectFlag('s', 184, 11);
	modifyObjectFlag('s', 191, 11); modifyObjectFlag('s', 187, 11); modifyObjectFlag('s', 188, 11); modifyObjectFlag('s', 234, 11); modifyObjectFlag('s', 242, 11);
	modifyObjectFlag('s', 311, 11); modifyObjectFlag('s', 462, 11); modifyObjectFlag('s', 318, 11); modifyObjectFlag('s', 321, 11); modifyObjectFlag('s', 330, 11);
	modifyObjectFlag('s', 334, 11); modifyObjectFlag('s', 338, 11); modifyObjectFlag('s', 339, 11); modifyObjectFlag('s', 345, 11); modifyObjectFlag('s', 346, 11);
	modifyObjectFlag('s', 369, 11); modifyObjectFlag('s', 377, 11); modifyObjectFlag('s', 411, 11); modifyObjectFlag('s', 407, 11); modifyObjectFlag('s', 205, 11);
	modifyObjectFlag('s', 433, 11); modifyObjectFlag('s', 483, 11); modifyObjectFlag('s', 4, 9); modifyObjectFlag('s', 6, 9); modifyObjectFlag('s', 106, 9);
	modifyObjectFlag('s', 107, 9); modifyObjectFlag('s', 114, 9); modifyObjectFlag('s', 63, 9); modifyObjectFlag('s', 35, 9); modifyObjectFlag('s', 118, 9);
	modifyObjectFlag('s', 49, 9); modifyObjectFlag('s', 73, 9); modifyObjectFlag('s', 93, 9); modifyObjectFlag('s', 113, 10); modifyObjectFlag('s', 112, 10);
	modifyObjectFlag('s', 5, 10); modifyObjectFlag('s', 73, 10); modifyObjectFlag('s', 8, 10); modifyObjectFlag('s', ITEM_MIRROR, 10); modifyObjectFlag('s', 16, 10);
	modifyObjectFlag('s', 13, 10); modifyObjectFlag('s', 18, 10); modifyObjectFlag('s', 19, 10); modifyObjectFlag('s', 31, 10); modifyObjectFlag('s', 30, 10);
	modifyObjectFlag('s', 32, 10); modifyObjectFlag('s', 36, 10); modifyObjectFlag('s', 40, 10); modifyObjectFlag('s', ITEM_DWARF, 10); modifyObjectFlag('s', 109, 10);
	modifyObjectFlag('s', 14, 10); modifyObjectFlag('s', 12, 10); modifyObjectFlag('s', 135, 10); modifyObjectFlag('s', 75, 10); modifyObjectFlag('s', 70, 10);
	modifyObjectFlag('s', 85, 10); modifyObjectFlag('s', ITEM_RAT, 10); modifyObjectFlag('s', 122, 10); modifyObjectFlag('s', 17, 10); modifyObjectFlag('s', 9, 10);
	modifyObjectFlag('s', 93, 10); modifyObjectFlag('s', 8, 10); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193)
	{
		modifyObjectFlag('s', dereference(676), 8);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311)
	{
		modifyObjectFlag('s', dereference(676), 8);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364)
	{
		modifyObjectFlag('s', dereference(676), 8);
	} modifyObjectFlag('s', 149, 8); modifyObjectFlag('s', LOCATION_OUTSIDE_GRATE, 8); modifyObjectFlag('s', 155, 8); modifyObjectFlag('s', 165, 8);
	modifyObjectFlag('s', 166, 8); modifyObjectFlag('s', LOCATION_WITTS_END, 8); modifyObjectFlag('s', LOCATION_PLOVER, 8); modifyObjectFlag('s', 227, 8); modifyObjectFlag('s', 229, 8);
	modifyObjectFlag('s', 328, 8); modifyObjectFlag('s', 256, 8); modifyObjectFlag('s', 239, 8); modifyObjectFlag('s', 434, 8); modifyObjectFlag('s', 252, 8);
	modifyObjectFlag('s', 254, 8); modifyObjectFlag('s', 323, 8); modifyObjectFlag('s', 259, 8); modifyObjectFlag('s', 314, 8); modifyObjectFlag('s', 315, 8);
	modifyObjectFlag('s', 264, 8); modifyObjectFlag('s', 427, 8); modifyObjectFlag('s', 428, 8); modifyObjectFlag('s', 141, LOCATION_FLAG_WATER); modifyObjectFlag('s', 136, LOCATION_FLAG_WATER);
	modifyObjectFlag('s', 142, LOCATION_FLAG_WATER); modifyObjectFlag('s', 143, LOCATION_FLAG_WATER); modifyObjectFlag('s', 200, LOCATION_FLAG_WATER); modifyObjectFlag('s', 224, LOCATION_FLAG_WATER); modifyObjectFlag('s', 239, LOCATION_FLAG_WATER);
	modifyObjectFlag('s', 240, LOCATION_FLAG_WATER); modifyObjectFlag('s', LOCATION_PANTRY, LOCATION_FLAG_WATER); modifyObjectFlag('s', 427, LOCATION_FLAG_WATER); modifyObjectFlag('s', 428, LOCATION_FLAG_WATER); modifyObjectFlag('s', ITEM_KEYS, 11);
	modifyObjectFlag('s', 48, 11); modifyObjectFlag('s', 108, 11); modifyObjectFlag('s', 39, 11); modifyObjectFlag('s', 45, 11); modifyObjectFlag('s', 61, 11);
	modifyObjectFlag('s', 62, 11); modifyObjectFlag('s', 88, 11); modifyObjectFlag('s', ITEM_RAGS, 11); modifyObjectFlag('s', 117, 11); modifyObjectFlag('s', LOCATION_MAGNIFICENT_VIEW, 12);
	modifyObjectFlag('s', 150, 12); modifyObjectFlag('s', 152, 12); modifyObjectFlag('s', 153, 12); modifyObjectFlag('s', 156, 12); modifyObjectFlag('s', 157, 12);
	modifyObjectFlag('s', 160, 12); modifyObjectFlag('s', 165, 12); modifyObjectFlag('s', 166, 12); modifyObjectFlag('s', 199, 12); modifyObjectFlag('s', 201, 12);
	modifyObjectFlag('s', 193, 12); modifyObjectFlag('s', 210, 12); modifyObjectFlag('s', 211, 12); modifyObjectFlag('s', 215, 12); modifyObjectFlag('s', 221, 12);
	modifyObjectFlag('s', 224, 12); modifyObjectFlag('s', 230, 12); modifyObjectFlag('s', 239, 12); modifyObjectFlag('s', 240, 12); modifyObjectFlag('s', 238, 12);
	modifyObjectFlag('s', 242, 12); modifyObjectFlag('s', 244, 12); modifyObjectFlag('s', 245, 12); modifyObjectFlag('s', 252, 12); modifyObjectFlag('s', LOCATION_SOUTH_END_STONE_FACES, 12);
	modifyObjectFlag('s', 261, 12); modifyObjectFlag('s', 463, 12); modifyObjectFlag('s', 262, 12); modifyObjectFlag('s', 265, 12); modifyObjectFlag('s', 266, 12);
	modifyObjectFlag('s', 267, 12); modifyObjectFlag('s', 325, 12); modifyObjectFlag('s', 326, 12); modifyObjectFlag('s', 327, 12); modifyObjectFlag('s', 365, 12);
	modifyObjectFlag('s', 204, 12); modifyObjectFlag('s', 376, 12); modifyObjectFlag('s', 382, 12); modifyObjectFlag('s', 395, 12); modifyObjectFlag('s', 394, 12);
	modifyObjectFlag('s', 408, 12); modifyObjectFlag('s', 399, 12); modifyObjectFlag('s', 400, 12); modifyObjectFlag('s', 401, 12); modifyObjectFlag('s', 402, 12);
	modifyObjectFlag('s', 403, 12); modifyObjectFlag('s', 404, 12); modifyObjectFlag('s', 151, 12); 
	
	//
	// Treasures
	//
	modifyObjectFlag('s', ITEM_GOLD, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_DIAMONDS, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', ITEM_SILVER, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_JEWELRY, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_COINS, ITEM_FLAG_TREASURE); 
	modifyObjectFlag('s', ITEM_CHEST, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_EGGS, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_TRIDENT, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', ITEM_VASE, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_EMERALD, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_PYRAMID, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', ITEM_PEARL, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_RUG, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_SPICES, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', 63, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 68, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 66, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 67, ITEM_FLAG_TREASURE); 
	modifyObjectFlag('s', 64, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 65, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', 42, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 52, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 43, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 56, ITEM_FLAG_TREASURE); 
	modifyObjectFlag('s', 57, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 62, ITEM_FLAG_TREASURE);
	modifyObjectFlag('s', 78, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 92, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 83, ITEM_FLAG_TREASURE); modifyObjectFlag('s', 81, ITEM_FLAG_TREASURE); modifyObjectFlag('s', ITEM_STARSTONE, ITEM_FLAG_TREASURE);
	
	modifyObjectFlag('s', 49, 7);
	modifyObjectFlag('s', 66, 7); modifyObjectFlag('s', 100, 7); modifyObjectFlag('s', 68, 7); modifyObjectFlag('s', 117, 7); modifyObjectFlag('s', 119, 7);
	modifyObjectFlag('s', 42, 7); modifyObjectFlag('s', 43, 7); modifyObjectFlag('s', 57, 7); modifyObjectFlag('s', ITEM_PLATE, 7); modifyObjectFlag('s', 62, 7); modifyObjectFlag('s', 92, 7);
	modifyObjectFlag('s', 111, 7); modifyObjectFlag('s', ITEM_STARSTONE, 7); modifyObjectFlag('s', 39, 7); modifyObjectFlag('s', ITEM_RAGS, 7); modifyObjectFlag('s', 97, 7);
	modifyObjectFlag('s', 22, 8); modifyObjectFlag('s', ITEM_DWARF, 8); modifyObjectFlag('s', 20, 8); modifyObjectFlag('s', 7, 8); modifyObjectFlag('s', 17, 8); modifyObjectFlag('s', 38, 8);
	modifyObjectFlag('s', 106, 8); modifyObjectFlag('s', 107, 8); modifyObjectFlag('s', 24, 8); modifyObjectFlag('s', 101, 8); modifyObjectFlag('s', 27, 8);
	modifyObjectFlag('s', 28, 8); modifyObjectFlag('s', ITEM_GOBLINS, 8); modifyObjectFlag('s', 25, 8); modifyObjectFlag('s', 135, 8); modifyObjectFlag('s', 82, 8);
	modifyObjectFlag('s', 87, 8); modifyObjectFlag('s', ITEM_RAT, 8); modifyObjectFlag('s', 43, 16); modifyObjectFlag('s', 62, 16); modifyObjectFlag('s', 67, 16);
	modifyObjectFlag('s', 64, 16); modifyObjectFlag('s', 47, 16); modifyObjectFlag('s', 52, 16); modifyObjectFlag('s', 38, 15); modifyObjectFlag('s', 63, 15);
	modifyObjectFlag('s', 85, 15); modifyObjectFlag('s', 84, 15); modifyObjectFlag('s', 88, 15); modifyObjectFlag('s', 101, 15); modifyObjectFlag('s', 106, 15);
	modifyObjectFlag('s', 107, 15); modifyObjectFlag('s', 100, 15); modifyObjectFlag('s', 105, 15); modifyObjectFlag('s', 49, 15); modifyObjectFlag('s', 50, 15);
	modifyObjectFlag('s', 51, 15); modifyObjectFlag('s', 53, 15); modifyObjectFlag('s', 60, 15); modifyObjectFlag('s', 52, 15); modifyObjectFlag('s', 68, 15);
	modifyObjectFlag('s', ITEM_SWORD, 15); modifyObjectFlag('s', 43, 15); modifyObjectFlag('s', 56, 15); modifyObjectFlag('s', 57, 15); modifyObjectFlag('s', ITEM_PLATE, 15);
	modifyObjectFlag('s', 78, 15); modifyObjectFlag('s', 81, 15); modifyObjectFlag('s', 80, 15); modifyObjectFlag('s', 461, 4); modifyObjectFlag('s', LOCATION_GRAY_NOWHERE, 4);
	modifyObjectFlag('s', 420, LOCATION_FLAG_SEWAGE); modifyObjectFlag('s', 421, LOCATION_FLAG_SEWAGE); modifyObjectFlag('s', 422, LOCATION_FLAG_SEWAGE); modifyObjectFlag('s', 423, LOCATION_FLAG_SEWAGE); modifyObjectFlag('s', 424, LOCATION_FLAG_SEWAGE);
	modifyObjectFlag('s', 425, LOCATION_FLAG_SEWAGE); modifyObjectFlag('s', 426, LOCATION_FLAG_SEWAGE); set_value(0, 760, 1); f3(682, 203); object_type_3_buffer[LITTLE_FIGURE_HINT_COUNTER] = cheezy_rand(300 - 150 + 1) + 150;
	
	set_value(0, 733, 1); 
	object_type_3_buffer[761] = cheezy_rand(30 - 15 + 1) + 15; 
	object_type_3_buffer[THIRST_COUNTER] = cheezy_rand(800 - 650 + 1) + 650; 
	object_type_3_buffer[763] = cheezy_rand(160 - 120 + 1) + 120; 
	set_value(0, 762, -1); 
	f3(684, 1348); 
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = ITEM_MIN_ID - 1;

	while (++object_type_3_buffer[675] <= ITEM_MAX_ID) { 
		set_object_location(object_type_3_buffer[675], 484); 
		object_type_3_buffer[700] = cheezy_rand(100); 
	} 
	
	set_object_location(ITEM_KEYS, LOCATION_BUILDING);
	set_object_location(ITEM_LAMP, LOCATION_BUILDING);
	set_object_location(ITEM_GRATE, LOCATION_OUTSIDE_GRATE);
	set_object_location(100, 146); 
	set_object_location(102, 147); 
	set_object_location(5, 150); 
	set_object_location(101, 149);
	set_object_location(6, 223); set_object_location(105, 225); set_object_location(7, 155); set_object_location(8, 152); set_object_location(106, 232); set_object_location(108, LOCATION_WITTS_END);
	set_object_location(110, 484); set_object_location(111, LOCATION_MAGNIFICENT_VIEW); set_object_location(11, 159); set_object_location(12, 156); set_object_location(13, 238); set_object_location(16, 165);
	set_object_location(18, LOCATION_ORIENTAL); set_object_location(20, 247); set_object_location(21, 244); set_object_location(22, 244); set_object_location(38, 299); set_object_location(30, 252);
	set_object_location(34, 311); set_object_location(40, 225); set_object_location(44, 154); set_object_location(45, 153); set_object_location(46, 160); set_object_location(47, 161);
	set_object_location(48, 162); set_object_location(50, LOCATION_GIANT_ROOM); set_object_location(51, 224); set_object_location(53, LOCATION_ORIENTAL); set_object_location(55, LOCATION_PLOVER); set_object_location(58, 229);
	set_object_location(124, 229); set_object_location(61, 296); set_object_location(63, 299); set_object_location(65, 374); set_object_location(42, 377); set_object_location(41, 377);
	set_object_location(52, 313); set_object_location(118, 321); set_object_location(119, 433); set_object_location(66, 346); set_object_location(68, 369); set_object_location(35, 314);
	set_object_location(32, 370); set_object_location(33, 367); set_object_location(ITEM_SWORD, LOCATION_ROCK_IN_MIST); set_object_location(24, 323); set_object_location(36, 291); set_object_location(37, 291);
	set_object_location(56, 291); set_object_location(43, 462); set_object_location(31, 254); set_object_location(14, 256); set_object_location(57, 239); set_object_location(67, 295);
	set_object_location(114, 294); set_object_location(25, 263); set_object_location(ITEM_PLATE, 268); set_object_location(62, 242); set_object_location(26, 240); set_object_location(ITEM_ORB, LOCATION_CELLAR);
	set_object_location(79, 394); set_object_location(86, 388); set_object_location(87, 388); set_object_location(92, 411); set_object_location(89, 419); set_object_location(ITEM_RAT, 421);
	set_object_location(135, 383); set_object_location(80, 416); set_object_location(85, 205); set_object_location(81, 204); set_object_location(75, 203); set_object_location(76, 419);
	set_object_location(77, LOCATION_CELLAR); set_object_location(70, 312); set_object_location(120, LOCATION_MAGNIFICENT_VIEW); set_object_location(71, LOCATION_ROCK_IN_MIST); set_object_location(90, LOCATION_DWARVES_STORES); set_object_location(ITEM_STARSTONE, 463);
	set_object_location(72, LOCATION_CELLAR); set_object_location(120, LOCATION_MAGNIFICENT_VIEW); set_object_location(93, 137); set_object_location(ITEM_RAGS, 318); set_object_location(ITEM_GOBLINS, 484); set_object_location(113, 158);
	modifyObjectFlag('s', 4, 6); modifyObjectFlag('s', 5, 6); modifyObjectFlag('s', 8, 6); modifyObjectFlag('s', 12, 6); modifyObjectFlag('s', 16, 6); modifyObjectFlag('s', 20, 6);
	modifyObjectFlag('s', 21, 6); modifyObjectFlag('s', 22, 6); modifyObjectFlag('s', 23, 6); modifyObjectFlag('s', 32, 6); modifyObjectFlag('s', 35, 6); modifyObjectFlag('s', 14, 6);
	modifyObjectFlag('s', 30, 6); modifyObjectFlag('s', 25, 6); modifyObjectFlag('s', 75, 6); modifyObjectFlag('s', ITEM_STARSTONE, 6); modifyObjectFlag('s', 72, 6); set_value(0, 114, 1);
	set_value(0, 727, 35); set_value(0, 728, 25); modifyObjectFlag('s', dereference(697), 1); set_value(0, 725, 0); f3(719, 777);
	object_type_3_buffer[716] = cheezy_rand(25 - 15 + 1) + 15; object_type_3_buffer[698] = cheezy_rand(460 - 440 + 1) + 440; object_type_3_buffer[715] = cheezy_rand(8 - 4 + 1) + 4;
	if (cheezy_rand(100) < 75) { modifyObjectFlag('s', dereference(710), 2); } set_value(0, 63, 0); set_value(0, 14, 8); set_value(0, CARRIED_ITEM_COUNT, 0);
	set_value(0, MAX_CARRIED_ITEMS, 7); set_value(0, 730, 0); set_value(0, 711, 1999); special_action(12, 699); if (object_type_3_buffer[699] > 0)
	{
		f3(700, 1066); object_type_3_buffer[700] += object_type_3_buffer[699]; printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 700, 0); if (object_type_3_buffer[699] == 1) {
			special_action(5, 700);
		} printBlankLine(); printMessage(0, 1070, 0); if (ask_user_yes_or_no_question(1071)) {
			printBlankLine(); printMessage(0, 777, 0);
			printBlankLine(); modifyObjectFlag('s', dereference(710), 0); set_value(0, 711, 30); set_value(0, 7, 1); modifyObjectFlag('c', 155, 8);
		}
		else { printMessage(0, 1072, 0); r7(); }
	} printMessage(0, 862, 0); if (ask_user_yes_or_no_question(778)) {
		printMessage(0, 781, 0);
		if (ask_user_yes_or_no_question(1556)) { f3(700, 1554); f3(701, 1555); c28(); }
	} set_value(0, 711, 1999);
	processMoveCommand(136, -1); printBlankLine();
} 

int s34() {
	object_type_3_buffer[699] = cheezy_rand(100); 
	if (isObjectFlagSet(dereference(697), 6) && object_type_3_buffer[PLAYER_LOCATION] == LOCATION_CELLAR) {
		if (currentCommandContains(535) || currentCommandContains(COMMAND_THROW)) { 
			e24(); 
		}
	} 
	
	if (cheezy_rand(100) < 3 && object_type_3_buffer[717] == 0 && object_type_3_buffer[715] < 10) {
		p34();
	} 
	
	if (object_type_3_buffer[717] == 3) { 
		i42(); 
	} 
	
	if (isObjectFlagSet(dereference(697), 0))
	{
		object_type_3_buffer[713] += 1; 
		if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_MT_KING) { 
			set_value(SET_VALUE_DEREFERENCE, 681, PREVIOUS_LOCATION); 
		} 
		
		if ((437 <= object_type_3_buffer[PLAYER_LOCATION] && object_type_3_buffer[PLAYER_LOCATION] <= 461)) {	// Forest locations
			set_object_location(ITEM_TREE, object_type_3_buffer[PLAYER_LOCATION]);
		} 
		
		if (object_type_3_buffer[ITEM_DWARF] > 0) {
			if (isObjectFlagSet(dereference(PLAYER_LOCATION), 7) || isObjectFlagSet(dereference(PLAYER_LOCATION), 5)) {
				if (cheezy_rand(100) < 15) {
					object_type_3_buffer[ITEM_DWARF] -= 1; 
					if (object_type_3_buffer[ITEM_DWARF] == 0) {
						set_object_location(ITEM_DWARF, 484);
					}
				}
			} else {
				if (!(item_location[ITEM_DWARF] == object_type_3_buffer[PLAYER_LOCATION] || item_location[ITEM_DWARF] == object_type_3_buffer[PREVIOUS_LOCATION])) {
					set_value(0, ITEM_DWARF, 0);
					set_object_location(ITEM_DWARF, 484);
				}
			}
		} 
		
		if (isObjectFlagSet(19, 13) && isObjectFlagSet(dereference(PLAYER_LOCATION), 7)) { 
			modifyObjectFlag('c', 19, 13); 
		} 
		
		if (isObjectFlagSet(dereference(PREVIOUS_LOCATION), 7) && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 7))) {
			modifyObjectFlag('c', 19, 13);
		}
	} 
	
	if (isObjectFlagSet(dereference(710), 1))
	{
		j42();
	} 
	
	if (isObjectFlagSet(dereference(697), 0)) {
		if (g10(ITEM_STARSTONE, -1) && object_type_3_buffer[ITEM_STARSTONE] > 1) {
			if (item_location[ITEM_STARSTONE] == object_type_3_buffer[PLAYER_LOCATION])
			{
				set_value(0, ITEM_STARSTONE, 3);
			}
			else { 
				set_value(0, ITEM_STARSTONE, 2); 
			}
		}
		
		if (isObjectFlagSet(dereference(PREVIOUS_LOCATION), 11) && item_location[ITEM_DWARF] == object_type_3_buffer[PREVIOUS_LOCATION] && !(isObjectFlagSet(dereference(710), ITEM_FLAG_TREASURE))) {
			if (cheezy_rand(100) < 97) {
				processMoveCommand(object_type_3_buffer[PREVIOUS_LOCATION], -1); 
				modifyObjectFlag('c', dereference(697), 0);
				printMessage(0, 782, 0); // A little dwarf with a big knife blocks your way.
				return 0;
			}
			else { 
				w25(); 
			}
		}
	} else {
		if (g10(ITEM_DWARF, -1) && cheezy_rand(100) < object_type_3_buffer[727])
		{
			t39();
		} 
		return 0;
	} 
	
	if (g10(14, -1)) { 
		b28(); 
	} 
	
	modifyObjectFlag('c', dereference(697), 0); 
	object_type_3_buffer[685] = cheezy_rand(1110 - 1105 + 1) + 1105; 
	
	if (cheezy_rand(100) < 1) { 
		f3(685, 1111); 
	} 
	
	if (g10(99, -1))
	{
		if (object_type_3_buffer[99] == 1 && object_type_3_buffer[PLAYER_LOCATION] != 256) {
			object_type_3_buffer[698] -= 1; 
			if (object_type_3_buffer[698] == 40 || object_type_3_buffer[698] == 0)
			{
				z25();
			}
		}
	} 
	
	if (g10(85, -1) && g10(99, 1)) { 
		h23(); 
	} 
	
	if (!(item_location[ITEM_GOBLINS] == 484 || item_location[ITEM_GOBLINS] == LOCATION_LIMBO)) {
		set_object_location(ITEM_GOBLINS, object_type_3_buffer[PLAYER_LOCATION]); 
		if (object_type_3_buffer[ITEM_GOBLINS] > 0) {
			b26(); 
			if (object_type_3_buffer[699] == 0)
			{
				printMessage(0, 1157, 0); // You are being pursued by a horde of little gooseberry goblins!
			}
		}
	} 
	
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 4) && isObjectFlagSet(dereference(697), 1) || isObjectFlagSet(dereference(697), 2))
	{
		set_value(0, 700, 0);
	} else {
		modifyObjectFlag('s', dereference(697), 3); 
		set_value(0, 700, 1); 
		if (object_type_3_buffer[135] == 5)
		{
			set_value(0, 135, 4);
		}
	} 
	
	b26(); 

	if (object_type_3_buffer[699] == 0) {
		printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, PLAYER_LOCATION, 0);  // description of location
		if (object_type_3_buffer[700] > 0)
		{
			if (object_type_3_buffer[PLAYER_LOCATION] == 463) { 
				printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 684, 0); 
			} else {
				if (object_type_3_buffer[PLAYER_LOCATION] == 150 && object_type_3_buffer[151] == 0)
				{
					printMessage(0, 1225, 0); // Rough stone steps lead down the pit.
				}
			}
		} 
		
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), 15)) { 
			printMessage(0, 876, 0);  // The ground here is damp.
		} 
		
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), 4))
		{
			set_value(0, 701, 2);
		} else {
			set_value(0, 701, 3); 
			if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_ROCK_IN_MIST) {
				printMessage(0, 1335, 0); // Funny...  some of that pattern looks almost like an inscription...
			}
		} 
		
		if (!(isObjectFlagSet(dereference(PLAYER_LOCATION), 7))) { 
			object_type_3_buffer[716] -= object_type_3_buffer[701]; 
		} 
		
		modifyObjectFlag('s', dereference(PLAYER_LOCATION), 4); 
		if (!(object_type_3_buffer[ITEM_DWARF] < 1)) {
			if (!(isObjectFlagSet(dereference(PLAYER_LOCATION), 7) || isObjectFlagSet(dereference(PLAYER_LOCATION), 5))) {
				set_object_location(ITEM_DWARF, object_type_3_buffer[PLAYER_LOCATION]);
			}
		} 
		
		j39(); 
		
		if (g10(ITEM_DWARF, -1) && object_type_3_buffer[ITEM_DWARF] == 1 && object_type_3_buffer[686] != 0 && cheezy_rand(100) < 67) {
			printMessage(0, 1337, 0); // He is clutching his bulging coat and muttering angrily.
		} 
		
		if (isItemAtLocation(38, -1)) { 
			printMessage(0, 939, 0);  // You are being followed by a very large, tame bear.
		} 
		
		if (cheezy_rand(100) < 1 && cheezy_rand(100) < 5 && object_type_3_buffer[717] < 3	&& object_type_3_buffer[712]>150 && !(isObjectFlagSet(dereference(PLAYER_LOCATION), 3))) {
			j40();
		}
	} else {
		if (!(isObjectFlagSet(dereference(PREVIOUS_LOCATION), 3)))
		{
			if (!(item_location[99] == object_type_3_buffer[PREVIOUS_LOCATION] && object_type_3_buffer[99] == 1)) {
				if (!(item_location[ITEM_STARSTONE] == object_type_3_buffer[PREVIOUS_LOCATION] && object_type_3_buffer[ITEM_STARSTONE] != 1))
				{
					if ((isItemAtLocation(58, -1) || cheezy_rand(100) < 25) && !(isObjectFlagSet(dereference(710), 6)) && object_type_3_buffer[717] < 3) {
						printMessage(0, 812, 0); // You fell into a pit and broke every bone in your body!
						die();
					}
				}
			}
		} 
		
		printMessage(0, 805, 0);
	} 
	
	modifyObjectFlag('c', dereference(697), 3); 
	modifyObjectFlag('c', dereference(710), 6); 

	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_Y2)
	{
		if (cheezy_rand(100) < 35) { 
			printMessage(0, 791, 0); // A hollow voice says "Plugh".
		}
	} 
	
	update_goblin_count(); 
	
	if (!(isObjectFlagSet(dereference(PLAYER_LOCATION), 7) || object_type_3_buffer[717] > 2))
	{
		if (object_type_3_buffer[716] < 1) { 
			w26(); 
		} else {
			modifyObjectFlag('c', dereference(697), 7); 
			object_type_3_buffer[761] -= 1; 
			if (object_type_3_buffer[761] == 0) {
				object_type_3_buffer[761] = cheezy_rand(20 - 10 + 1) + 10; 
				e26();
			}
		}
	} 
	
	if (g10(ITEM_DWARF, -1)) {
		set_value(0, 728, 50);
		t39();
	} 
	
	if (item_location[99] == LOCATION_LIMBO && object_type_3_buffer[PLAYER_LOCATION] == 136 && object_type_3_buffer[717] < 4) {
		printMessage(0, 997, 0);  // There's  not  much  point  in  wandering  around  out here, and you can't explore the cave without a lamp.  So let's just call it a day.
		set_value(0, 718, 1);
		print_score_and_rank_and_exit_game();
	}
} 


int s35() {
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), 8)) {
		object_type_3_buffer[720] += 1; 
		if (object_type_3_buffer[720] > 25)
		{
			p36();
		}
	}
	else 
	{ 
		set_value(0, 720, 0); 
	} 
	
	if (g10(ITEM_RAT, -1)) {
		object_type_3_buffer[ITEM_RAT] += 1; 
		if (object_type_3_buffer[ITEM_RAT] < 6)
		{
			if (object_type_3_buffer[ITEM_RAT] > 1) {
				f3(699, 1496); 
				object_type_3_buffer[699] += object_type_3_buffer[ITEM_RAT]; 
				object_type_3_buffer[699] -= 2; 
				printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0);
			}
		} else {
			printMessage(0, 1500, 0); // You  feel  several bites on your legs.  You try to protect them, but more rats sink their teeth into your arms, then one leaps from the sewage  and hangs   onto   your  ear,  weighing  you  down,  now  they  are  at  your throat.............
			processMoveCommand(419, -1); 
			if (isItemAtLocation(110, -1)) { 
				set_object_location(110, 484); 
			} 
			set_value(0, ITEM_RAT, 0);
			die();
		}
	} 
	
	if (isObjectFlagSet(dereference(PLAYER_LOCATION), LOCATION_FLAG_SEWAGE)) { 
		process_sewage(); 
	} 
	
	object_type_3_buffer[757] -= 1; 
	
	if (g10(135, -1))
	{
		u27();
	} 
	
	if (object_type_3_buffer[135] > 0 && object_type_3_buffer[135] < 4 && object_type_3_buffer[757] < 1) {
		if (object_type_3_buffer[135] == 2) {
			set_value(0, 135, 3); 
			modifyObjectFlag('c', 135, 4); 
			object_type_3_buffer[757] = cheezy_rand(7 - 4 + 1) + 4;
		} else {
			if (isObjectFlagSet(135, 4))
			{
				set_value(0, 135, 0);
			}
		}
	} 
	
	check_little_figure_hint(); 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_PANTRY && !(isObjectFlagSet(96, 4)) && cheezy_rand(100) < 3)
	{
		x28();

		if (object_type_3_buffer[701] == 0) { 
			printMessage(0, 1261, 0); // A tiny mouse appears from a small hole, sees you and hastily retreats.
			modifyObjectFlag('s', 96, 4); 
		}
	} 
	
	object_type_3_buffer[758] -= 1;
	if (object_type_3_buffer[PLAYER_LOCATION] == 384) { 
		h27(); 
	} 
	
	if (isObjectFlagSet(dereference(697), 6)) {
		modifyObjectFlag('c', dereference(697), 6); 
		set_value(0, CARRIED_ITEM_COUNT, 0);
		*getObjectPointer(675) = -1; 
		object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
		while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
			if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1) && !(isObjectFlagSet(dereference(675), 12))) {
				object_type_3_buffer[CARRIED_ITEM_COUNT] += 1;
			}
		}
	} 
	
	update_thirst(); 
	set_value(0, 728, 25); 
	set_value(0, 727, 35);
	
	if (isObjectFlagSet(81, 13)) {
		if (isObjectFlagSet(81, 14)) { 
			modifyObjectFlag('c', 81, 14); 
		} else {
			modifyObjectFlag('c', 81, 13);
		}
	} 
	
	if (isObjectFlagSet(16, 14)) { 
		if (g10(16, -1)) { 
			printMessage(0, 1428, 0); // The shadowy figure seems to be trying to attract your attention.
		} 
		modifyObjectFlag('c', 16, 14); 
	} 
	
	if (isObjectFlagSet(16, 13)) {
		modifyObjectFlag('s', 16, 14); 
		modifyObjectFlag('c', 16, 13);
	} 
	
	if (isObjectFlagSet(dereference(710), 9) && !currentCommandContains(503))
	{
		modifyObjectFlag('c', dereference(710), 9);
	} 
	
	if (isObjectFlagSet(dereference(710), 0)) { 
		set_value(0, 699, 30); 
	} else {
		set_value(SET_VALUE_DEREFERENCE, 699, 711);
	} 
	
	if (!(object_type_3_buffer[712] < object_type_3_buffer[699])) { 
		printMessage(0, 1073, 0); 
		print_score_and_rank_and_exit_game(); 
	}
	
	modifyObjectFlag('c', 43, 13); 
	
	if (!(object_type_3_buffer[PLAYER_LOCATION] == 252
		|| object_type_3_buffer[PLAYER_LOCATION] == LOCATION_SOUTH_END_STONE_FACES || object_type_3_buffer[PLAYER_LOCATION] == 251 || object_type_3_buffer[43] < 2 || object_type_3_buffer[697] == 0 || isObjectFlagSet(dereference(697), 5)))
	{
		if (isItemAtLocation(43, -1)) {
			if (object_type_3_buffer[43] > 2) {
				f3(699, 1618); 
				object_type_3_buffer[699] += object_type_3_buffer[43]; 
				object_type_3_buffer[699]-= 2; 
				printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 699, 0);
			} 
			
			if (!(object_type_3_buffer[43] < 9)) { 
				modifyObjectFlag('s', dereference(755), 10); 
			} 
			
			modifyObjectFlag('s', dereference(697), 7);
			
			if ((cheezy_rand(100) < 40 || object_type_3_buffer[43] > 9 || object_type_3_buffer[43] == 2) && object_type_3_buffer[43] != 7 || currentCommandContains(541)) {
				object_type_3_buffer[43] += 1; 
				if (object_type_3_buffer[43] > 19) { 
					die(); 
				} 
				modifyObjectFlag('s', 43, 13);
			}
		} else {
			if (object_type_3_buffer[43] > 1)
			{
				if (!(object_type_3_buffer[43] < 9)) { printMessage(0, 1618, 0); } set_value(0, 43, 1);
			}
		}
	} 
	
	w5(0); 
	
	object_type_3_buffer[FEE_FIE_FOE_FOO_COUNT] -= 1; 
	object_type_3_buffer[712] += 1; 
	
	if (currentCommandContains(489)) { 
		(*command_by_location_dispatch_table[489])(); 
		longjmp(done_with_command, 1); 
	} 
	
	special_action(13, 699);
	if (object_type_3_buffer[699] > 0) { 
		set_value(SET_VALUE_DEREFERENCE, 711, 712); 
		object_type_3_buffer[711] += 30; 
	} 
	
	if (object_type_3_buffer[697] == 0) {
		longjmp(done_with_command, 1);
	} 
	
	if (object_type_3_buffer[669] == 1718 || object_type_3_buffer[669] == 1719) {
		if (object_type_3_buffer[669] == 1718) {
			object_type_3_buffer[700] = cheezy_rand(852 - 847 + 1) + 847;
		} else { 
			object_type_3_buffer[700] = cheezy_rand(1463 - 1460 + 1) + 1460; 
		} 
		printMessage(14, 700, 669); 
		r31(); 
		longjmp(done_with_command, 1);
	} 
	
	if (currentCommandContains(COMMAND_SAY)) { 
		s30(); 
	} 
	
	if (currentCommandContains(3)) { 
		c29(); 
	} 
	
	if (object_type_3_buffer[697] > 1) {
		if (object_type_3_buffer[670] == 1718 || object_type_3_buffer[670] == 1719) {
			if (!((487 <= object_type_3_buffer[669] && object_type_3_buffer[669] <= 494))) {
				if (object_type_3_buffer[670] == 1719)
				{
					printMessage(12, 1460, 670); // I  can't  work  out  what  you  mean  by  "".   If  it's  meant  to be an abbreviation, it is too short to be unambiguous.
				} else {
					object_type_3_buffer[700] = cheezy_rand(857 - 852 + 1) + 852; printMessage(14, 700, 670);
				} 
				r31(); 
				longjmp(done_with_command, 1);
			}
		}
	} 
	
	if (currentCommandContains(COMMAND_WEST) && currentCommandContains(COMMAND_GO)) {
		object_type_3_buffer[729] += 1; if (object_type_3_buffer[729] == 5)
		{
			f3(700, 528); 
			if (object_type_3_buffer[700] == object_type_3_buffer[669]) { 
				printMessage(12, 1509, 669); 
			} else {
				printMessage(12, 1509, 670);
			}
		}
	} 
	
	if (object_type_3_buffer[717] == 5) { 
		a28(); 
	} 
	
	if (currentCommandContains(COMMAND_DOWN) && object_type_3_buffer[697] > 1) {
		if (isObjectFlagSet(dereference(670), 0) && isObjectFlagSet(dereference(670), 3)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1664, 0); // You 'D' means 'DOWN', not 'DROP'...  remember?  Try again.
		}
	} 
	
	if (object_type_3_buffer[697] > 1 && (642 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 658)) {
		t40();
	} 
	
	if (!(currentCommandContains(COMMAND_SAY) && object_type_3_buffer[697] > 1 && !(495 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 512))) {
		(*command_by_location_dispatch_table[object_type_3_buffer[PLAYER_LOCATION]])();
	} 
	
	if (object_type_3_buffer[717] == 5) { 
		a28(); 
	} 
	
	if (isObjectFlagSet(dereference(669), 1))
	{
		if (object_type_3_buffer[PLAYER_LOCATION] == dereference(object_type_3_buffer[669])) { 
			printMessage(0, 938, 0); 
		} else { 
			printMessage(0, 937, 0); 
		}
	}
	else
	{
		if (object_type_3_buffer[717] == 3) {
			if (currentCommandContains(662)) { 
				printMessage(PRINT_MESSAGE_END_COMMAND, 1515, 0); 
			} 
			
			g32(); 
			
			if (currentCommandContains(102))
			{
				u24();
			}
		} 
		
		if (currentCommandContains(73)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 225 || object_type_3_buffer[PLAYER_LOCATION] == 392 || object_type_3_buffer[PLAYER_LOCATION] == 429)
			{
				set_object_location(73, object_type_3_buffer[PLAYER_LOCATION]);
			}
		} 
		
		if (currentCommandContains(662)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1516, 0); 
		} 
		
		if (currentCommandContains(601)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 799, 0);
		} 
		
		if (currentCommandContains(147)) { 
			r28(); 
			longjmp(done_with_command, 1); 
		} 
		
		if (currentCommandContains(69)) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1275, 0); 
		}
		
		if (isObjectFlagSet(dereference(PLAYER_LOCATION), LOCATION_FLAG_SEWAGE)) { 
			if (currentCommandContains(112) || currentCommandContains(560)) { 
				printMessage(PRINT_MESSAGE_END_COMMAND, 1542, 0); 
			} 
		} 
		(*command_by_location_dispatch_table[object_type_3_buffer[669]])();

		r31(); 
		
		if (isObjectFlagSet(dereference(669), 0)) {
			if (currentCommandContains(112) && isObjectFlagSet(dereference(PLAYER_LOCATION), 9) || g10(dereference(object_type_3_buffer[669]), -1))
			{
				printMessage(12, 1023, 669); 
				modifyObjectFlag('s', dereference(697), 5);
			} else { 
				printMessage(12, MESSAGE_NO_X_HERE, 669); 
			}
		}
		else
		{
			x30();
		}
	} 
	longjmp(done_with_command, 1);
}
