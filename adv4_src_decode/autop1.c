/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int r29() {
	b26(); 
	if (object_type_3_buffer[699] == 0) {
		if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193) && !(isObjectFlagSet(t11(671), 11))) {
			printMessage(64, 843, 0); // You  have  crawled around in some little passages and wound up back where you started from.
		} 
		
		if (currentCommandContains(COMMAND_GO)) {
			l12(1, 674, 670);
		}
		else { 
			l12(1, 674, 669); 
		} 
		
		object_type_3_buffer[677] = cheezy_rand(797 - 792 + 1) + 792; 
		printMessage(78, 677, 674);
	} 
	
	if (cheezy_rand(100) < 25 && object_type_3_buffer[PLAYER_LOCATION] != 393 && object_type_3_buffer[717] < 3) { 
		printMessage(0, 812, 0); // You fell into a pit and broke every bone in your body!
		die(); 
	} 
	
	printMessage(64, 798, 0); // You have run into a wall of rock and can go no further in this direction.
} 

int t37() {
	s9(118, 485); printMessage(0, 1092, 0); object_type_3_buffer[677] = cheezy_rand(1099 - 1093 + 1) + 1093;
	printMessage(2, 677, 0); if (g10(33, -1)) { l12(0, 118, 8); s9(33, 485); }
	else {
		if (g10(134, -1))
		{
			printBlankLine(); if (object_type_3_buffer[134] == 1) { l12(0, 118, 1); }
			else { l12(0, 118, 2); }
			l12(1, 704, 134); printMessage(0, 118, 0); r27(); longjmp(done_with_command, 1);
		} if (g10(22, -1)) {
			l12(0, 118, 3);
		} if (g10(38, -1)) { l12(0, 118, 4); if (object_type_3_buffer[38] > 0) { l12(0, 118, 5); } } if (g10(7, -1))
		{
			l12(0, 118, 6);
		} if (g10(101, -1)) { l12(0, 118, 7); } if (g10(20, -1) && object_type_3_buffer[20] == 0)
		{
			l12(0, 118, 9);
		} if (g10(27, -1)) { l12(0, 118, 10); } if (g10(25, -1) && object_type_3_buffer[25] < 2)
		{
			l12(0, 118, 11);
		} if (g10(121, -1)) { l12(0, 118, 12); s9(121, 484); } if (g10(87, -1))
		{
			l12(0, 118, 13);
		} if (g10(24, -1)) { l12(0, 118, 14); }
	} if (object_type_3_buffer[118] > 0) {
		printMessage(0, 118, 0);
	} longjmp(done_with_command, 1);
} int t38() {
	if (isItemAtLocation(118, -1) && cheezy_rand(100) < 10)
	{
		printMessage(0, 1091, 0); s9(118, 485); die();
	}
} int t39() {
	b26(); if (object_type_3_buffer[699] == 0)
	{
		l12(1, 700, 134); object_type_3_buffer[700] += 2; object_type_3_buffer[700] = cheezy_rand(object_type_3_buffer[700]); object_type_3_buffer[700] -= 1; if
			(object_type_3_buffer[700] < 1) {
			return 0;
		} printMessage(13, 784, 700); l12(1, 701, 721); object_type_3_buffer[701] -= object_type_3_buffer[705];
		object_type_3_buffer[701] *= 5; if (isObjectFlagSet(134, 14)) { object_type_3_buffer[701] -= 20; } object_type_3_buffer[728] += object_type_3_buffer[701]; object_type_3_buffer[728]
			+= 35; object_type_3_buffer[728] /= object_type_3_buffer[700]; if (object_type_3_buffer[64] == 2) {
			object_type_3_buffer[701] = cheezy_rand(5); if (object_type_3_buffer[701] > 0)
			{
				f3(677, 786); object_type_3_buffer[677] += object_type_3_buffer[701]; printMessage(15, 677, 700); return 0;
			}
		} if (cheezy_rand(100) < object_type_3_buffer[728]
			|| isObjectFlagSet(134, 13)) {
			printMessage(13, 785, 700); modifyObjectFlag('c', 134, 13);
		}
		else {
			printMessage(13, 786, 700);
			die();
		}
	}
} int o21() {
	if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) {
		if (currentCommandContains(557)) {
			s9(object_type_3_buffer[670], PLAYER_LOCATION);
		} if (g10(134, -1)) {
			l12(1, 699, 721); object_type_3_buffer[699] -= object_type_3_buffer[705]; object_type_3_buffer[699] *= 5; l12(1, 700, 134);
			object_type_3_buffer[700] += 2; object_type_3_buffer[700] *= 15; object_type_3_buffer[699] += object_type_3_buffer[700]; if (currentCommandContains(115) || currentCommandContains(547))
			{
				if (!(currentCommandContains(115) && currentCommandContains(547))) { object_type_3_buffer[699] += 15; }
			} if (cheezy_rand(100) < object_type_3_buffer[699]) {
				if (cheezy_rand(100) < 5 && !(isObjectFlagSet(t11(710), 8))) {
					printMessage(12, 952, 670); modifyObjectFlag('s', t11(710), 8);
				}
				else { printMessage(0, 951, 0); } l12(0, 704, 1); r27(); if (object_type_3_buffer[134] > 0) {
					l12(0, 728, 0);
					l12(0, 727, 100);
				}
			}
			else { printMessage(0, 834, 0); l12(0, 728, 0); l12(0, 727, 100); }
		}
		else {
			if (g10(7, -1)) {
				if (currentCommandContains(557)) { s9(object_type_3_buffer[670], r5); } printMessage(64, 832, 0);
			} if (g10(20, -1)) { printMessage(76, 955, 670); } if (g10(38, -1)) {
				if (object_type_3_buffer[38] == 0) {
					if (currentCommandContains(557)) {
						if (currentCommandContains(115)) { l12(0, 115, 1); printMessage(64, 974, 0); } printMessage(64, 1102, 0);
					} if (cheezy_rand(100) < 50) { printMessage(64, 1103, 0); } printMessage(0, 1104, 0); die();
				} printMessage(76, 975, 38);
			} if (g10(22, -1)) { printMessage(64, 967, 0); } if (g10(24, -1)) {
				if (currentCommandContains(547)) {
					printMessage(12, 1115, 670);
					die();
				} if (currentCommandContains(115)) { printMessage(12, 1116, 670); die(); } modifyObjectFlag('c', 323, 8); s9(24, 485);
				s9(116, PLAYER_LOCATION); l12(0, 733, 6); modifyObjectFlag('c', 323, 5); printMessage(64, 1117, 0);
			} if (g10(17, -1))
			{
				printMessage(76, 1137, 670);
			} if (g10(25, -1)) {
				if (object_type_3_buffer[25] > 1) {
					if (currentCommandContains(557)) {
						s9(object_type_3_buffer[670], r5);
					} printMessage(64, 976, 0);
				} printMessage(12, 1146, 670); die();
			} if (g10(27, -1)) {
				printMessage(76, 1147, 670);
			} if (g10(121, -1)) { printMessage(12, 1148, 670); die(); } if (g10(135, -1)) {
				printMessage(12, 1314, 670);
				die();
			} if (currentCommandContains(557)) { s9(object_type_3_buffer[670], r5); return 0; } printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		}
	}
	else { printMessage(76, 1027, 670); } longjmp(done_with_command, 1);
} int r30() {
	if (g10(35, -1))
	{
		modifyObjectFlag('c', 314, 8); modifyObjectFlag('c', 315, 8); if (object_type_3_buffer[35] == 0) {
			if (object_type_3_buffer[697] == 2 && object_type_3_buffer[670] == object_type_3_buffer[683]
				|| object_type_3_buffer[669] == object_type_3_buffer[683]) {
				l12(0, 35, 1); modifyObjectFlag('s', 35, 13); if (!(isObjectFlagSet(462, 4))) {
					l12(0, 733, 11);
				} printMessage(64, 1131, 0);
			} if (!(isObjectFlagSet(35, 13))) {
				l12(0, 35, 2); l12(0, 17, 1); modifyObjectFlag('s', t11(710), 1);
				modifyObjectFlag('s', t11(710), 3); l12(0, 4, 0); printMessage(64, 1134, 0);
			}
		}
	} printMessage(64, 828, 0);
} int j42()
{
	if (object_type_3_buffer[17] > 0) {
		object_type_3_buffer[17] += 1; if (object_type_3_buffer[17] > 15) { s9(17, object_type_3_buffer[671]); } f3(677, 1521);
		object_type_3_buffer[677] += object_type_3_buffer[17]; object_type_3_buffer[677] -= 2; printMessage(2, 677, 0); if (object_type_3_buffer[17] == 18) { die(); }
	}
} 

