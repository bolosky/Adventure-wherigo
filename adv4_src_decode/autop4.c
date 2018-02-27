/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int i40() {
	if (isObjectFlagSet(t11(710), 5)) { l12(0, 716, 0); processMoveCommand(object_type_3_buffer[671], -777); } printMessage(64, 858, 0);
} int k20() { printMessage(0, 1258, 0); printMessage(64, 1675, 0); } int i32() {
	if (object_type_3_buffer[697] > 1)
	{
		(*command_by_location_dispatch_table[490])();
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_BUILDING || object_type_3_buffer[PLAYER_LOCATION] == 205) { printMessage(64, 1557, 0); } printMessage(64, 1259, 0);
} int x26() { printMessage(64, 1260, 0); } 

int r24() {
	if (object_type_3_buffer[697] == 1) {
		if (j0[85] == 485)
		{
			printMessage(64, 1520, 0); // Your hoot echoes in the distance, but otherwise nothing happens.
		} 
		
		if (g10(85, -1)) { 
			printMessage(64, 1302, 0); // Nearby an owl cries "HOOT".
		} 
		
		if (isObjectFlagSet(t11(671), 3) || isObjectFlagSet(t11(671), 5) || isObjectFlagSet(t11(671), 7)) {
			if (g10(87, -1) || object_type_3_buffer[PLAYER_LOCATION] == 205 ||	g10(20, -1)) {
				l12(0, 701, 0); 
				l12(0, 700, 30); 
				y20();
			} else {
				printMessage(0, 1520, 0); // Your hoot echoes in the distance, but otherwise nothing happens.
			} 
			longjmp(done_with_command, 1);
		} 

		t10(701, 85); 
		object_type_3_buffer[701] -= object_type_3_buffer[671]; 
		if (object_type_3_buffer[701] < 0) {
			object_type_3_buffer[701] *= -1;
		} 
		object_type_3_buffer[701] -= 1; 
		object_type_3_buffer[701] *= 3; 
		l12(1, 700, 701); 
		object_type_3_buffer[700] += object_type_3_buffer[701];
		y20();
	} else { 
		printMessage(0, 858, 0);  // Huh??
	} 
	longjmp(done_with_command, 1);
} 

int p29() {
	if (object_type_3_buffer[697] == 1)
	{
		return 0;
	} if (!(isItemAtLocation(116, -1) || isItemAtLocation(115, -1))) { printMessage(64, 1326, 0); } if (!(isObjectFlagSet(t11(670), 0)
		|| currentCommandContains(122))) {
		printMessage(64, 915, 0);
	} if (currentCommandContains(122)) { printMessage(64, 1345, 0); } if (currentCommandContains(75)
		&& g10(75, -1)) {
		printMessage(64, 1327, 0);
	} if (currentCommandContains(11)) {
		if (object_type_3_buffer[PLAYER_LOCATION] == 159) {
			printMessage(64, 1328, 0);
		} if (object_type_3_buffer[PLAYER_LOCATION] == 156 && object_type_3_buffer[11] > 0) { printMessage(64, 1328, 0); }
	} if (currentCommandContains(86)) {
		if (object_type_3_buffer[PLAYER_LOCATION] == 388)
		{
			if (object_type_3_buffer[86] == 0) { printMessage(64, 1304, 0); } if (object_type_3_buffer[86] == 1) {
				s9(88, object_type_3_buffer[671]); l12(0, 86, 2);
				printMessage(64, 1323, 0);
			} printMessage(64, 1329, 0);
		}
	}
} int j32() {
	if (!currentCommandContains(90)) return; if
		(isItemAtLocation(90, -1)) {
		if (isObjectFlagSet(t11(671), 7)) { printMessage(64, 1338, 0); } if ((399 <= object_type_3_buffer[671] &&
			object_type_3_buffer[671] <= 404)) {
			l12(1, 700, 671); f3(701, 398); object_type_3_buffer[700] -= object_type_3_buffer[701]; object_type_3_buffer[715]
				+= object_type_3_buffer[700]; if (object_type_3_buffer[715] > 9) { l12(0, 715, 9); } if (object_type_3_buffer[730] == 0) {
				l12(0, 730, 1);
			}
		} if (isObjectFlagSet(t11(671), 5) || object_type_3_buffer[715] == 0) { printMessage(64, 1340, 0); } if (object_type_3_buffer[134] < object_type_3_buffer[715])
		{
			l12(1, 700, 715); object_type_3_buffer[700] -= object_type_3_buffer[134]; printMessage(13, 1339, 700); s9(134, object_type_3_buffer[671]);
			l12(1, 134, 715); b26(); if (object_type_3_buffer[699] == 0) { modifyObjectFlag('s', 134, 14); printMessage(0, 134, 0); }
		}
		else {
			printMessage(13, 1363, 134); modifyObjectFlag('s', 134, 14); l12(0, 728, 0); l12(0, 727, 100);
		}
	}
	else { printMessage(12, 1027, 670); } longjmp(done_with_command, 1);
} int d32() {
	if ((currentCommandContains(34) ||
		object_type_3_buffer[697] == 1) && g10(34, -1)) {
		if (isObjectFlagSet(39, 4) && !(isObjectFlagSet(97, 4))) {
			modifyObjectFlag('s', 97, 4);
			s9(97, object_type_3_buffer[671]); printMessage(64, 1357, 0);
		} printMessage(64, 828, 0);
	} if (!(object_type_3_buffer[697] == 2)) {
		return
			0;
	} if (isObjectFlagSet(t11(670), 2)) { printMessage(64, 915, 0); } if (g10(t11(object_type_3_buffer[670]), -1)) {
		if
			(currentCommandContains(134) && g10(134, -1)) {
			if (object_type_3_buffer[717] == 3) { printMessage(0, 1373, 0); }
			else {
				printMessage(0, 835, 0);
			} die();
		} printMessage(64, 915, 0);
	}
} int g29() {
	if (!currentCommandContains(39)) return; if (g10(39, -1)
		&& object_type_3_buffer[39] < 3) {
		l12(0, 698, 400); l12(0, 39, 3); printMessage(64, 1359, 0);
	} printMessage(64, 1358, 0);
} int p33() { object_type_3_buffer[677] = cheezy_rand(885 - 878 + 1) + 878; printMessage(66, 677, 0); } int s25() {
	if
		(object_type_3_buffer[697] == 2) {
		if (g10(t11(object_type_3_buffer[670]), -1)) {
			if (object_type_3_buffer[717] == 3 && currentCommandContains(134)) {
				printMessage(0, 1373, 0); die();
			} printMessage(64, 915, 0);
		}
	}
} 