int s30() { if (object_type_3_buffer[697] > 1) { printMessage(12, 1040, 670); } } int z26() {
	processMoveCommand(485, -1);
	if (object_type_3_buffer[99] == 1) {
		l12(0, 698, 0); if (isItemAtLocation(99, -1)) { printMessage(0, 1158, 0); }
		else {
			printMessage(0, 1159, 0); // You have jumped into a bottomless pit.  Eventually, you die of thirst.
		}
	}
	else { 
		printMessage(0, 1159, 0); // You have jumped into a bottomless pit.  Eventually, you die of thirst.
	} 
	die();
} 

int n24() {
	if (currentCommandContains(101) || currentCommandContains(38)) {
		return 0;
	} l12(0, 677, 0); if (object_type_3_buffer[PLAYER_LOCATION] == 140) {
		f3(677, 1200); f3(676, 485);
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
		f3(676, 209);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 211) { f3(677, 1204); f3(676, 207); } if (object_type_3_buffer[PLAYER_LOCATION] == 215)
	{
		f3(677, 1205); f3(676, 216);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 221) {
		f3(677, 1204); f3(676, 213);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 224) { f3(677, 1206); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 230) {
		f3(677, 1207);
		f3(676, 224);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 238) { f3(677, 1204); f3(676, 176); } if (object_type_3_buffer[PLAYER_LOCATION] == 239
		|| object_type_3_buffer[PLAYER_LOCATION] == 240) {
		f3(677, 1215); f3(676, 485);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 242) {
		f3(677, 1204);
		f3(676, 485);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 244) { f3(677, 1208); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 245)
	{
		f3(677, 1208); f3(676, 485);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 252) {
		f3(677, 1209); f3(676, 485);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 253) { f3(677, 1209); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 261) {
		f3(677, 1210);
		f3(676, 260);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 463) { f3(677, 1214); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 262)
	{
		f3(677, 1211); f3(676, 255);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 265) {
		f3(677, 1212); f3(676, 266);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 266) { f3(677, 1212); f3(676, 267); } if (object_type_3_buffer[PLAYER_LOCATION] == 267) {
		f3(677, 1212);
		f3(676, 268);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 325) { f3(677, 1201); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 326)
	{
		f3(677, 1201); f3(676, 485);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 327) {
		f3(677, 1213); f3(676, 328);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 365) { f3(677, 1201); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 376) {
		f3(677, 1214);
		f3(676, 377);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 382) { f3(677, 1209); f3(676, 485); } if (object_type_3_buffer[PLAYER_LOCATION] == 204)
	{
		f3(677, 1204); f3(676, 203);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 395) {
		f3(677, 954); f3(676, 394);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 408) { f3(677, 954); f3(676, 203); } if ((399 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 404))
	{
		f3(677, 954); l12(1, 676, 671); object_type_3_buffer[676] -= 1;
	} if (object_type_3_buffer[PLAYER_LOCATION] == 394) {
		l12(0, 677, 1);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151) {
		f3(677, 1680); if (isObjectFlagSet(t11(670), 11)) {
			object_type_3_buffer[677] += 1;
		} f3(676, 150);
	} if (object_type_3_buffer[677] == 0) { return 0; } if (object_type_3_buffer[PLAYER_LOCATION] == 394) {
		q36();
	}
	else { printMessage(14, 677, 670); s9(object_type_3_buffer[670], object_type_3_buffer[676]); } if (currentCommandContains(53)) {
		s9(53, 485);
		s9(54, object_type_3_buffer[676]); if (!(j0[54] == 485)) { printMessage(64, 1216, 0); }
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151)
	{
		if (currentCommandContains(44)) { l12(0, 154, 1); l12(0, 7, 1); printMessage(64, 1682, 0); }
	} if (currentCommandContains(111))
	{
		if (object_type_3_buffer[111] == 3 || object_type_3_buffer[111] == 4) { modifyObjectFlag('s', t11(676), 15); }
	} if (currentCommandContains(113) ||
		currentCommandContains(112)) {
		l12(0, 700, 3); if (currentCommandContains(113)) { l12(0, 700, 4); } if (isItemAtLocation(111, t11(object_type_3_buffer[700])))
		{
			l12(0, 111, 2);
		}
		else { if (isItemAtLocation(114, t11(object_type_3_buffer[700]))) { l12(0, 114, 2); } }
	} if
		(currentCommandContains(100) && isItemAtLocation(ITEM_BIRD, -1)) {
		s9(101, object_type_3_buffer[676]); if (!(j0[101] == 485)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 151)
			{
				l12(0, 700, 1);
			}
			else { l12(0, 700, 0); printBlankLine(); } printMessage(12, 1543, 700);
		}
		longjmp(done_with_command, 1);
	} if (currentCommandContains(99) && object_type_3_buffer[99] == 1) {
		b26(); if (object_type_3_buffer[699] > 0) {
			printMessage(64, 805, 0);
		}
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151) { printBlankLine(); } longjmp(done_with_command, 1);
} int u26() {
	if (object_type_3_buffer[697] == 1)
	{
		printMessage(64, 1219, 0);
	} if (isObjectFlagSet(t11(670), 0)) {
		if (isItemAtLocation(t11(object_type_3_buffer[670]), -1) || !(isObjectFlagSet(t11(670), 3)))
		{
			return 0;
		} l12(1, 699, 705); object_type_3_buffer[699] -= object_type_3_buffer[721]; object_type_3_buffer[699] *= 5; object_type_3_buffer[699]
			+= 60; if (cheezy_rand(100) < object_type_3_buffer[699]) { printMessage(12, 1220, 670); die(); } printMessage(76, 1221, 670);
	}
} int y22() {
	object_type_3_buffer[732] += 1; if (cheezy_rand(100) < 40) {
		object_type_3_buffer[732] -= 2; if (object_type_3_buffer[732] < 0)
		{
			l12(0, 732, 1);
		}
	} f3(677, 1237); object_type_3_buffer[677] += object_type_3_buffer[732]; printBlankLine(); if (object_type_3_buffer[732] == 7)
	{
		if (object_type_3_buffer[PLAYER_LOCATION] == 420 || object_type_3_buffer[PLAYER_LOCATION] == 421) { object_type_3_buffer[677] += 1; } if (isItemAtLocation(110, -1)) {
			s9(110, 484);
		} processMoveCommand(419, -1); printMessage(2, 677, 0); die();
	} printMessage(2, 677, 0);
} int u27() {
	if (object_type_3_buffer[135] > 3)
	{
		if ((isItemAtLocation(95, -1) || isObjectFlagSet(135, 14)) && isObjectFlagSet(27, 14)) {
			printMessage(0, 1365, 0); s9(135, 485);
			l12(0, 135, 0);
		}
		else {
			if (cheezy_rand(100) < 20 || !(isObjectFlagSet(27, 14))) {
				modifyObjectFlag('s', 135, 14);
			} l12(0, 135, 5); processMoveCommand(139, -1361);
		} return 0;
	} if (isItemAtLocation(88, -1)) {
		printMessage(0, 1306, 0);
		if (!(isObjectFlagSet(27, 14))) { printMessage(0, 1307, 0); } s9(83, object_type_3_buffer[671]); s9(135, 140); l12(0, 135, 4);
		s9(88, 485); return 0;
	} if (isItemAtLocation(50, -1)) {
		l12(0, 135, 2); object_type_3_buffer[757] = cheezy_rand(60 - 40 + 1) + 40;
		printMessage(8, 1305, 0); printMessage(0, 1308, 0); s9(50, 484); if (!(isObjectFlagSet(385, 4))) {
			l12(0, 733, 3);
		}
	}
	else {
		if (object_type_3_buffer[135] == 0) {
			if (isObjectFlagSet(135, 4) && !isItemAtLocation(110, -1) && !(isObjectFlagSet(135, 13))
				&& cheezy_rand(100) < 10) {
				printMessage(0, 1315, 0); modifyObjectFlag('s', 135, 13); return 0;
			}
			else {
				l12(0, 701, 0);
				*getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
					if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)
						&& object_type_3_buffer[675] != 99) {
						if (isObjectFlagSet(t11(675), 16)) {
							z5(700, 675); if (object_type_3_buffer[700] < 2) {
								s9(object_type_3_buffer[675], PLAYER_LOCATION);
								object_type_3_buffer[701] += 1;
							}
						}
						else { s9(object_type_3_buffer[675], PLAYER_LOCATION); object_type_3_buffer[701] += 1; }
					}
				} if (g10(110, -1))
				{
					object_type_3_buffer[701] -= 1;
				} printMessage(12, 1305, 701); if (g10(110, -1)) {
					s9(110, 484); processMoveCommand(412, -1309);
				}
				else {
					l12(0, 135, 1); object_type_3_buffer[757] = cheezy_rand(10 - 6 + 1) + 6; object_type_3_buffer[758] = cheezy_rand(10 - 8 + 1) + 8; processMoveCommand(384, -1310);
				}
			}
		} if (object_type_3_buffer[135] == 1) {
			printMessage(8, 1305, 0); if (object_type_3_buffer[757] > 0) { processMoveCommand(384, -1310); } printMessage(0, 1311, 0);
			l12(0, 135, 0); die();
		}
	}
} int h27() {
	if (object_type_3_buffer[135] == 1) {
		b26(); if (object_type_3_buffer[699] == 0
			&& object_type_3_buffer[758] == 0) {
			printMessage(0, 1262, 0);
		} if (object_type_3_buffer[757] < 1) {
			l12(0, 699, 9); object_type_3_buffer[699]
				+= object_type_3_buffer[757]; if (object_type_3_buffer[699] < 1) { l12(0, 699, 1); } object_type_3_buffer[699] *= 10; if (cheezy_rand(100) < object_type_3_buffer[699])
			{
				printMessage(0, 1312, 0);
			}
				else {
					printMessage(0, 1313, 0); printMessage(0, 1311, 0); processMoveCommand(383, -1); l12(0, 135, 0);
					die();
				}
		}
	}
} int h28() {
	object_type_3_buffer[759] -= object_type_3_buffer[705]; if (object_type_3_buffer[759] < 155 && object_type_3_buffer[759]>135)
	{
		printMessage(0, 1341, 0); object_type_3_buffer[759] = cheezy_rand(135 - 110 + 1) + 110;
	}
	else {
		if (object_type_3_buffer[759] < 60 &&
			object_type_3_buffer[759]>40) {
			printMessage(0, 1342, 0); object_type_3_buffer[759] = cheezy_rand(39 - 25 + 1) + 25;
		}
		else {
			if (object_type_3_buffer[759] < 0)
			{
				printMessage(0, 1343, 0); object_type_3_buffer[759] = cheezy_rand(650 - 550 + 1) + 550; die();
			}
		}
	}
} int r31() {
	if
		(isObjectFlagSet(16, 14)) {
		modifyObjectFlag('s', 16, 13); modifyObjectFlag('c', 16, 14);
	}
} int o22() {
	if (object_type_3_buffer[714] > -1)
	{
		printMessage(0, 1068, 0);
	}
	else { printMessage(0, 828, 0); } l12(0, 714, 0);
} int h29() {
	if (isObjectFlagSet(t11(670), 16))
	{
		z5(700, 670); if (object_type_3_buffer[700] > 1) {
			c16(670, 1); if (!(object_type_3_buffer[670] == 64)) {
				modifyObjectFlag('c', t11(670), 12);
			}
		}
	} if (isObjectFlagSet(t11(670), 7)) {
		z5(700, 670); if (object_type_3_buffer[700] == 0) {
			if (object_type_3_buffer[670] == 111)
			{
				l12(0, 111, 2);
			}
			else { c16(670, 1); }
		}
	}
} int n25() {
	if (object_type_3_buffer[678] == object_type_3_buffer[672])
	{
		processMoveCommand(object_type_3_buffer[679], -2);
	} if (object_type_3_buffer[679] == object_type_3_buffer[672]) { processMoveCommand(object_type_3_buffer[678], -2); } printMessage(64, 799, 0);
} int h30() {
	if (isObjectFlagSet(8, 13)) { printMessage(0, 1488, 0); }
	else {
		printMessage(0, 1487, 0); modifyObjectFlag('s', 8, 13);
	}
} int i46() {
	if (object_type_3_buffer[91] > 1) {
		if (currentCommandContains(554)) { printMessage(64, 867, 0); } if (currentCommandContains(559))
		{
			printMessage(64, 1502, 0);
		} printMessage(64, 1501, 0);
	} printMessage(76, 818, 91);
} int v38() {
	l12(0, 117, 0);
	if (currentCommandContains(557) && object_type_3_buffer[PLAYER_LOCATION] != 393 && !g10(121, -1)) { n24(); } printMessage(0, 1510, 0); s9(117, PLAYER_LOCATION);
	if (object_type_3_buffer[PLAYER_LOCATION] == 393) { e24(); } if (g10(121, -1)) {
		s9(117, 485); s9(121, 485);
		printMessage(64, 1151, 0);
	} longjmp(done_with_command, 1);
} int s31() {
	if (g10(8, -1)) {
		printMessage(64, 1538, 0);
	} if (g10(30, -1)) { printMessage(64, 1549, 0); } if (g10(21, -1)) {
		if (object_type_3_buffer[21] == 0) {
			printMessage(64, 1539, 0);
		} printMessage(64, 1540, 0);
	}
} int c28() {
	object_type_3_buffer[699] = object_type_3_buffer[700] - 1; while (++object_type_3_buffer[699] <= object_type_3_buffer[701])
	{
		printMessage(2, 699, 0); if (object_type_3_buffer[699] < object_type_3_buffer[701]) { if (!(y10(944))) { return 0; } }
	}
}
int v39() { object_type_3_buffer[677] = cheezy_rand(852 - 847 + 1) + 847; printMessage(78, 677, 669); } int o23() {
	f3(677, 1591);
	object_type_3_buffer[677] += object_type_3_buffer[11]; printMessage(2, 677, 0); object_type_3_buffer[11] += 1; if (object_type_3_buffer[11] > 2) {
		l12(0, 11, 0);
		modifyObjectFlag('s', 12, 10);
	}
	else { modifyObjectFlag('c', 12, 10); } printBlankLine(); printMessage(0, 11, 0); l12(1, 12, 11);
} int u28() {
	if (currentCommandContains(120) || currentCommandContains(125)) {
		if (currentCommandContains(571) || currentCommandContains(562)) {
			printMessage(64, 1397, 0);
		} printMessage(64, 915, 0);
	}
} int b30() {
	if (currentCommandContains(COMMAND_EXIT)) { printMessage(64, 1551, 0); } if (!(currentCommandContains(641)))
	{
		return 0;
	} if (currentCommandContains(571)) { printMessage(64, 1636, 0); } if (currentCommandContains(556) || currentCommandContains(COMMAND_BREAK) ||
		currentCommandContains(536) || currentCommandContains(COMMAND_CLOSE)) {
		printMessage(76, 1637, 669);
	} printMessage(64, 915, 0);
} int x31() {
	if
		(currentCommandContains(209)) {
		if (currentCommandContains(571)) { printMessage(64, 1640, 0); } printMessage(64, 915, 0);
	}
} int x32()
{
	if (currentCommandContains(5)) { printMessage(76, 1546, 5); }
} int h31() {
	if (object_type_3_buffer[717] == 5) {
		if (isObjectFlagSet(t11(717), 0))
		{
			printMessage(0, 1662, 0);
		}
		else { modifyObjectFlag('s', t11(717), 0); printMessage(0, 1661, 0); } processMoveCommand(object_type_3_buffer[679], -2);
	} processMoveCommand(object_type_3_buffer[678], -2);
} int o24() {
	if (j0[82] == 379) {
		if (isObjectFlagSet(82, 14)) {
			if (isObjectFlagSet(82, 13))
			{
				modifyObjectFlag('c', 82, 13); printMessage(64, 1582, 0);
			}
			else { s9(82, 485); printMessage(64, 1584, 0); }
		}
		else {
			printMessage(0, 1582, 0); if (isObjectFlagSet(82, 13)) { modifyObjectFlag('s', 82, 14); printMessage(64, 1583, 0); } modifyObjectFlag('s', 82, 13);
			longjmp(done_with_command, 1);
		}
	} printMessage(64, 1582, 0);
} int z27() {
	if (!g10(t11(object_type_3_buffer[670]), -1))
		return 0; if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { printMessage(76, 925, 670); } if (isItemAtLocation(51, -1)) {
		if (currentCommandContains(106)) { s9(106, 485); s9(107, object_type_3_buffer[671]); s9(59, 234); printMessage(64, 927, 0); }
		printMessage(64, 928, 0);
	} printMessage(76, 926, 670);
} int c29() {
	if (currentCommandContains(COMMAND_TAKE) || currentCommandContains(535)) {
		return 0;
	} f3(700, 3); if (object_type_3_buffer[700] == object_type_3_buffer[669]) { printMessage(64, 1485, 0); } if (currentCommandContains(601))
	{
		printMessage(64, 1679, 0);
	} printMessage(12, 1483, 669); printMessage(76, 1484, 670);
} int o25() {
	if (isItemAtLocation(114, 4)
		|| isItemAtLocation(111, 4)) {
		if (isItemAtLocation(111, 4)) { l12(0, 111, 2); }
		else { l12(0, 114, 2); }
	}
	else { printMessage(76, 1027, 113); }
} int t40() {
	if (!(g10(66, -1))) {
		printMessage(76, 818, 670);
	} l12(1, 699, 670); f3(702, 642); object_type_3_buffer[699] -= object_type_3_buffer[702]; if (object_type_3_buffer[66] == 0 && object_type_3_buffer[699] == 1
		|| object_type_3_buffer[66] == object_type_3_buffer[699]) {
		f3(702, 66); b10(10, 702);
	}
	else {
		printMessage(76, 818, 670);
	} if (!currentCommandIsOneOf(643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, -1))
		return 0; printMessage(64, 776, 0);
} 

int command_outside_building_136() {
	if (currentCommandContains(571)) {
		if (currentCommandContains(141)) {
			printMessage(64, 1639, 0);
		} 
		return 0;
	} 
	processMoveCommand(137, 0, 136, COMMAND_WEST, -COMMAND_UP); 
	processMoveCommand(LOCATION_BUILDING, 0, COMMAND_ENTER, 141, -COMMAND_EAST); 
	processMoveCommand(142, 0, COMMAND_DOWNSTREAM, 626, COMMAND_SOUTH, -COMMAND_DOWN);
	processMoveCommand(440, 0, COMMAND_NORTH, -622); 
	processMoveCommand(458, 0, -COMMAND_NORTHEAST); 
	processMoveCommand(460, 0, -COMMAND_SOUTHEAST); 
	processMoveCommand(450, 0, -COMMAND_SOUTHWEST); 
	processMoveCommand(457, 0, COMMAND_NORTHWEST, -457);
	processMoveCommand(138, 0, -138); 
	if (currentCommandContains(144) || currentCommandContains(619)) {
		f3(679, 461); 
		if (currentCommandContains(144)) {
			f3(678, 144);
		} else { 
			f3(678, 140); 
		} 
		h31();
	} 
	
	if (currentCommandContains(6)) { 
		printMessage(72, 1458, 526);  // The building may have had a proper door once, but if so, it is long gone.  If you want to get in, why not just go in?
	}
} 