int blast_command() {
	if (object_type_3_buffer[717] == 3 && isObjectFlagSet(104, 4)) {
		if (j0[104] == 485) { 
			printMessage(64, 1401, 0); // I think enough is enough.
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
		f3(672, 380);
		s9(104, 485); 
		s9(134, 485); 
		s9(82, object_type_3_buffer[671]); 
		printMessage(64, 1376, 0); // There  is  a  loud  explosion  at  the  other end of the repository and a section of the far wall collapses, burying the  dwarves  in  the  rubble. The  settling dust reveals a dark hole leading northeast. When the air is finally clear, a snow-white golden-horned unicorn walks out of  the  hole and,  gracefully  picking  its  way  through  the heaps of rubble, calmly approaches you.
	} 
	
	printMessage(64, 864, 0); // Blasting requires dynamite
} 

int u20() { printMessage(64, 1382, 0); } int KilobyteInputBuffer9() {
	if (object_type_3_buffer[697] == 1 || !(isObjectFlagSet(t11(670), 0)))
	{
		return 0;
	} if (g10(t11(object_type_3_buffer[670]), -1)) {
		if (!(isObjectFlagSet(t11(670), 16))) {
			printMessage(64, 814, 0);
		} if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) {
			z5(700, 670); if (object_type_3_buffer[700] > 1) {
				printMessage(76, 1418, 670);
			}
		} if (currentCommandContains(52)) { printMessage(64, 1417, 0); } if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1))) {
			if (object_type_3_buffer[705] < object_type_3_buffer[721]
				|| isObjectFlagSet(t11(670), 12)) {
				s9(object_type_3_buffer[670], r5); h29();
			}
			else { printMessage(64, 897, 0); }
		} if
			(currentCommandContains(47)) {
			printMessage(64, 1423, 0);
		} c16(670, 2); modifyObjectFlag('s', t11(670), 12); if (currentCommandContains(43))
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
	} if (!(isObjectFlagSet(t11(670), 16))) { printMessage(64, 915, 0); } z5(700, 670);
	if (object_type_3_buffer[700] < 2 || !isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { printMessage(64, 1419, 0); } if (!(object_type_3_buffer[705] < object_type_3_buffer[721]))
	{
		printMessage(64, 897, 0);
	} if (!(currentCommandContains(64))) { modifyObjectFlag('c', t11(670), 12); } if (currentCommandContains(43)) {
		l12(1, 699, 43); if (object_type_3_buffer[699] > 1) {
			l12(0, 43, 1); if (object_type_3_buffer[699] < 9) {
				if (!(object_type_3_buffer[699] == 3
					|| object_type_3_buffer[PLAYER_LOCATION] == 252 || object_type_3_buffer[PLAYER_LOCATION] == 253 || object_type_3_buffer[PLAYER_LOCATION] == 251)) {
					printMessage(64, 1607, 0);
				}
			}
			else
			{
				if (object_type_3_buffer[699] < 12) { printMessage(64, 1608, 0); } if (object_type_3_buffer[699] < 17) { printMessage(64, 1609, 0); }
				if (object_type_3_buffer[699] < 19) { printMessage(64, 1610, 0); } printMessage(64, 1611, 0);
			}
		}
	} c16(670, 1); printMessage(12, 1489, 669);
	printMessage(76, 1490, 670);
} int l30() { printMessage(64, 1427, 0); } int u18() {
	if (object_type_3_buffer[697] == 1)
	{
		if (g10(16, -1)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 165) { processMoveCommand(166, -1); }
			else {
				processMoveCommand(165, -1);
			} modifyObjectFlag('c', t11(697), 0); modifyObjectFlag('c', 16, 14); printMessage(64, 1081, 0);
		} if (g10(10, -1)) {
			printMessage(64, 1430, 0);
		} printMessage(64, 1429, 0);
	} printMessage(64, 915, 0);
} int o19() {
	if (object_type_3_buffer[697] == 2)
	{
		if (!(currentCommandContains(70) || currentCommandContains(108) || currentCommandContains(134) || currentCommandContains(88))) { printMessage(64, 915, 0); }
	} if (g10(88, -1))
	{
		if (object_type_3_buffer[697] == 1 || currentCommandContains(88)) { printMessage(64, 1054, 0); }
	} if (g10(70, -1) || g10(108, -1)
		|| g10(134, -1)) {
		printMessage(64, 1433, 0);
	} printMessage(76, 1434, 669);
} int u19() {
	if (cheezy_rand(100) < 30)
	{
		printMessage(64, 1506, 0);
	} if (cheezy_rand(100) < 50) { printMessage(64, 1507, 0); } printMessage(64, 1508, 0);
} int
g31() { f3(700, 1471); f3(701, 1473); c28(); longjmp(done_with_command, 1); } int q32() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 136 || object_type_3_buffer[PLAYER_LOCATION] == 142 || object_type_3_buffer[PLAYER_LOCATION] == 143 || object_type_3_buffer[PLAYER_LOCATION] == 200 || object_type_3_buffer[PLAYER_LOCATION] == 425
		|| object_type_3_buffer[PLAYER_LOCATION] == 427 || object_type_3_buffer[PLAYER_LOCATION] == 428) {
		printMessage(64, 1476, 0);
	} printMessage(64, 915, 0);
} int j30()
{
	if (object_type_3_buffer[PLAYER_LOCATION] == 252 || object_type_3_buffer[PLAYER_LOCATION] == 253 || object_type_3_buffer[PLAYER_LOCATION] == 251) { printMessage(64, 1480, 0); } if (isItemAtLocation(43, -1)
		&& object_type_3_buffer[43] > 2) {
		if (!(isObjectFlagSet(43, 13))) { object_type_3_buffer[43] += 1; } if (object_type_3_buffer[43] < 9) {
			printMessage(64, 1612, 0);
		} printMessage(64, 1613, 0);
	} if (g10(134, -1) || g10(121, -1) || object_type_3_buffer[17] > 0) {
		printMessage(64, 1481, 0);
	} if (q8(101, -1)) { printMessage(76, 1478, 101); } if (g10(116, -1)) {
		printMessage(76, 1478, 116);
	} if (isObjectFlagSet(t11(671), 7) && object_type_3_buffer[PLAYER_LOCATION] != LOCATION_BUILDING) { printMessage(64, 1482, 0); } if (object_type_3_buffer[PLAYER_LOCATION] == 432
		|| object_type_3_buffer[PLAYER_LOCATION] == 250 || object_type_3_buffer[PLAYER_LOCATION] == 249 || object_type_3_buffer[PLAYER_LOCATION] == 296 || object_type_3_buffer[PLAYER_LOCATION] == 463 || object_type_3_buffer[PLAYER_LOCATION] == 324)
	{
		printMessage(64, 1479, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 230 || object_type_3_buffer[PLAYER_LOCATION] == 239) { printMessage(64, 1638, 0); } if
		(isObjectFlagSet(19, 13) && !(isObjectFlagSet(t11(671), 7)) && !(isObjectFlagSet(t11(671), 3))) {
		printMessage(64, 930, 0);
	}
	printMessage(64, 1477, 0);
} int KilobyteInputBuffer6() { printMessage(64, 1519, 0); } int a24() {
	if (object_type_3_buffer[697] > 1)
	{
		if (isObjectFlagSet(t11(670), 3)) {
			if (!(g10(t11(object_type_3_buffer[670]), -1))) { printMessage(76, 818, 670); }
			if (isObjectFlagSet(t11(671), 9)) {
				if ((object_type_3_buffer[PLAYER_LOCATION] == 428 || object_type_3_buffer[PLAYER_LOCATION] == 427) && isObjectFlagSet(91, 14)) {
					printMessage(64, 1658, 0);
				} if (currentCommandContains(123) && object_type_3_buffer[123] == 2) { printMessage(64, 1657, 0); } printMessage(64, 1656, 0);
			} printMessage(64, 1653, 0);
		} printMessage(64, 915, 0);
	} if ((object_type_3_buffer[PLAYER_LOCATION] == 427 || object_type_3_buffer[PLAYER_LOCATION] == 428) && isObjectFlagSet(91, 14)) {
		if (isObjectFlagSet(91, 12))
		{
			printMessage(0, 1663, 0);
		}
		else { printMessage(0, 1649, 0); modifyObjectFlag('s', 91, 12); } modifyObjectFlag('c', 91, 14); modifyObjectFlag('c', 428, 8);
		modifyObjectFlag('c', 427, 8); longjmp(done_with_command, 1);
	} if ((419 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 426)) {
		printMessage(64, 1650, 0);
	} if (isObjectFlagSet(t11(671), 9)) { printMessage(64, 1651, 0); } if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3)) {
		printMessage(64, 1652, 0);
	} printMessage(64, 1653, 0);
} int s26() {
	printMessage(0, 777, 0); 
	printBlankLine(); // blank line
	object_type_3_buffer[699] = cheezy_rand(1674 - 1666 + 1) + 1666;
	printMessage(2, 699, 0); printMessage(64, 1675, 0);
} int v36() {
	if ((437 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 461))
	{
		printMessage(64, 938, 0);
	} if (isObjectFlagSet(t11(671), 7)) { printMessage(76, 1677, 669); } printMessage(76, 1678, 669);
} int j34() {
	if (isObjectFlagSet(t11(671), 7)) { printMessage(64, 1683, 0); } if (isObjectFlagSet(t11(735), 5))
	{
		printMessage(64, 1686, 0);
	} if (y10(1684)) { modifyObjectFlag('s', t11(735), 5); printMessage(64, 1685, 0); }
	printMessage(64, 1687, 0);
} int u22() {
	if (!currentCommandContains(60)) return; if (g10(60, -1)) {
		if (object_type_3_buffer[60] == 1)
		{
			printMessage(72, 1688, 1);
		} l12(0, 60, 1); printMessage(72, 1689, 1);
	}
} int l31() {
	if (!currentCommandContains(60))
		return; if (g10(60, -1)) {
		if (object_type_3_buffer[60] == 0) { printMessage(72, 1688, 0); } if (isItemAtLocation(60, -1))
		{
			if (isObjectFlagSet(t11(735), 7)) { printMessage(64, 1691, 0); } modifyObjectFlag('s', t11(735), 7); printMessage(64, 1690, 0);
		} l12(0, 60, 0); printMessage(72, 1689, 0);
	}
} int n23() {
	if ((300 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 311))
	{
		printMessage(64, 1712, 0);
	} if (object_type_3_buffer[193] == 0) {
		if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193))
		{
			printMessage(9, 1706, 20); if (y10(1707)) {
				object_type_3_buffer[707] += 20; *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167;
				while (++object_type_3_buffer[676] <= 193) { c16(676, 1); } printMessage(64, 1708, 0);
			} printMessage(64, 1711, 0);
		}
		if (isObjectFlagSet(t11(671), 10)) { printMessage(64, 1713, 0); } printMessage(64, 1709, 0);
	} if ((168 <= object_type_3_buffer[671]
		&& object_type_3_buffer[671] <= 193) && !(isObjectFlagSet(192, 4)) && !(isObjectFlagSet(t11(735), 8))) {
		if (isObjectFlagSet(193, 4))
		{
			printMessage(64, 1714, 0);
		}
		else { printMessage(64, 1715, 0); }
	} if (isObjectFlagSet(t11(671), 10)) {
		printMessage(64, 1713, 0);
	} printMessage(64, 1710, 0);
} int j47() {
	printBlankLine(); // blank line
	modifyObjectFlag('s', 98, 3); 
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
	modifyObjectFlag('s', 115, 3);
	modifyObjectFlag('s', 38, 3); 
	modifyObjectFlag('s', 39, 3); 
	modifyObjectFlag('s', 44, 3);
	modifyObjectFlag('s', 45, 3);
	modifyObjectFlag('s', 46, 3); modifyObjectFlag('s', 47, 3); modifyObjectFlag('s', 48, 3); modifyObjectFlag('s', 49, 3); modifyObjectFlag('s', 50, 3);
	modifyObjectFlag('s', 51, 3); modifyObjectFlag('s', 53, 3); modifyObjectFlag('s', 54, 3); modifyObjectFlag('s', 55, 3); modifyObjectFlag('s', 58, 3); modifyObjectFlag('s', 59, 3);
	modifyObjectFlag('s', 60, 3); modifyObjectFlag('s', 61, 3); modifyObjectFlag('s', 63, 3); modifyObjectFlag('s', 64, 3); modifyObjectFlag('s', 65, 3); modifyObjectFlag('s', 42, 3);
	modifyObjectFlag('s', 52, 3); modifyObjectFlag('s', 117, 3); modifyObjectFlag('s', 118, 3); modifyObjectFlag('s', 119, 3); modifyObjectFlag('s', 66, 3);
	modifyObjectFlag('s', 67, 3); modifyObjectFlag('s', 68, 3); modifyObjectFlag('s', 116, 3); modifyObjectFlag('s', 43, 3); modifyObjectFlag('s', 56, 3); modifyObjectFlag('s', 57, 3);
	modifyObjectFlag('s', 114, 3); modifyObjectFlag('s', 103, 3); modifyObjectFlag('s', 62, 3); modifyObjectFlag('s', 78, 3); modifyObjectFlag('s', 92, 3);
	modifyObjectFlag('s', 89, 3); modifyObjectFlag('s', 80, 3); modifyObjectFlag('s', 85, 3); modifyObjectFlag('s', 81, 3); modifyObjectFlag('s', 88, 3); modifyObjectFlag('s', 90, 3);
	modifyObjectFlag('s', 83, 3); modifyObjectFlag('s', 84, 3); modifyObjectFlag('s', 95, 3); modifyObjectFlag('s', 97, 3); modifyObjectFlag('s', 123, 3); modifyObjectFlag('s', 101, 12);
	modifyObjectFlag('s', 38, 12); modifyObjectFlag('s', 97, 12); modifyObjectFlag('s', 64, 12); modifyObjectFlag('s', 59, 12); modifyObjectFlag('s', 136, 3);
	modifyObjectFlag('s', 137, 3); modifyObjectFlag('s', 437, 3); modifyObjectFlag('s', 438, 3); modifyObjectFlag('s', 439, 3); modifyObjectFlag('s', 440, 3);
	modifyObjectFlag('s', 441, 3); modifyObjectFlag('s', 442, 3); modifyObjectFlag('s', 443, 3); modifyObjectFlag('s', 444, 3); modifyObjectFlag('s', 445, 3);
	modifyObjectFlag('s', 446, 3); modifyObjectFlag('s', 447, 3); modifyObjectFlag('s', 448, 3); modifyObjectFlag('s', 449, 3); modifyObjectFlag('s', 450, 3);
	modifyObjectFlag('s', 451, 3); modifyObjectFlag('s', 452, 3); modifyObjectFlag('s', 453, 3); modifyObjectFlag('s', 454, 3); modifyObjectFlag('s', 455, 3);
	modifyObjectFlag('s', 456, 3); modifyObjectFlag('s', 461, 3); modifyObjectFlag('s', 460, 3); modifyObjectFlag('s', 459, 3); modifyObjectFlag('s', 458, 3);
	modifyObjectFlag('s', 138, 3); modifyObjectFlag('s', 139, 3); modifyObjectFlag('s', 140, 3); modifyObjectFlag('s', 457, 3); modifyObjectFlag('s', 141, 3);
	modifyObjectFlag('s', 142, 3); modifyObjectFlag('s', 143, 3); modifyObjectFlag('s', 144, 3); modifyObjectFlag('s', 436, 3); modifyObjectFlag('s', 145, 3);
	modifyObjectFlag('s', 146, 3); modifyObjectFlag('s', 228, 3); modifyObjectFlag('s', 252, 3); modifyObjectFlag('s', 324, 3); modifyObjectFlag('s', 376, 3);
	modifyObjectFlag('s', 377, 3); modifyObjectFlag('s', 256, 3); modifyObjectFlag('s', 257, 3); modifyObjectFlag('s', 463, 3); modifyObjectFlag('s', 253, 3);
	modifyObjectFlag('s', 254, 3); modifyObjectFlag('s', 290, 3); modifyObjectFlag('s', 291, 3); modifyObjectFlag('s', 295, 3); modifyObjectFlag('s', 382, 3);
	modifyObjectFlag('s', 243, 3); modifyObjectFlag('s', 242, 3); modifyObjectFlag('s', 419, 3); modifyObjectFlag('s', 399, 3); modifyObjectFlag('s', 400, 3);
	modifyObjectFlag('s', 401, 3); modifyObjectFlag('s', 402, 3); modifyObjectFlag('s', 403, 3); modifyObjectFlag('s', 404, 3); modifyObjectFlag('s', 383, 3);
	modifyObjectFlag('s', 483, 3); modifyObjectFlag('s', 378, 3); modifyObjectFlag('s', 380, 3); modifyObjectFlag('s', 379, 3); modifyObjectFlag('s', 145, 5);
	modifyObjectFlag('s', 146, 5); modifyObjectFlag('s', 227, 5); modifyObjectFlag('s', 244, 5); modifyObjectFlag('s', 245, 5); modifyObjectFlag('s', 249, 5);
	modifyObjectFlag('s', 228, 5); modifyObjectFlag('s', 229, 5); modifyObjectFlag('s', 250, 5); modifyObjectFlag('s', 251, 5); modifyObjectFlag('s', 252, 5);
	modifyObjectFlag('s', 296, 5); modifyObjectFlag('s', 297, 5); modifyObjectFlag('s', 298, 5); modifyObjectFlag('s', 299, 5); modifyObjectFlag('s', 192, 5);
	modifyObjectFlag('s', 158, 5); modifyObjectFlag('s', 159, 5); modifyObjectFlag('s', 200, 5); modifyObjectFlag('s', 377, 5); modifyObjectFlag('s', 376, 5);
	modifyObjectFlag('s', 253, 5); modifyObjectFlag('s', 254, 5); modifyObjectFlag('s', 255, 5); modifyObjectFlag('s', 256, 5); modifyObjectFlag('s', 257, 5);
	modifyObjectFlag('s', 463, 5); modifyObjectFlag('s', 258, 5); modifyObjectFlag('s', 259, 5); modifyObjectFlag('s', 260, 5); modifyObjectFlag('s', 261, 5);
	modifyObjectFlag('s', 262, 5); modifyObjectFlag('s', 263, 5); modifyObjectFlag('s', 264, 5); modifyObjectFlag('s', 265, 5); modifyObjectFlag('s', 315, 5);
	modifyObjectFlag('s', 266, 5); modifyObjectFlag('s', 267, 5); modifyObjectFlag('s', 268, 5); modifyObjectFlag('s', 269, 5); modifyObjectFlag('s', 270, 5);
	
	*getObjectPointer(676) = -1; 
	object_type_3_buffer[676] = 270; 
	while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', t11(676), 5);
	} 
	
	modifyObjectFlag('s', 290, 5); modifyObjectFlag('s', 291, 5); modifyObjectFlag('s', 292, 5); modifyObjectFlag('s', 293, 5); modifyObjectFlag('s', 294, 5);
	modifyObjectFlag('s', 295, 5); modifyObjectFlag('s', 240, 5); modifyObjectFlag('s', 241, 5); modifyObjectFlag('s', 242, 5); modifyObjectFlag('s', 462, 5);
	modifyObjectFlag('s', 323, 5); modifyObjectFlag('s', 393, 5); modifyObjectFlag('s', 388, 5); modifyObjectFlag('s', 433, 5); modifyObjectFlag('s', 383, 5);
	modifyObjectFlag('s', 384, 5); modifyObjectFlag('s', 405, 5); modifyObjectFlag('s', 406, 5); modifyObjectFlag('s', 432, 5); modifyObjectFlag('s', 420, 5);
	modifyObjectFlag('s', 421, 5); modifyObjectFlag('s', 428, 5); modifyObjectFlag('s', 419, 5); modifyObjectFlag('s', 422, 5); modifyObjectFlag('s', 423, 5);
	modifyObjectFlag('s', 424, 5); modifyObjectFlag('s', 425, 5); modifyObjectFlag('s', 426, 5); modifyObjectFlag('s', 418, 5); modifyObjectFlag('s', 417, 5);
	modifyObjectFlag('s', 416, 5); modifyObjectFlag('s', 415, 5); modifyObjectFlag('s', 205, 5); modifyObjectFlag('s', 434, 5); modifyObjectFlag('s', 484, 5);
	modifyObjectFlag('s', 485, 5); modifyObjectFlag('s', 147, 5); modifyObjectFlag('s', 148, 5); modifyObjectFlag('s', 149, 5); modifyObjectFlag('s', 150, 5);
	modifyObjectFlag('s', 411, 5); modifyObjectFlag('s', 204, 5); modifyObjectFlag('s', 382, 5); modifyObjectFlag('s', 435, 5); modifyObjectFlag('s', 136, 7);
	modifyObjectFlag('s', 137, 7); modifyObjectFlag('s', 437, 7); modifyObjectFlag('s', 438, 7); modifyObjectFlag('s', 439, 7); modifyObjectFlag('s', 440, 7);
	modifyObjectFlag('s', 441, 7); modifyObjectFlag('s', 442, 7); modifyObjectFlag('s', 443, 7); modifyObjectFlag('s', 444, 7); modifyObjectFlag('s', 445, 7);
	modifyObjectFlag('s', 446, 7); modifyObjectFlag('s', 447, 7); modifyObjectFlag('s', 448, 7); modifyObjectFlag('s', 449, 7); modifyObjectFlag('s', 450, 7);
	modifyObjectFlag('s', 451, 7); modifyObjectFlag('s', 452, 7); modifyObjectFlag('s', 453, 7); modifyObjectFlag('s', 454, 7); modifyObjectFlag('s', 455, 7);
	modifyObjectFlag('s', 456, 7); modifyObjectFlag('s', 141, 7); modifyObjectFlag('s', 461, 7); modifyObjectFlag('s', 458, 7); modifyObjectFlag('s', 459, 7);
	modifyObjectFlag('s', 460, 7); modifyObjectFlag('s', 457, 7); modifyObjectFlag('s', 138, 7); modifyObjectFlag('s', 139, 7); modifyObjectFlag('s', 140, 7);
	modifyObjectFlag('s', 142, 7); modifyObjectFlag('s', 143, 7); modifyObjectFlag('s', 144, 7); modifyObjectFlag('s', 436, 7); modifyObjectFlag('s', 169, 6);
	modifyObjectFlag('s', 170, 6); modifyObjectFlag('s', 171, 6); modifyObjectFlag('s', 182, 6); modifyObjectFlag('s', 185, 6); modifyObjectFlag('s', 189, 6);
	modifyObjectFlag('s', 172, 6); modifyObjectFlag('s', 173, 6); modifyObjectFlag('s', 174, 6); modifyObjectFlag('s', 175, 6); modifyObjectFlag('s', 176, 6);
	modifyObjectFlag('s', 183, 6); modifyObjectFlag('s', 177, 6); modifyObjectFlag('s', 190, 6); modifyObjectFlag('s', 193, 6); modifyObjectFlag('s', 186, 6);
	modifyObjectFlag('s', 178, 6); modifyObjectFlag('s', 184, 6); modifyObjectFlag('s', 191, 6); modifyObjectFlag('s', 179, 6); modifyObjectFlag('s', 180, 6);
	modifyObjectFlag('s', 187, 6); modifyObjectFlag('s', 188, 6); modifyObjectFlag('s', 181, 6); modifyObjectFlag('s', 301, 6); modifyObjectFlag('s', 192, 6);
	modifyObjectFlag('s', 302, 6); modifyObjectFlag('s', 303, 6); modifyObjectFlag('s', 304, 6); modifyObjectFlag('s', 305, 6); modifyObjectFlag('s', 306, 6);
	modifyObjectFlag('s', 307, 6); modifyObjectFlag('s', 308, 6); modifyObjectFlag('s', 309, 6); modifyObjectFlag('s', 310, 6); modifyObjectFlag('s', 311, 6);
	modifyObjectFlag('s', 232, 6); modifyObjectFlag('s', 370, 6); modifyObjectFlag('s', 371, 6); modifyObjectFlag('s', 240, 6); modifyObjectFlag('s', 221, 6);
	modifyObjectFlag('s', 238, 6); modifyObjectFlag('s', 244, 6); modifyObjectFlag('s', 245, 6); modifyObjectFlag('s', 236, 6); modifyObjectFlag('s', 227, 6);
	modifyObjectFlag('s', 228, 6); modifyObjectFlag('s', 229, 6); modifyObjectFlag('s', 216, 6); modifyObjectFlag('s', 329, 6); modifyObjectFlag('s', 331, 6);
	modifyObjectFlag('s', 333, 6); modifyObjectFlag('s', 335, 6); modifyObjectFlag('s', 336, 6); modifyObjectFlag('s', 337, 6); modifyObjectFlag('s', 338, 6);
	modifyObjectFlag('s', 339, 6); modifyObjectFlag('s', 340, 6); modifyObjectFlag('s', 341, 6); modifyObjectFlag('s', 342, 6); modifyObjectFlag('s', 343, 6);
	modifyObjectFlag('s', 345, 6); modifyObjectFlag('s', 346, 6); modifyObjectFlag('s', 347, 6); modifyObjectFlag('s', 349, 6); modifyObjectFlag('s', 350, 6);
	modifyObjectFlag('s', 351, 6); modifyObjectFlag('s', 352, 6); modifyObjectFlag('s', 353, 6); modifyObjectFlag('s', 354, 6); modifyObjectFlag('s', 328, 6);
	modifyObjectFlag('s', 327, 6); 
	
	*getObjectPointer(676) = -1; 
	object_type_3_buffer[676] = 270;
	while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', t11(676), 6);
	} 
	
	modifyObjectFlag('s', 253, 6); modifyObjectFlag('s', 255, 6); modifyObjectFlag('s', 256, 6); modifyObjectFlag('s', 263, 6); modifyObjectFlag('s', 243, 6);
	modifyObjectFlag('s', 382, 6); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) {
		modifyObjectFlag('s', t11(676), 6);
	} modifyObjectFlag('s', 428, 6); modifyObjectFlag('s', 393, 6); modifyObjectFlag('s', 432, 6); modifyObjectFlag('s', 164, 6); modifyObjectFlag('s', 270, 6);
	modifyObjectFlag('s', 461, 6); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193) {
		modifyObjectFlag('s', t11(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) {
		modifyObjectFlag('s', t11(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) {
		modifyObjectFlag('s', t11(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364) {
		modifyObjectFlag('s', t11(676), 10);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
		modifyObjectFlag('s', t11(676), 10);
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
	modifyObjectFlag('s', 5, 10); modifyObjectFlag('s', 73, 10); modifyObjectFlag('s', 8, 10); modifyObjectFlag('s', 10, 10); modifyObjectFlag('s', 16, 10);
	modifyObjectFlag('s', 13, 10); modifyObjectFlag('s', 18, 10); modifyObjectFlag('s', 19, 10); modifyObjectFlag('s', 31, 10); modifyObjectFlag('s', 30, 10);
	modifyObjectFlag('s', 32, 10); modifyObjectFlag('s', 36, 10); modifyObjectFlag('s', 40, 10); modifyObjectFlag('s', 134, 10); modifyObjectFlag('s', 109, 10);
	modifyObjectFlag('s', 14, 10); modifyObjectFlag('s', 12, 10); modifyObjectFlag('s', 135, 10); modifyObjectFlag('s', 75, 10); modifyObjectFlag('s', 70, 10);
	modifyObjectFlag('s', 85, 10); modifyObjectFlag('s', 91, 10); modifyObjectFlag('s', 122, 10); modifyObjectFlag('s', 17, 10); modifyObjectFlag('s', 9, 10);
	modifyObjectFlag('s', 93, 10); modifyObjectFlag('s', 8, 10); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193)
	{
		modifyObjectFlag('s', t11(676), 8);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311)
	{
		modifyObjectFlag('s', t11(676), 8);
	} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364)
	{
		modifyObjectFlag('s', t11(676), 8);
	} modifyObjectFlag('s', 149, 8); modifyObjectFlag('s', 144, 8); modifyObjectFlag('s', 155, 8); modifyObjectFlag('s', 165, 8);
	modifyObjectFlag('s', 166, 8); modifyObjectFlag('s', 236, 8); modifyObjectFlag('s', 228, 8); modifyObjectFlag('s', 227, 8); modifyObjectFlag('s', 229, 8);
	modifyObjectFlag('s', 328, 8); modifyObjectFlag('s', 256, 8); modifyObjectFlag('s', 239, 8); modifyObjectFlag('s', 434, 8); modifyObjectFlag('s', 252, 8);
	modifyObjectFlag('s', 254, 8); modifyObjectFlag('s', 323, 8); modifyObjectFlag('s', 259, 8); modifyObjectFlag('s', 314, 8); modifyObjectFlag('s', 315, 8);
	modifyObjectFlag('s', 264, 8); modifyObjectFlag('s', 427, 8); modifyObjectFlag('s', 428, 8); modifyObjectFlag('s', 141, 9); modifyObjectFlag('s', 136, 9);
	modifyObjectFlag('s', 142, 9); modifyObjectFlag('s', 143, 9); modifyObjectFlag('s', 200, 9); modifyObjectFlag('s', 224, 9); modifyObjectFlag('s', 239, 9);
	modifyObjectFlag('s', 240, 9); modifyObjectFlag('s', 412, 9); modifyObjectFlag('s', 427, 9); modifyObjectFlag('s', 428, 9); modifyObjectFlag('s', 98, 11);
	modifyObjectFlag('s', 48, 11); modifyObjectFlag('s', 108, 11); modifyObjectFlag('s', 39, 11); modifyObjectFlag('s', 45, 11); modifyObjectFlag('s', 61, 11);
	modifyObjectFlag('s', 62, 11); modifyObjectFlag('s', 88, 11); modifyObjectFlag('s', 123, 11); modifyObjectFlag('s', 117, 11); modifyObjectFlag('s', 140, 12);
	modifyObjectFlag('s', 150, 12); modifyObjectFlag('s', 152, 12); modifyObjectFlag('s', 153, 12); modifyObjectFlag('s', 156, 12); modifyObjectFlag('s', 157, 12);
	modifyObjectFlag('s', 160, 12); modifyObjectFlag('s', 165, 12); modifyObjectFlag('s', 166, 12); modifyObjectFlag('s', 199, 12); modifyObjectFlag('s', 201, 12);
	modifyObjectFlag('s', 193, 12); modifyObjectFlag('s', 210, 12); modifyObjectFlag('s', 211, 12); modifyObjectFlag('s', 215, 12); modifyObjectFlag('s', 221, 12);
	modifyObjectFlag('s', 224, 12); modifyObjectFlag('s', 230, 12); modifyObjectFlag('s', 239, 12); modifyObjectFlag('s', 240, 12); modifyObjectFlag('s', 238, 12);
	modifyObjectFlag('s', 242, 12); modifyObjectFlag('s', 244, 12); modifyObjectFlag('s', 245, 12); modifyObjectFlag('s', 252, 12); modifyObjectFlag('s', 253, 12);
	modifyObjectFlag('s', 261, 12); modifyObjectFlag('s', 463, 12); modifyObjectFlag('s', 262, 12); modifyObjectFlag('s', 265, 12); modifyObjectFlag('s', 266, 12);
	modifyObjectFlag('s', 267, 12); modifyObjectFlag('s', 325, 12); modifyObjectFlag('s', 326, 12); modifyObjectFlag('s', 327, 12); modifyObjectFlag('s', 365, 12);
	modifyObjectFlag('s', 204, 12); modifyObjectFlag('s', 376, 12); modifyObjectFlag('s', 382, 12); modifyObjectFlag('s', 395, 12); modifyObjectFlag('s', 394, 12);
	modifyObjectFlag('s', 408, 12); modifyObjectFlag('s', 399, 12); modifyObjectFlag('s', 400, 12); modifyObjectFlag('s', 401, 12); modifyObjectFlag('s', 402, 12);
	modifyObjectFlag('s', 403, 12); modifyObjectFlag('s', 404, 12); modifyObjectFlag('s', 151, 12); modifyObjectFlag('s', 44, 5); modifyObjectFlag('s', 45, 5);
	modifyObjectFlag('s', 46, 5); modifyObjectFlag('s', 47, 5); modifyObjectFlag('s', 48, 5); modifyObjectFlag('s', 49, 5); modifyObjectFlag('s', 50, 5); modifyObjectFlag('s', 51, 5);
	modifyObjectFlag('s', 53, 5); modifyObjectFlag('s', 55, 5); modifyObjectFlag('s', 58, 5); modifyObjectFlag('s', 59, 5); modifyObjectFlag('s', 60, 5); modifyObjectFlag('s', 61, 5);
	modifyObjectFlag('s', 63, 5); modifyObjectFlag('s', 68, 5); modifyObjectFlag('s', 66, 5); modifyObjectFlag('s', 67, 5); modifyObjectFlag('s', 64, 5); modifyObjectFlag('s', 65, 5);
	modifyObjectFlag('s', 42, 5); modifyObjectFlag('s', 52, 5); modifyObjectFlag('s', 43, 5); modifyObjectFlag('s', 56, 5); modifyObjectFlag('s', 57, 5); modifyObjectFlag('s', 62, 5);
	modifyObjectFlag('s', 78, 5); modifyObjectFlag('s', 92, 5); modifyObjectFlag('s', 83, 5); modifyObjectFlag('s', 81, 5); modifyObjectFlag('s', 95, 5); modifyObjectFlag('s', 49, 7);
	modifyObjectFlag('s', 66, 7); modifyObjectFlag('s', 100, 7); modifyObjectFlag('s', 68, 7); modifyObjectFlag('s', 117, 7); modifyObjectFlag('s', 119, 7);
	modifyObjectFlag('s', 42, 7); modifyObjectFlag('s', 43, 7); modifyObjectFlag('s', 57, 7); modifyObjectFlag('s', 103, 7); modifyObjectFlag('s', 62, 7); modifyObjectFlag('s', 92, 7);
	modifyObjectFlag('s', 111, 7); modifyObjectFlag('s', 95, 7); modifyObjectFlag('s', 39, 7); modifyObjectFlag('s', 123, 7); modifyObjectFlag('s', 97, 7);
	modifyObjectFlag('s', 22, 8); modifyObjectFlag('s', 134, 8); modifyObjectFlag('s', 20, 8); modifyObjectFlag('s', 7, 8); modifyObjectFlag('s', 17, 8); modifyObjectFlag('s', 38, 8);
	modifyObjectFlag('s', 106, 8); modifyObjectFlag('s', 107, 8); modifyObjectFlag('s', 24, 8); modifyObjectFlag('s', 101, 8); modifyObjectFlag('s', 27, 8);
	modifyObjectFlag('s', 28, 8); modifyObjectFlag('s', 121, 8); modifyObjectFlag('s', 25, 8); modifyObjectFlag('s', 135, 8); modifyObjectFlag('s', 82, 8);
	modifyObjectFlag('s', 87, 8); modifyObjectFlag('s', 91, 8); modifyObjectFlag('s', 43, 16); modifyObjectFlag('s', 62, 16); modifyObjectFlag('s', 67, 16);
	modifyObjectFlag('s', 64, 16); modifyObjectFlag('s', 47, 16); modifyObjectFlag('s', 52, 16); modifyObjectFlag('s', 38, 15); modifyObjectFlag('s', 63, 15);
	modifyObjectFlag('s', 85, 15); modifyObjectFlag('s', 84, 15); modifyObjectFlag('s', 88, 15); modifyObjectFlag('s', 101, 15); modifyObjectFlag('s', 106, 15);
	modifyObjectFlag('s', 107, 15); modifyObjectFlag('s', 100, 15); modifyObjectFlag('s', 105, 15); modifyObjectFlag('s', 49, 15); modifyObjectFlag('s', 50, 15);
	modifyObjectFlag('s', 51, 15); modifyObjectFlag('s', 53, 15); modifyObjectFlag('s', 60, 15); modifyObjectFlag('s', 52, 15); modifyObjectFlag('s', 68, 15);
	modifyObjectFlag('s', 116, 15); modifyObjectFlag('s', 43, 15); modifyObjectFlag('s', 56, 15); modifyObjectFlag('s', 57, 15); modifyObjectFlag('s', 103, 15);
	modifyObjectFlag('s', 78, 15); modifyObjectFlag('s', 81, 15); modifyObjectFlag('s', 80, 15); modifyObjectFlag('s', 461, 4); modifyObjectFlag('s', 243, 4);
	modifyObjectFlag('s', 420, 13); modifyObjectFlag('s', 421, 13); modifyObjectFlag('s', 422, 13); modifyObjectFlag('s', 423, 13); modifyObjectFlag('s', 424, 13);
	modifyObjectFlag('s', 425, 13); modifyObjectFlag('s', 426, 13); l12(0, 760, 1); f3(682, 203); object_type_3_buffer[756] = cheezy_rand(300 - 150 + 1) + 150;
	l12(0, 733, 1); object_type_3_buffer[761] = cheezy_rand(30 - 15 + 1) + 15; object_type_3_buffer[759] = cheezy_rand(800 - 650 + 1) + 650; object_type_3_buffer[763]
		= cheezy_rand(160 - 120 + 1) + 120; l12(0, 762, -1); f3(684, 1348); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1;
	while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) { s9(object_type_3_buffer[675], 484); object_type_3_buffer[700] = cheezy_rand(100); } s9(98, 141);
	s9(99, 141); s9(4, 144); s9(100, 146); s9(102, 147); s9(5, 150); s9(101, 149);
	s9(6, 223); s9(105, 225); s9(7, 155); s9(8, 152); s9(106, 232); s9(108, 236);
	s9(110, 484); s9(111, 140); s9(11, 159); s9(12, 156); s9(13, 238); s9(16, 165);
	s9(18, 226); s9(20, 247); s9(21, 244); s9(22, 244); s9(38, 299); s9(30, 252);
	s9(34, 311); s9(40, 225); s9(44, 154); s9(45, 153); s9(46, 160); s9(47, 161);
	s9(48, 162); s9(50, 222); s9(51, 224); s9(53, 226); s9(55, 228); s9(58, 229);
	s9(124, 229); s9(61, 296); s9(63, 299); s9(65, 374); s9(42, 377); s9(41, 377);
	s9(52, 313); s9(118, 321); s9(119, 433); s9(66, 346); s9(68, 369); s9(35, 314);
	s9(32, 370); s9(33, 367); s9(116, 434); s9(24, 323); s9(36, 291); s9(37, 291);
	s9(56, 291); s9(43, 462); s9(31, 254); s9(14, 256); s9(57, 239); s9(67, 295);
	s9(114, 294); s9(25, 263); s9(103, 268); s9(62, 242); s9(26, 240); s9(78, 393);
	s9(79, 394); s9(86, 388); s9(87, 388); s9(92, 411); s9(89, 419); s9(91, 421);
	s9(135, 383); s9(80, 416); s9(85, 205); s9(81, 204); s9(75, 203); s9(76, 419);
	s9(77, 393); s9(70, 312); s9(120, 140); s9(71, 434); s9(90, 435); s9(95, 463);
	s9(72, 393); s9(120, 140); s9(93, 137); s9(123, 318); s9(121, 484); s9(113, 158);
	modifyObjectFlag('s', 4, 6); modifyObjectFlag('s', 5, 6); modifyObjectFlag('s', 8, 6); modifyObjectFlag('s', 12, 6); modifyObjectFlag('s', 16, 6); modifyObjectFlag('s', 20, 6);
	modifyObjectFlag('s', 21, 6); modifyObjectFlag('s', 22, 6); modifyObjectFlag('s', 23, 6); modifyObjectFlag('s', 32, 6); modifyObjectFlag('s', 35, 6); modifyObjectFlag('s', 14, 6);
	modifyObjectFlag('s', 30, 6); modifyObjectFlag('s', 25, 6); modifyObjectFlag('s', 75, 6); modifyObjectFlag('s', 95, 6); modifyObjectFlag('s', 72, 6); l12(0, 114, 1);
	l12(0, 727, 35); l12(0, 728, 25); modifyObjectFlag('s', t11(697), 1); l12(0, 725, 0); f3(719, 777);
	object_type_3_buffer[716] = cheezy_rand(25 - 15 + 1) + 15; object_type_3_buffer[698] = cheezy_rand(460 - 440 + 1) + 440; object_type_3_buffer[715] = cheezy_rand(8 - 4 + 1) + 4;
	if (cheezy_rand(100) < 75) { modifyObjectFlag('s', t11(710), 2); } l12(0, 63, 0); l12(0, 14, 8); l12(0, 705, 0);
	l12(0, 721, 7); l12(0, 730, 0); l12(0, 711, 1999); b10(12, 699); if (object_type_3_buffer[699] > 0)
	{
		f3(700, 1066); object_type_3_buffer[700] += object_type_3_buffer[699]; printMessage(2, 700, 0); if (object_type_3_buffer[699] == 1) {
			b10(5, 700);
		} printBlankLine(); printMessage(0, 1070, 0); if (y10(1071)) {
			printBlankLine(); printMessage(0, 777, 0);
			printBlankLine(); modifyObjectFlag('s', t11(710), 0); l12(0, 711, 30); l12(0, 7, 1); modifyObjectFlag('c', 155, 8);
		}
		else { printMessage(0, 1072, 0); r7(); }
	} printMessage(0, 862, 0); if (y10(778)) {
		printMessage(0, 781, 0);
		if (y10(1556)) { f3(700, 1554); f3(701, 1555); c28(); }
	} l12(0, 711, 1999);
	processMoveCommand(136, -1); printBlankLine();
} 

int s34() {
	object_type_3_buffer[699] = cheezy_rand(100); 
	if (isObjectFlagSet(t11(697), 6) && object_type_3_buffer[PLAYER_LOCATION] == 393) {
		if (currentCommandContains(535) || currentCommandContains(557)) { 
			e24(); 
		}
	} 
	
	if (cheezy_rand(100) < 3 && object_type_3_buffer[717] == 0 && object_type_3_buffer[715] < 10) {
		p34();
	} 
	
	if (object_type_3_buffer[717] == 3) { 
		i42(); 
	} 
	
	if (isObjectFlagSet(t11(697), 0))
	{
		object_type_3_buffer[713] += 1; 
		if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_MT_KING) { 
			l12(1, 681, 672); 
		} 
		
		if ((437 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 461)) {
			s9(122, object_type_3_buffer[671]);
		} 
		
		if (object_type_3_buffer[134] > 0) {
			if (isObjectFlagSet(t11(671), 7) || isObjectFlagSet(t11(671), 5)) {
				if (cheezy_rand(100) < 15) {
					object_type_3_buffer[134] -= 1; 
					if (object_type_3_buffer[134] == 0) {
						s9(134, 484);
					}
				}
			} else {
				if (!(j0[134] == object_type_3_buffer[671] || j0[134] == object_type_3_buffer[672])) {
					l12(0, 134, 0);
					s9(134, 484);
				}
			}
		} 
		
		if (isObjectFlagSet(19, 13) && isObjectFlagSet(t11(671), 7)) { 
			modifyObjectFlag('c', 19, 13); 
		} 
		
		if (isObjectFlagSet(t11(672), 7) && !(isObjectFlagSet(t11(671), 7))) {
			modifyObjectFlag('c', 19, 13);
		}
	} 
	
	if (isObjectFlagSet(t11(710), 1))
	{
		j42();
	} 
	
	if (isObjectFlagSet(t11(697), 0)) {
		if (g10(95, -1) && object_type_3_buffer[95] > 1) {
			if (j0[95] == object_type_3_buffer[671])
			{
				l12(0, 95, 3);
			}
			else { 
				l12(0, 95, 2); 
			}
		}
		
		if (isObjectFlagSet(t11(672), 11) && j0[134] == object_type_3_buffer[672] && !(isObjectFlagSet(t11(710), 5))) {
			if (cheezy_rand(100) < 97) {
				processMoveCommand(object_type_3_buffer[672], -1); 
				modifyObjectFlag('c', t11(697), 0);
				printMessage(0, 782, 0); // A little dwarf with a big knife blocks your way.
				return 0;
			}
			else { 
				w25(); 
			}
		}
	} else {
		if (g10(134, -1) && cheezy_rand(100) < object_type_3_buffer[727])
		{
			t39();
		} 
		return 0;
	} 
	
	if (g10(14, -1)) { 
		b28(); 
	} 
	
	modifyObjectFlag('c', t11(697), 0); 
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
	
	if (!(j0[121] == 484 || j0[121] == 485)) {
		s9(121, object_type_3_buffer[671]); 
		if (object_type_3_buffer[121] > 0) {
			b26(); 
			if (object_type_3_buffer[699] == 0)
			{
				printMessage(0, 1157, 0); // You are being pursued by a horde of little gooseberry goblins!
			}
		}
	} 
	
	if (isObjectFlagSet(t11(671), 4) && isObjectFlagSet(t11(697), 1) || isObjectFlagSet(t11(697), 2))
	{
		l12(0, 700, 0);
	} else {
		modifyObjectFlag('s', t11(697), 3); 
		l12(0, 700, 1); 
		if (object_type_3_buffer[135] == 5)
		{
			l12(0, 135, 4);
		}
	} 
	
	b26(); 

	if (object_type_3_buffer[699] == 0) {
		printMessage(2, 671, 0);  // description of location
		if (object_type_3_buffer[700] > 0)
		{
			if (object_type_3_buffer[PLAYER_LOCATION] == 463) { 
				printMessage(2, 684, 0); 
			} else {
				if (object_type_3_buffer[PLAYER_LOCATION] == 150 && object_type_3_buffer[151] == 0)
				{
					printMessage(0, 1225, 0); // Rough stone steps lead down the pit.
				}
			}
		} 
		
		if (isObjectFlagSet(t11(671), 15)) { 
			printMessage(0, 876, 0);  // The ground here is damp.
		} 
		
		if (isObjectFlagSet(t11(671), 4))
		{
			l12(0, 701, 2);
		} else {
			l12(0, 701, 3); 
			if (object_type_3_buffer[PLAYER_LOCATION] == 434) {
				printMessage(0, 1335, 0); // Funny...  some of that pattern looks almost like an inscription...
			}
		} 
		
		if (!(isObjectFlagSet(t11(671), 7))) { 
			object_type_3_buffer[716] -= object_type_3_buffer[701]; 
		} 
		
		modifyObjectFlag('s', t11(671), 4); 
		if (!(object_type_3_buffer[134] < 1)) {
			if (!(isObjectFlagSet(t11(671), 7) || isObjectFlagSet(t11(671), 5))) {
				s9(134, object_type_3_buffer[671]);
			}
		} 
		
		j39(); 
		
		if (g10(134, -1) && object_type_3_buffer[134] == 1 && object_type_3_buffer[686] != 0 && cheezy_rand(100) < 67) {
			printMessage(0, 1337, 0); // He is clutching his bulging coat and muttering angrily.
		} 
		
		if (isItemAtLocation(38, -1)) { 
			printMessage(0, 939, 0);  // You are being followed by a very large, tame bear.
		} 
		
		if (cheezy_rand(100) < 1 && cheezy_rand(100) < 5 && object_type_3_buffer[717] < 3	&& object_type_3_buffer[712]>150 && !(isObjectFlagSet(t11(671), 3))) {
			j40();
		}
	} else {
		if (!(isObjectFlagSet(t11(672), 3)))
		{
			if (!(j0[99] == object_type_3_buffer[672] && object_type_3_buffer[99] == 1)) {
				if (!(j0[95] == object_type_3_buffer[672] && object_type_3_buffer[95] != 1))
				{
					if ((isItemAtLocation(58, -1) || cheezy_rand(100) < 25) && !(isObjectFlagSet(t11(710), 6)) && object_type_3_buffer[717] < 3) {
						printMessage(0, 812, 0); // You fell into a pit and broke every bone in your body!
						die();
					}
				}
			}
		} 
		
		printMessage(0, 805, 0);
	} 
	
	modifyObjectFlag('c', t11(697), 3); 
	modifyObjectFlag('c', t11(710), 6); 
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_Y2)
	{
		if (cheezy_rand(100) < 35) { 
			printMessage(0, 791, 0); // A hollow voice says "Plugh".
		}
	} 
	
	t35(); 
	
	if (!(isObjectFlagSet(t11(671), 7) || object_type_3_buffer[717] > 2))
	{
		if (object_type_3_buffer[716] < 1) { 
			w26(); 
		} else {
			modifyObjectFlag('c', t11(697), 7); 
			object_type_3_buffer[761] -= 1; 
			if (object_type_3_buffer[761] == 0) {
				object_type_3_buffer[761] = cheezy_rand(20 - 10 + 1) + 10; 
				e26();
			}
		}
	} 
	
	if (g10(134, -1)) {
		l12(0, 728, 50);
		t39();
	} 
	
	if (j0[99] == 485 && object_type_3_buffer[PLAYER_LOCATION] == 136 && object_type_3_buffer[717] < 4) {
		printMessage(0, 997, 0);  // There's  not  much  point  in  wandering  around  out here, and you can't explore the cave without a lamp.  So let's just call it a day.
		l12(0, 718, 1);
		a29();
	}
} 


int s35() {
	if (isObjectFlagSet(t11(671), 8)) {
		object_type_3_buffer[720] += 1; 
		if (object_type_3_buffer[720] > 25)
		{
			p36();
		}
	}
	else 
	{ 
		l12(0, 720, 0); 
	} 
	
	if (g10(91, -1)) {
		object_type_3_buffer[91] += 1; 
		if (object_type_3_buffer[91] < 6)
		{
			if (object_type_3_buffer[91] > 1) {
				f3(699, 1496); 
				object_type_3_buffer[699] += object_type_3_buffer[91]; 
				object_type_3_buffer[699] -= 2; 
				printMessage(2, 699, 0);
			}
		} else {
			printMessage(0, 1500, 0); // You  feel  several bites on your legs.  You try to protect them, but more rats sink their teeth into your arms, then one leaps from the sewage  and hangs   onto   your  ear,  weighing  you  down,  now  they  are  at  your throat.............
			processMoveCommand(419, -1); 
			if (isItemAtLocation(110, -1)) { 
				s9(110, 484); 
			} 
			l12(0, 91, 0);
			die();
		}
	} 
	
	if (isObjectFlagSet(t11(671), 13)) { 
		y22(); 
	} 
	
	object_type_3_buffer[757] -= 1; 
	
	if (g10(135, -1))
	{
		u27();
	} 
	
	if (object_type_3_buffer[135] > 0 && object_type_3_buffer[135] < 4 && object_type_3_buffer[757] < 1) {
		if (object_type_3_buffer[135] == 2) {
			l12(0, 135, 3); 
			modifyObjectFlag('c', 135, 4); 
			object_type_3_buffer[757] = cheezy_rand(7 - 4 + 1) + 4;
		} else {
			if (isObjectFlagSet(135, 4))
			{
				l12(0, 135, 0);
			}
		}
	} 
	
	i41(); 
	
	if (object_type_3_buffer[PLAYER_LOCATION] == 412 && !(isObjectFlagSet(96, 4)) && cheezy_rand(100) < 3)
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
	
	if (isObjectFlagSet(t11(697), 6)) {
		modifyObjectFlag('c', t11(697), 6); 
		l12(0, 705, 0);
		*getObjectPointer(675) = -1; 
		object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; 
		while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
			if (isItemAtLocation(t11(object_type_3_buffer[675]), -1) && !(isObjectFlagSet(t11(675), 12))) {
				object_type_3_buffer[705] += 1;
			}
		}
	} 
	
	h28(); 
	l12(0, 728, 25); 
	l12(0, 727, 35);
	
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
	
	if (isObjectFlagSet(t11(710), 9) && !currentCommandContains(503))
	{
		modifyObjectFlag('c', t11(710), 9);
	} 
	
	if (isObjectFlagSet(t11(710), 0)) { 
		l12(0, 699, 30); 
	} else {
		l12(1, 699, 711);
	} 
	
	if (!(object_type_3_buffer[712] < object_type_3_buffer[699])) { 
		printMessage(0, 1073, 0); 
		a29(); 
	}
	
	modifyObjectFlag('c', 43, 13); 
	
	if (!(object_type_3_buffer[PLAYER_LOCATION] == 252
		|| object_type_3_buffer[PLAYER_LOCATION] == 253 || object_type_3_buffer[PLAYER_LOCATION] == 251 || object_type_3_buffer[43] < 2 || object_type_3_buffer[697] == 0 || isObjectFlagSet(t11(697), 5)))
	{
		if (isItemAtLocation(43, -1)) {
			if (object_type_3_buffer[43] > 2) {
				f3(699, 1618); 
				object_type_3_buffer[699] += object_type_3_buffer[43]; 
				object_type_3_buffer[699]-= 2; 
				printMessage(2, 699, 0);
			} 
			
			if (!(object_type_3_buffer[43] < 9)) { 
				modifyObjectFlag('s', t11(755), 10); 
			} 
			
			modifyObjectFlag('s', t11(697), 7);
			
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
				if (!(object_type_3_buffer[43] < 9)) { printMessage(0, 1618, 0); } l12(0, 43, 1);
			}
		}
	} 
	
	w5(0); 
	
	object_type_3_buffer[714] -= 1; 
	object_type_3_buffer[712] += 1; 
	
	if (currentCommandContains(489)) { 
		(*command_by_location_dispatch_table[489])(); 
		longjmp(done_with_command, 1); 
	} 
	
	b10(13, 699);
	if (object_type_3_buffer[699] > 0) { 
		l12(1, 711, 712); 
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
		if (isObjectFlagSet(t11(670), 0) && isObjectFlagSet(t11(670), 3)) {
			printMessage(64, 1664, 0); // You 'D' means 'DOWN', not 'DROP'...  remember?  Try again.
		}
	} 
	
	if (object_type_3_buffer[697] > 1 && (642 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 658)) {
		t40();
	} 
	
	if (!(currentCommandContains(COMMAND_SAY) && object_type_3_buffer[697] > 1 && !(495 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 512))) {
		(*command_by_location_dispatch_table[object_type_3_buffer[671]])();
	} 
	
	if (object_type_3_buffer[717] == 5) { 
		a28(); 
	} 
	
	if (isObjectFlagSet(t11(669), 1))
	{
		if (object_type_3_buffer[PLAYER_LOCATION] == t11(object_type_3_buffer[669])) { 
			printMessage(0, 938, 0); 
		} else { 
			printMessage(0, 937, 0); 
		}
	}
	else
	{
		if (object_type_3_buffer[717] == 3) {
			if (currentCommandContains(662)) { 
				printMessage(64, 1515, 0); 
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
				s9(73, object_type_3_buffer[671]);
			}
		} 
		
		if (currentCommandContains(662)) { 
			printMessage(64, 1516, 0); 
		} 
		
		if (currentCommandContains(601)) {
			printMessage(64, 799, 0);
		} 
		
		if (currentCommandContains(147)) { 
			r28(); 
			longjmp(done_with_command, 1); 
		} 
		
		if (currentCommandContains(69)) { 
			printMessage(64, 1275, 0); 
		}
		
		if (isObjectFlagSet(t11(671), 13)) { 
			if (currentCommandContains(112) || currentCommandContains(560)) { 
				printMessage(64, 1542, 0); 
			} 
		} 
		(*command_by_location_dispatch_table[object_type_3_buffer[669]])();

		r31(); 
		
		if (isObjectFlagSet(t11(669), 0)) {
			if (currentCommandContains(112) && isObjectFlagSet(t11(671), 9) || g10(t11(object_type_3_buffer[669]), -1))
			{
				printMessage(12, 1023, 669); 
				modifyObjectFlag('s', t11(697), 5);
			} else { 
				printMessage(12, 818, 669); 
			}
		}
		else
		{
			x30();
		}
	} 
	longjmp(done_with_command, 1);
}