int r32()
{
	if (currentCommandContains(571)) { return 0; } processMoveCommand(LOCATION_END_OF_ROAD, 0, 136, 141, -COMMAND_EAST); processMoveCommand(457, 0, -COMMAND_NORTH); processMoveCommand(440, 0, COMMAND_NORTHEAST, -622);
	processMoveCommand(142, 0, -COMMAND_SOUTHEAST); processMoveCommand(450, 0, -COMMAND_SOUTH); processMoveCommand(461, 0, -COMMAND_SOUTHWEST); processMoveCommand(438, 0, -COMMAND_NORTHWEST); if (!currentCommandIsOneOf(COMMAND_WEST, 529, COMMAND_CLIMB, -1))
		return 0; if (y10(1264)) { printMessage(0, 1265, 0); r7(); } printMessage(64, 1253, 0);
} int o26()
{
	u28(); if (!currentCommandIsNotOneOf(COMMAND_CLOSE, 93, -1)) return 0; printMessage(76, 1129, 670);
} 

int f22() {
	if(currentCommandContains(6)) {
		printMessage(72, 1458, 527); // The building may have had a proper door once, but if so, it is long gone.  If you want to get out, why not just go out?
	} 
	
	if (currentCommandContains(639)) { 
		printMessage(64, 1586, 0); // I  really  don't know what you are getting at.  The spring is a source of water.  Nothing more to it.  If you want to get into the cave, I  suggest you look elsewhere.
	} 
	
	if (currentCommandContains(638))
	{
		printMessage(64, 1585, 0); // No,  no...  a misunderstanding.  "Well house" does not imply a "well". It just means that the spring wells out within the house.  There is no  well to be seen here.  I hope I am making myself clear enough for you.
	} 
	
	if (!currentCommandIsNotOneOf(571, 141, -1)) 
		return 0; 
	
	printMessage(64, 1639, 0);  // It's  no  architectural  miracle  - just a simple brick structure with no windows, serving as a well house for a large spring.
} 

int n26()
{
	if (currentCommandContains(571)) { 
		return 0; 
	} 
	processMoveCommand(LOCATION_END_OF_ROAD, 0, 136, COMMAND_EXIT, -COMMAND_WEST); 
	
	if (object_type_3_buffer[717] < 2) {
		processMoveCommand(147, object_type_3_buffer[685], -497);
		processMoveCommand(LOCATION_Y2, object_type_3_buffer[685], -501);
	} 
	
	if (!currentCommandIsOneOf(626, COMMAND_DOWNSTREAM, -1)) 
		return 0; 
	
	printMessage(64, 1026, 0);  // The  stream  flows out through a pair of 1 foot diameter sewer pipes.  It would be advisable to leave via the exit.
}

int f23() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(LOCATION_END_OF_ROAD, 0, COMMAND_UPSTREAM, COMMAND_NORTH, COMMAND_NORTHEAST, -COMMAND_NORTHWEST); processMoveCommand(460, 0, -COMMAND_EAST);
	processMoveCommand(454, 0, -COMMAND_SOUTHEAST); processMoveCommand(451, 0, -COMMAND_SOUTHWEST); processMoveCommand(450, 0, COMMAND_WEST, -622); if (currentCommandContains(COMMAND_UP)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(450, -2);
		} processMoveCommand(460, -2);
	} if (currentCommandContains(141)) {
		f3(679, 143); f3(678, 136); h31();
	} if (currentCommandContains(144)) { f3(679, 440); f3(678, 144); h31(); } if (!currentCommandIsNotOneOf(COMMAND_GO, 626, -1))
		return 0; f3(678, 136); f3(679, 143); n25();
} int t41() {
	if (!currentCommandIsOneOf(COMMAND_SOUTH, COMMAND_DOWN, COMMAND_DOWNSTREAM, -1))
		return 0; processMoveCommand(143, -2);
} int j11() {
	if (currentCommandContains(571)) { return 0; } if (object_type_3_buffer[143] > 0)
	{
		if (currentCommandContains(141)) { f3(679, 436); f3(678, 136); h31(); } if (currentCommandContains(144)) {
			f3(679, 142);
			f3(678, 144); h31();
		}
	}
	else { processMoveCommand(LOCATION_END_OF_ROAD, 0, -141); processMoveCommand(144, 0, -144); } processMoveCommand(142, 0, COMMAND_UPSTREAM, -COMMAND_NORTH);
	processMoveCommand(144, 0, COMMAND_DOWNSTREAM, 640, COMMAND_SOUTH, -144); processMoveCommand(460, 0, -COMMAND_NORTHEAST); processMoveCommand(454, 0, -COMMAND_EAST); processMoveCommand(455, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(452, 0, -COMMAND_SOUTHWEST); processMoveCommand(451, 0, COMMAND_WEST, -622); processMoveCommand(450, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_UP)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(451, -2);
		} processMoveCommand(454, -2);
	} if (!currentCommandIsOneOf(143, 626, COMMAND_DOWN, COMMAND_ENTER, -1)) return 0; if
		(object_type_3_buffer[143] == 0) {
		printMessage(64, 901, 0);
	} l12(0, 717, 6); e27(); printMessage(0, 1390, 0); if (y10(1391))
	{
		printMessage(0, 1392, 0); if (y10(1391)) {
			if (object_type_3_buffer[708] > 658) { printMessage(0, 1394, 0); }
			else
			{
				printMessage(0, 1393, 0);
			}
		}
	} l12(0, 718, 0); a29();
} int r9() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(454, 0, -COMMAND_NORTHEAST); processMoveCommand(455, 0, -COMMAND_EAST); processMoveCommand(456, 0, -COMMAND_SOUTHEAST); processMoveCommand(436, 0, -COMMAND_SOUTH); processMoveCommand(453, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(452, 0, COMMAND_WEST, -622); processMoveCommand(451, 0, -COMMAND_NORTHWEST); if (currentCommandContains(141)) {
		f3(679, 436); f3(678, 136);
		h31();
	} if (currentCommandContains(COMMAND_UP)) { if (cheezy_rand(100) < 50) { processMoveCommand(455, -2); } processMoveCommand(452, -2); } processMoveCommand(143, 0, COMMAND_UPSTREAM, COMMAND_NORTH, -143);
	if (!currentCommandIsOneOf(COMMAND_ENTER, COMMAND_DOWN, COMMAND_ENTER, -1)) return 0; if (object_type_3_buffer[4] == 1) { processMoveCommand(145, -2); } printMessage(64, 899, 0);
} int p13() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(146, 0, 627, 146, COMMAND_ENTER, -COMMAND_WEST); processMoveCommand(150, 0, -150);
	processMoveCommand(147, 0, -147); if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_EXIT, COMMAND_EXIT, 620, -1)) return 0; if (object_type_3_buffer[4] == 1) {
		processMoveCommand(144, -2);
	} printMessage(64, 899, 0);
} int j12() {
	processMoveCommand(145, 0, COMMAND_EXIT, 620, 623, -COMMAND_EAST); processMoveCommand(147, 0, COMMAND_ENTER, 229, COMMAND_WEST, -147);
	processMoveCommand(150, 0, -150);
} int t13() {
	processMoveCommand(145, 0, -623); processMoveCommand(146, 0, 627, 146, 625, 213, -COMMAND_EAST);
	processMoveCommand(148, 0, 148, COMMAND_ENTER, COMMAND_UP, -COMMAND_WEST); processMoveCommand(150, 0, -150); if (object_type_3_buffer[4] == 1) {
		processMoveCommand(144, 0, -144);
	}
	else { processMoveCommand(145, 899, -144); } if (currentCommandContains(497)) {
		if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
		{
			modifyObjectFlag('s', t11(710), 4); printMessage(64, 934, 0);
		} processMoveCommand(LOCATION_BUILDING, -object_type_3_buffer[685]);
	} if (!currentCommandIsNotOneOf(125, -1))
		return 0; if (currentCommandContains(571) || currentCommandContains(562)) { printMessage(64, 1614, 0); } printMessage(64, 915, 0);
} int
l16() {
	processMoveCommand(145, 0, -623); processMoveCommand(147, 0, COMMAND_DOWN, COMMAND_EAST, -147); processMoveCommand(149, 0, COMMAND_ENTER, COMMAND_UP, -COMMAND_WEST);
	processMoveCommand(150, 0, -150); if (object_type_3_buffer[4] == 1) { processMoveCommand(144, 0, -144); }
	else {
		processMoveCommand(145, 899, -144);
	}
} int h9() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(145, 0, -623); processMoveCommand(147, 0, -147);
	processMoveCommand(148, 0, 148, -COMMAND_EAST); processMoveCommand(150, 0, 625, 150, -COMMAND_WEST); if (object_type_3_buffer[4] == 1) {
		processMoveCommand(144, 0, -144);
	}
	else { processMoveCommand(145, 899, -144); }
} 
int u29() {
	if (object_type_3_buffer[154] == 0) {
		if (isItemAtLocation(44, -1))
		{
			s9(5, 484);
		}
		else { s9(5, 150); }
	} if (currentCommandContains(571)) { return 0; } processMoveCommand(145, 0, -623);
	processMoveCommand(147, 0, -147); processMoveCommand(149, 0, 625, -COMMAND_EAST); processMoveCommand(151, 0, -COMMAND_DOWN); if (object_type_3_buffer[4] == 1) {
		processMoveCommand(144, 0, -144);
	}
	else { processMoveCommand(145, 899, -144); } if (!currentCommandIsOneOf(COMMAND_DOWN, 150, 5, -1)) return 0; if (q8(5, -1))
	{
		processMoveCommand(151, -2);
	} printMessage(0, 1014, 0); processMoveCommand(151, -1); die();
} int y23() {
	if (!currentCommandIsOneOf(COMMAND_WEST, 616, -1))
		return 0; if (currentCommandContains(571)) { printMessage(64, 1025, 0); } printMessage(64, 1024, 0);
} int p37() {
	if
		(!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return 0; processMoveCommand(151, -1); v37();
} int u9() {
	if (object_type_3_buffer[154] == 0)
	{
		if (isItemAtLocation(44, -1)) { s9(5, 484); l12(0, 151, 1); }
		else {
			s9(5, 150); l12(0, 151, 0);
		}
	} if (currentCommandContains(571)) { return 0; } processMoveCommand(154, 0, -COMMAND_SOUTH); processMoveCommand(312, 0, -COMMAND_EAST); processMoveCommand(152, 0, 529, 628, -COMMAND_WEST);
	processMoveCommand(155, 0, COMMAND_DOWN, -COMMAND_NORTH); processMoveCommand(164, 0, -163); if (!currentCommandIsOneOf(COMMAND_CLIMB, COMMAND_UP, 150, 618, 625, 5, -1)) return
		0; if (q8(5, -1)) { processMoveCommand(150, -2); } printMessage(64, 1015, 0);
} int q37() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(151, 0, COMMAND_EAST, -628); if (!currentCommandIsOneOf(529, COMMAND_CROSS, COMMAND_WEST, -1)) return 0; if
		(object_type_3_buffer[8] == 0) {
		printMessage(64, 903, 0);
	} h30(); processMoveCommand(153, -2);
} int u30() {
	if (currentCommandContains(COMMAND_JUMP))
	{
		if (object_type_3_buffer[8] == 1) { printMessage(64, 902, 0); } processMoveCommand(224, -1); v37();
	} if (currentCommandContains(9) && object_type_3_buffer[8] == 1)
	{
		s9(9, object_type_3_buffer[671]);
	}
} int c17() {
	processMoveCommand(151, 0, COMMAND_NORTH, COMMAND_EXIT, -628); if (!currentCommandIsNotOneOf(125, -1))
		return 0; if (currentCommandContains(571) || currentCommandContains(562)) { printMessage(76, 1615, 154); } printMessage(64, 915, 0);
} int
n27() {
	l12(0, 676, 0); if (currentCommandContains(571)) { return 0; } if (!currentCommandIsOneOf(5, COMMAND_UP, COMMAND_EAST, -1))
		return 0; f3(676, 151);
} int m25() {
	if (currentCommandContains(COMMAND_NORTH)) { f3(676, 160); }
	else
	{
		if (currentCommandContains(COMMAND_SOUTHWEST) || currentCommandContains(624)) { f3(676, 215); }
		else {
			if (currentCommandContains(COMMAND_SOUTH)) {
				f3(676, 161);
			}
			else {
				if (currentCommandContains(COMMAND_WEST)) { f3(676, 162); }
				else {
					if (currentCommandContains(COMMAND_DOWN)) {
						f3(676, 314);
					}
					else {
						if (currentCommandContains(COMMAND_NORTHEAST)) { f3(676, 313); }
						else {
							if (currentCommandContains(COMMAND_NORTHWEST)) {
								f3(676, 319);
							}
							else { if (currentCommandContains(COMMAND_SOUTHEAST)) { f3(676, 316); } }
						}
					}
				}
			}
		}
	} if (object_type_3_buffer[676] == 0) {
		return 0;
	} if (g10(7, -1) && object_type_3_buffer[676] != object_type_3_buffer[681]) {
		w25(); if (object_type_3_buffer[7] == 1) {
			printMessage(0, 1426, 0);
			l12(0, 7, 0);
		}
		else { printMessage(64, 1016, 0); }
	} if (currentCommandContains(COMMAND_SOUTHWEST) && cheezy_rand(100) < 66) {
		l12(1, 681, 676);
		printMessage(64, 843, 0);
	} processMoveCommand(object_type_3_buffer[676], -2);
} int q10() {
	if (currentCommandContains(571)) { return 0; }
	processMoveCommand(157, 0, COMMAND_EAST, -COMMAND_CROSS); processMoveCommand(209, 0, COMMAND_WEST, -209); processMoveCommand(159, 0, COMMAND_DOWN, -150); if (!currentCommandIsNotOneOf(621, -1))
		return 0; printMessage(64, 950, 0);
} int n10() { processMoveCommand(157, 0, COMMAND_UP, -COMMAND_EXIT); } int c18() {
	processMoveCommand(156, 0, COMMAND_UP, -COMMAND_EXIT); if (currentCommandContains(COMMAND_CLIMB)) {
		if (object_type_3_buffer[11] == 0) { printMessage(64, 1028, 0); } if
			(object_type_3_buffer[11] == 1) {
			processMoveCommand(156, -1029);
		} if (!(isObjectFlagSet(220, 4))) { l12(0, 733, 2); } processMoveCommand(220, -1030);
	} if (!currentCommandIsNotOneOf(COMMAND_TAKE, 11, -1)) return 0; printMessage(64, 920, 0);
} int p14() {
	processMoveCommand(167, 0, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_JUMP)) { if (object_type_3_buffer[8] == 1) { printMessage(64, 902, 0); } processMoveCommand(224, -1); v37(); } if (currentCommandContains(COMMAND_NORTH))
	{
		processMoveCommand(167, -1017);
	} if (currentCommandContains(9) && object_type_3_buffer[8] == 1) { s9(9, object_type_3_buffer[671]); } if (!currentCommandIsOneOf(529, COMMAND_CROSS, COMMAND_EAST, -1))
		return 0; if (object_type_3_buffer[8] == 0) { printMessage(64, 903, 0); } h30(); processMoveCommand(152, -2);
} int a10()
{
	if (currentCommandContains(571)) { return 0; } processMoveCommand(155, 0, COMMAND_SOUTH, COMMAND_EXIT, -628); processMoveCommand(LOCATION_Y2, 0, COMMAND_NORTH, -163);
	processMoveCommand(198, 0, COMMAND_DOWN, -621); processMoveCommand(198, 0, -621);
} int s12() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(155, 0, COMMAND_NORTH, COMMAND_EXIT, -628); processMoveCommand(395, 0, COMMAND_DOWN, -5); x32();
} int j13() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(LOCATION_MT_KING, 0, COMMAND_EAST, COMMAND_EXIT, -628); processMoveCommand(196, 0, COMMAND_WEST, -COMMAND_UP);
} int n11() {
	processMoveCommand(160, 0, -COMMAND_SOUTH); processMoveCommand(164, 0, COMMAND_EAST, -164); processMoveCommand(165, 0, -COMMAND_WEST); if (!currentCommandIsOneOf(501, 228, -1))
		return 0; if (object_type_3_buffer[697] == 2 && !currentCommandContains(COMMAND_SAY)) { return 0; } if (currentCommandContains(228)) {
		modifyObjectFlag('c', 228, 8);
		modifyObjectFlag('c', 227, 8); modifyObjectFlag('c', 229, 8); processMoveCommand(228, -2);
	} if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
	{
		modifyObjectFlag('s', t11(710), 4); printMessage(64, 934, 0);
	} processMoveCommand(LOCATION_BUILDING, -object_type_3_buffer[685]);
} int v11() {
	processMoveCommand(LOCATION_Y2, 0, COMMAND_DOWN, -163);
	processMoveCommand(151, 0, -COMMAND_UP);
} int k6() {
	processMoveCommand(LOCATION_Y2, 0, COMMAND_EAST, -163); b30(); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; printMessage(0, 1014, 0); processMoveCommand(237, -1); die();
} int o6() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(199, 0, COMMAND_EAST, -627); processMoveCommand(160, 0, COMMAND_UP, -621); processMoveCommand(201, 0, -COMMAND_WEST); processMoveCommand(207, 0, -207);
} int l17() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(198, 0, COMMAND_WEST, -627); processMoveCommand(200, 0, COMMAND_DOWN, COMMAND_CLIMB, -150);
} int x13() {
	processMoveCommand(199, 0, COMMAND_UP, COMMAND_EXIT, -COMMAND_CLIMB); if (!currentCommandIsOneOf(143, 626, COMMAND_DOWN, COMMAND_UPSTREAM, COMMAND_DOWNSTREAM, -1)) return
		0; printMessage(64, 901, 0);
} int y11() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(198, 0, COMMAND_EAST, -625);
	processMoveCommand(202, 0, COMMAND_DOWN, -621); processMoveCommand(207, 0, -207);
} int g13() {
	if (currentCommandContains(571)) {
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
} int h11() {
	processMoveCommand(194, 0, -COMMAND_EAST); processMoveCommand(196, 0, -COMMAND_NORTH);
	processMoveCommand(300, 0, -COMMAND_SOUTH);
} int w13() {
	processMoveCommand(194, 0, -COMMAND_WEST); processMoveCommand(197, 0, -COMMAND_NORTH); processMoveCommand(162, 0, -COMMAND_EAST);
	processMoveCommand(195, 0, -COMMAND_SOUTH);
} int m8() { processMoveCommand(196, 0, COMMAND_EXIT, -COMMAND_SOUTH); } int r13() {
	processMoveCommand(201, 0, COMMAND_UP, -COMMAND_CLIMB);
	processMoveCommand(207, 0, COMMAND_WEST, -207); processMoveCommand(232, 0, COMMAND_NORTH, -232); processMoveCommand(235, 0, -COMMAND_EAST);
} int d17() {
	processMoveCommand(202, 0, -COMMAND_EAST);
	processMoveCommand(208, 0, -COMMAND_WEST); processMoveCommand(209, 0, -209); if (currentCommandContains(COMMAND_NORTHWEST)) {
		if (cheezy_rand(100) < 50) {
			printMessage(64, 843, 0);
		} processMoveCommand(226, -2);
	} if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_UP, COMMAND_DOWN, -1)) return 0; if (cheezy_rand(100) < 65) {
		printMessage(64, 929, 0);
	} processMoveCommand(235, 0, -COMMAND_DOWN); if (cheezy_rand(100) < 75) {
		processMoveCommand(213, 0, -COMMAND_NORTH); processMoveCommand(201, 0, -COMMAND_UP);
		processMoveCommand(209, 0, -COMMAND_SOUTH);
	}
	else {
		processMoveCommand(212, 0, -COMMAND_NORTH); processMoveCommand(211, 0, -COMMAND_UP); processMoveCommand(218, 0, -COMMAND_SOUTH);
	}
} int o7() {
	processMoveCommand(207, 0, -COMMAND_NORTHEAST); processMoveCommand(157, 0, -COMMAND_WEST); processMoveCommand(218, 0, -148); processMoveCommand(225, 0, COMMAND_EAST, -225);
	processMoveCommand(226, 0, -226); if (!currentCommandIsOneOf(COMMAND_NORTHWEST, COMMAND_SOUTH, -1)) return 0; if (cheezy_rand(100) < 33) {
		processMoveCommand(218, 0, -COMMAND_SOUTH);
		processMoveCommand(226, 0, -COMMAND_NORTHWEST);
	}
	else { printMessage(64, 843, 0); }
} int m7() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(208, 0, -COMMAND_EAST); processMoveCommand(156, 0, COMMAND_WEST, -COMMAND_CROSS); processMoveCommand(158, 0, COMMAND_DOWN, -150);
} int j18()
{
	processMoveCommand(156, 0, -COMMAND_SOUTH); processMoveCommand(210, 0, COMMAND_UP, -COMMAND_CLIMB); processMoveCommand(207, 0, COMMAND_NORTH, -207); processMoveCommand(207, 0, -207);
	x31();
} int i18() {
	processMoveCommand(209, 0, COMMAND_DOWN, -209); processMoveCommand(237, 0, COMMAND_NORTH, -10); processMoveCommand(239, 0, -239);
	processMoveCommand(247, 0, -COMMAND_SOUTH);
} int y12() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(212, 0, -COMMAND_NORTH);
	processMoveCommand(207, 0, COMMAND_DOWN, -625); processMoveCommand(238, 0, -COMMAND_SOUTH);
} int f5() {
	processMoveCommand(207, 0, -COMMAND_SOUTHEAST); processMoveCommand(211, 0, -COMMAND_SOUTH);
	processMoveCommand(166, 0, -COMMAND_NORTH);
} int v14() {
	processMoveCommand(207, 0, -207); processMoveCommand(246, 0, -COMMAND_SOUTHWEST); processMoveCommand(214, 0, -COMMAND_NORTH);
	processMoveCommand(226, 0, COMMAND_SOUTHEAST, -226);
} int d18() { processMoveCommand(213, 0, COMMAND_SOUTH, COMMAND_EXIT, -627); } int t14() {
	processMoveCommand(LOCATION_MT_KING, 0, -COMMAND_EAST); processMoveCommand(216, 0, -COMMAND_DOWN); if (!currentCommandIsNotOneOf(COMMAND_WEST, -1)) return 0; if (object_type_3_buffer[20] == 0)
	{
		processMoveCommand(248, -2);
	} processMoveCommand(247, -2);
} int w14() {
	processMoveCommand(217, 0, -COMMAND_SOUTH); processMoveCommand(218, 0, -COMMAND_NORTH);
} int d19() { processMoveCommand(216, 0, -COMMAND_NORTH); } int v15() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(216, 0, -COMMAND_EAST);
	processMoveCommand(219, 0, -COMMAND_WEST); processMoveCommand(208, 0, COMMAND_NORTH, -627); processMoveCommand(483, 0, COMMAND_SOUTH, -COMMAND_ENTER);
} int q31() {
	if
		(currentCommandContains(125)) {
		if (currentCommandContains(571) || currentCommandContains(562)) { printMessage(64, 1616, 0); } printMessage(64, 915, 0);
	} processMoveCommand(218, 0, COMMAND_NORTH, -COMMAND_EXIT);
	if (currentCommandContains(COMMAND_ENTER)) { printMessage(64, 1575, 0); } if (currentCommandContains(535) && object_type_3_buffer[697] == 2) {
		if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1)))
		{
			printMessage(76, 1027, 670);
		} if (currentCommandContains(80)) { printMessage(0, 1565, 0); }
		else {
			if (currentCommandContains(100) &&
				isItemAtLocation(ITEM_BIRD, -1)) {
				printMessage(0, 1566, 0);
			}
			else {
				if (currentCommandContains(101)) {
					s9(101, PLAYER_LOCATION); l12(0, 101, 0);
					printMessage(64, 1567, 0);
				} if (currentCommandContains(95)) {
					if (object_type_3_buffer[95] == 1) { printMessage(0, 1569, 0); }
					else {
						printMessage(0, 1570, 0);
					}
				}
				else { if (currentCommandContains(53)) { printMessage(0, 1568, 0); } else { printMessage(12, 1564, 670); } }
			}
		} if
			(isObjectFlagSet(t11(710), 7)) {
			printMessage(0, 1572, 0);
		}
		else {
			printMessage(0, 1571, 0); modifyObjectFlag('s', t11(710), 7);
		} if (currentCommandContains(100) && isItemAtLocation(ITEM_BIRD, -1)) {
			printMessage(0, 1574, 0); s9(101, 149); l12(0, 101, 0);
		} printMessage(0, 1573, 0); if (currentCommandContains(80)) { modifyObjectFlag('s', 80, 5); } if (currentCommandContains(97) || currentCommandContains(108)) {
			printMessage(0, 1561, 0);
		}
		else {
			if (currentCommandContains(95)) { printMessage(0, 1563, 0); }
			else {
				if (currentCommandContains(53)) {
					printMessage(0, 1562, 0);
				}
				else { if (isObjectFlagSet(t11(670), 5)) { printMessage(0, 1559, 0); } else { printMessage(0, 1560, 0); } }
			}
		}
		s9(object_type_3_buffer[670], 485); if (currentCommandContains(111)) { l12(0, 111, 2); } if (currentCommandContains(114)) {
			l12(0, 114, 2);
		} longjmp(done_with_command, 1);
	} if (currentCommandContains(637)) {
		if (currentCommandContains(571)) { printMessage(64, 1576, 0); } printMessage(64, 915, 0);
	}
} int q13() { processMoveCommand(218, 0, -COMMAND_SOUTH); } int v12() {
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
v40() { processMoveCommand(159, 0, COMMAND_EAST, COMMAND_DOWN, -COMMAND_CLIMB); processMoveCommand(222, 0, -COMMAND_WEST); } int f24() {
	if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; processMoveCommand(159, -1); v37();
} int o8() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(224, 0, COMMAND_NORTH, 224, -625);
	processMoveCommand(213, 1112, COMMAND_DOWN, -COMMAND_CLIMB);
} int s13() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(220, 0, COMMAND_SOUTH, -249);
	processMoveCommand(322, 0, -COMMAND_EAST); processMoveCommand(223, 0, -COMMAND_NORTH);
} int v17() {
	if (currentCommandContains(571)) { return 0; }
	processMoveCommand(222, 0, COMMAND_SOUTH, -625); processMoveCommand(222, 0, -625); if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_ENTER, 224, -1)) return 0; if
		(object_type_3_buffer[6] == 0) {
		printMessage(64, 916, 0);
	} processMoveCommand(224, -2);
} int e11() {
	processMoveCommand(223, 0, COMMAND_SOUTH, -COMMAND_EXIT);
	processMoveCommand(221, 0, COMMAND_WEST, -221); if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_JUMP, -1)) return 0; if (y10(1166)) {
		modifyObjectFlag('c', 239, 8);
		l12(0, 701, 0); if (isItemAtLocation(ITEM_BIRD, -1)) { s9(101, 485); } *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1;
		while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
			if (isItemAtLocation(t11(object_type_3_buffer[675]), -1) && !(isObjectFlagSet(t11(675), 12)) &&
				object_type_3_buffer[675] != 99) {
				s9(object_type_3_buffer[675], 485); object_type_3_buffer[701] += 1;
			}
		} if (isItemAtLocation(99, -1)) {
			l12(0, 705, 1);
			l12(0, 701, 1);
		}
		else { l12(0, 705, 0); } printMessage(12, 1167, 705); if (object_type_3_buffer[701] > 0) {
			printMessage(12, 1168, 705);
		}
		else { printBlankLine(); } processMoveCommand(240, -1169);
	} printMessage(66, 719, 0);
} int c30() {
	processMoveCommand(429, 0, -COMMAND_EAST); processMoveCommand(392, 0, -COMMAND_SOUTHEAST); processMoveCommand(208, 0, COMMAND_WEST, COMMAND_EXIT, -208); if
		(!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_NORTHWEST, COMMAND_NORTHEAST, -1)) return 0; printMessage(64, 1248, 0);
} int s32() {
	if
		(currentCommandContains(571)) {
		if (currentCommandContains(661)) { printMessage(64, 1596, 0); } if (currentCommandContains(40)) {
			printMessage(76, 1546, 670);
		}
	}
} int l18() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(208, 0, -COMMAND_SOUTHEAST); processMoveCommand(213, 0, COMMAND_WEST, -627);
	processMoveCommand(213, 0, -627); processMoveCommand(230, 0, COMMAND_NORTH, COMMAND_UP, -224);
} int s14() {
	processMoveCommand(226, 0, COMMAND_SOUTH, -226);
	processMoveCommand(227, 0, -COMMAND_WEST); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return 0; processMoveCommand(224, -1); v37();
} int t15()
{
	processMoveCommand(230, 0, COMMAND_NORTHWEST, -224); if (!currentCommandIsOneOf(COMMAND_EAST, 625, 228, -1)) return 0; l12(1, 699, 705);
	if (isItemAtLocation(55, -1)) { object_type_3_buffer[699] -= 1; } if (isItemAtLocation(58, -1)) { object_type_3_buffer[699] -= 1; } if (object_type_3_buffer[699] == 0)
	{
		processMoveCommand(228, -2);
	} *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)
			&& !(isObjectFlagSet(t11(675), 12))) {
			printMessage(64, 922, 0);
		}
	} processMoveCommand(228, -2);
} int t16() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(229, 0, COMMAND_NORTHEAST, 229, -COMMAND_ENTER); if (currentCommandContains(228)) {
		if (isItemAtLocation(55, -1)) {
			s9(55, PLAYER_LOCATION);
			printMessage(0, 1581, 0);
		} processMoveCommand(LOCATION_Y2, -2);
	} if (!currentCommandIsOneOf(COMMAND_WEST, 625, 227, -1)) return 0; l12(1, 699, 705);
	if (isItemAtLocation(55, -1)) { object_type_3_buffer[699] -= 1; } if (isItemAtLocation(58, -1)) { object_type_3_buffer[699] -= 1; } if (object_type_3_buffer[699] == 0)
	{
		processMoveCommand(227, -2);
	} *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)
			&& !(isObjectFlagSet(t11(675), 12))) {
			printMessage(64, 922, 0);
		}
	} processMoveCommand(227, -2);
} int e12() {
	processMoveCommand(228, 0, COMMAND_SOUTH, COMMAND_EXIT, -228);
	if (!currentCommandIsNotOneOf(124, -1)) return 0; if (currentCommandContains(562) || currentCommandContains(571)) { printMessage(64, 1010, 0); } printMessage(76, 1546, 124);
} int i19() { processMoveCommand(232, 0, COMMAND_DOWN, -232); processMoveCommand(370, 0, COMMAND_EAST, -COMMAND_UP); } int p17() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(231, 0, COMMAND_UP, COMMAND_WEST, -628); processMoveCommand(233, 0, COMMAND_DOWN, -249); if (!currentCommandIsOneOf(COMMAND_SOUTH, 202, -1))
		return 0; if (isItemAtLocation(106, -1)) { printMessage(76, 923, 106); } if (isItemAtLocation(107, -1)) {
		printMessage(76, 923, 107);
	} processMoveCommand(202, -2);
} int f6() { processMoveCommand(232, 0, COMMAND_UP, -232); processMoveCommand(234, 0, -COMMAND_DOWN); } int m10()
{
	if (currentCommandContains(571)) { return 0; } processMoveCommand(233, 0, COMMAND_UP, COMMAND_EXIT, -249); processMoveCommand(232, 0, -232);
} int
e13() {
	processMoveCommand(413, 0, -COMMAND_NORTHEAST); processMoveCommand(203, 0, -COMMAND_SOUTH); processMoveCommand(202, 0, -COMMAND_UP); processMoveCommand(207, 0, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_EAST)) { modifyObjectFlag('c', t11(735), 2); processMoveCommand(236, -2); } u28();
} int t19() {
	processMoveCommand(302, 0, -COMMAND_SOUTH);
	processMoveCommand(303, 0, -COMMAND_SOUTHWEST); processMoveCommand(304, 0, -COMMAND_NORTHEAST); processMoveCommand(305, 0, -COMMAND_SOUTHEAST); processMoveCommand(306, 0, -COMMAND_UP); processMoveCommand(307, 0, -COMMAND_NORTHWEST);
	processMoveCommand(308, 0, -COMMAND_EAST); processMoveCommand(309, 0, -COMMAND_WEST); processMoveCommand(310, 0, -COMMAND_NORTH); processMoveCommand(195, 0, -COMMAND_DOWN);
} int q14()
{
	if (currentCommandContains(COMMAND_WEST)) { modifyObjectFlag('c', t11(735), 2); processMoveCommand(236, -2); } if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_EAST, COMMAND_UP, COMMAND_DOWN, COMMAND_NORTHEAST, COMMAND_NORTHWEST, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, -1))
		return 0; if (isObjectFlagSet(t11(735), 2)) { l12(0, 700, 50); }
		else { l12(0, 700, 95); }
		if (cheezy_rand(100) < object_type_3_buffer[700]) { processMoveCommand(236, -2); } processMoveCommand(235, -2);
} int e14() {
	processMoveCommand(210, 0, -COMMAND_SOUTH);
	processMoveCommand(239, 0, COMMAND_NORTH, -239); if (!currentCommandIsOneOf(10, 641, -1)) return 0; printMessage(64, 950, 0);
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
