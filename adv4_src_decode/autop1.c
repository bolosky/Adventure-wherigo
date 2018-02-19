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
		
		if (m1(528)) {
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
		if (m1(557)) {
			s9(object_type_3_buffer[670], PLAYER_LOCATION);
		} if (g10(134, -1)) {
			l12(1, 699, 721); object_type_3_buffer[699] -= object_type_3_buffer[705]; object_type_3_buffer[699] *= 5; l12(1, 700, 134);
			object_type_3_buffer[700] += 2; object_type_3_buffer[700] *= 15; object_type_3_buffer[699] += object_type_3_buffer[700]; if (m1(115) || m1(547))
			{
				if (!(m1(115) && m1(547))) { object_type_3_buffer[699] += 15; }
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
				if (m1(557)) { s9(object_type_3_buffer[670], r5); } printMessage(64, 832, 0);
			} if (g10(20, -1)) { printMessage(76, 955, 670); } if (g10(38, -1)) {
				if (object_type_3_buffer[38] == 0) {
					if (m1(557)) {
						if (m1(115)) { l12(0, 115, 1); printMessage(64, 974, 0); } printMessage(64, 1102, 0);
					} if (cheezy_rand(100) < 50) { printMessage(64, 1103, 0); } printMessage(0, 1104, 0); die();
				} printMessage(76, 975, 38);
			} if (g10(22, -1)) { printMessage(64, 967, 0); } if (g10(24, -1)) {
				if (m1(547)) {
					printMessage(12, 1115, 670);
					die();
				} if (m1(115)) { printMessage(12, 1116, 670); die(); } modifyObjectFlag('c', 323, 8); s9(24, 485);
				s9(116, PLAYER_LOCATION); l12(0, 733, 6); modifyObjectFlag('c', 323, 5); printMessage(64, 1117, 0);
			} if (g10(17, -1))
			{
				printMessage(76, 1137, 670);
			} if (g10(25, -1)) {
				if (object_type_3_buffer[25] > 1) {
					if (m1(557)) {
						s9(object_type_3_buffer[670], r5);
					} printMessage(64, 976, 0);
				} printMessage(12, 1146, 670); die();
			} if (g10(27, -1)) {
				printMessage(76, 1147, 670);
			} if (g10(121, -1)) { printMessage(12, 1148, 670); die(); } if (g10(135, -1)) {
				printMessage(12, 1314, 670);
				die();
			} if (m1(557)) { s9(object_type_3_buffer[670], r5); return 0; } printMessage(12, 1489, 669); printMessage(76, 1490, 670);
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
	p9(485, -1);
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
	if (m1(101) || m1(38)) {
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
	else { printMessage(14, 677, 670); s9(object_type_3_buffer[670], object_type_3_buffer[676]); } if (m1(53)) {
		s9(53, 485);
		s9(54, object_type_3_buffer[676]); if (!(j0[54] == 485)) { printMessage(64, 1216, 0); }
	} if (object_type_3_buffer[PLAYER_LOCATION] == 151)
	{
		if (m1(44)) { l12(0, 154, 1); l12(0, 7, 1); printMessage(64, 1682, 0); }
	} if (m1(111))
	{
		if (object_type_3_buffer[111] == 3 || object_type_3_buffer[111] == 4) { modifyObjectFlag('s', t11(676), 15); }
	} if (m1(113) ||
		m1(112)) {
		l12(0, 700, 3); if (m1(113)) { l12(0, 700, 4); } if (isItemAtLocation(111, t11(object_type_3_buffer[700])))
		{
			l12(0, 111, 2);
		}
		else { if (isItemAtLocation(114, t11(object_type_3_buffer[700]))) { l12(0, 114, 2); } }
	} if
		(m1(100) && isItemAtLocation(ITEM_BIRD, -1)) {
		s9(101, object_type_3_buffer[676]); if (!(j0[101] == 485)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 151)
			{
				l12(0, 700, 1);
			}
			else { l12(0, 700, 0); printBlankLine(); } printMessage(12, 1543, 700);
		}
		longjmp(done_with_command, 1);
	} if (m1(99) && object_type_3_buffer[99] == 1) {
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
		} p9(419, -1); printMessage(2, 677, 0); die();
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
			} l12(0, 135, 5); p9(139, -1361);
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
					s9(110, 484); p9(412, -1309);
				}
				else {
					l12(0, 135, 1); object_type_3_buffer[757] = cheezy_rand(10 - 6 + 1) + 6; object_type_3_buffer[758] = cheezy_rand(10 - 8 + 1) + 8; p9(384, -1310);
				}
			}
		} if (object_type_3_buffer[135] == 1) {
			printMessage(8, 1305, 0); if (object_type_3_buffer[757] > 0) { p9(384, -1310); } printMessage(0, 1311, 0);
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
					printMessage(0, 1313, 0); printMessage(0, 1311, 0); p9(383, -1); l12(0, 135, 0);
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
		p9(object_type_3_buffer[679], -2);
	} if (object_type_3_buffer[679] == object_type_3_buffer[672]) { p9(object_type_3_buffer[678], -2); } printMessage(64, 799, 0);
} int h30() {
	if (isObjectFlagSet(8, 13)) { printMessage(0, 1488, 0); }
	else {
		printMessage(0, 1487, 0); modifyObjectFlag('s', 8, 13);
	}
} int i46() {
	if (object_type_3_buffer[91] > 1) {
		if (m1(554)) { printMessage(64, 867, 0); } if (m1(559))
		{
			printMessage(64, 1502, 0);
		} printMessage(64, 1501, 0);
	} printMessage(76, 818, 91);
} int v38() {
	l12(0, 117, 0);
	if (m1(557) && object_type_3_buffer[PLAYER_LOCATION] != 393 && !g10(121, -1)) { n24(); } printMessage(0, 1510, 0); s9(117, PLAYER_LOCATION);
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
	if (m1(120) || m1(125)) {
		if (m1(571) || m1(562)) {
			printMessage(64, 1397, 0);
		} printMessage(64, 915, 0);
	}
} int b30() {
	if (m1(527)) { printMessage(64, 1551, 0); } if (!(m1(641)))
	{
		return 0;
	} if (m1(571)) { printMessage(64, 1636, 0); } if (m1(556) || m1(564) ||
		m1(536) || m1(538)) {
		printMessage(76, 1637, 669);
	} printMessage(64, 915, 0);
} int x31() {
	if
		(m1(209)) {
		if (m1(571)) { printMessage(64, 1640, 0); } printMessage(64, 915, 0);
	}
} int x32()
{
	if (m1(5)) { printMessage(76, 1546, 5); }
} int h31() {
	if (object_type_3_buffer[717] == 5) {
		if (isObjectFlagSet(t11(717), 0))
		{
			printMessage(0, 1662, 0);
		}
		else { modifyObjectFlag('s', t11(717), 0); printMessage(0, 1661, 0); } p9(object_type_3_buffer[679], -2);
	} p9(object_type_3_buffer[678], -2);
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
		if (m1(106)) { s9(106, 485); s9(107, object_type_3_buffer[671]); s9(59, 234); printMessage(64, 927, 0); }
		printMessage(64, 928, 0);
	} printMessage(76, 926, 670);
} int c29() {
	if (m1(534) || m1(535)) {
		return 0;
	} f3(700, 3); if (object_type_3_buffer[700] == object_type_3_buffer[669]) { printMessage(64, 1485, 0); } if (m1(601))
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
	} if (!k3(643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, -1))
		return 0; printMessage(64, 776, 0);
} 

int command_outside_building_136() {
	if (m1(571)) {
		if (m1(141)) {
			printMessage(64, 1639, 0);
		} 
		return 0;
	} 
	p9(137, 0, 136, 520, -523); 
	p9(141, 0, 526, 141, -516); 
	p9(142, 0, 600, 626, 518, -524);
	p9(440, 0, 514, -622); 
	p9(458, 0, -515); 
	p9(460, 0, -517); 
	p9(450, 0, -519); 
	p9(457, 0, 521, -457);
	p9(138, 0, -138); 
	if (m1(144) || m1(619)) {
		f3(679, 461); 
		if (m1(144)) {
			f3(678, 144);
		} else { 
			f3(678, 140); 
		} 
		h31();
	} 
	
	if (m1(6)) { 
		printMessage(72, 1458, 526);  // The building may have had a proper door once, but if so, it is long gone.  If you want to get in, why not just go in?
	}
} 

int r32()
{
	if (m1(571)) { return 0; } p9(136, 0, 136, 141, -516); p9(457, 0, -514); p9(440, 0, 515, -622);
	p9(142, 0, -517); p9(450, 0, -518); p9(461, 0, -519); p9(438, 0, -521); if (!k3(520, 529, 598, -1))
		return 0; if (y10(1264)) { printMessage(0, 1265, 0); r7(); } printMessage(64, 1253, 0);
} int o26()
{
	u28(); if (!p2(538, 93, -1)) return 0; printMessage(76, 1129, 670);
} 

int f22() {
	if(m1(6)) {
		printMessage(72, 1458, 527); // The building may have had a proper door once, but if so, it is long gone.  If you want to get out, why not just go out?
	} 
	
	if (m1(639)) { 
		printMessage(64, 1586, 0); // I  really  don't know what you are getting at.  The spring is a source of water.  Nothing more to it.  If you want to get into the cave, I  suggest you look elsewhere.
	} 
	
	if (m1(638))
	{
		printMessage(64, 1585, 0); // No,  no...  a misunderstanding.  "Well house" does not imply a "well". It just means that the spring wells out within the house.  There is no  well to be seen here.  I hope I am making myself clear enough for you.
	} 
	
	if (!p2(571, 141, -1)) 
		return 0; 
	
	printMessage(64, 1639, 0);  // It's  no  architectural  miracle  - just a simple brick structure with no windows, serving as a well house for a large spring.
} 

int n26()
{
	if (m1(571)) { 
		return 0; 
	} 
	p9(136, 0, 136, 527, -520); 
	
	if (object_type_3_buffer[717] < 2) {
		p9(147, object_type_3_buffer[685], -497);
		p9(LOCATION_Y2, object_type_3_buffer[685], -501);
	} 
	
	if (!k3(626, 600, -1)) 
		return 0; 
	
	printMessage(64, 1026, 0);  // The  stream  flows out through a pair of 1 foot diameter sewer pipes.  It would be advisable to leave via the exit.
}

int f23() {
	if (m1(571)) { return 0; } p9(136, 0, 599, 514, 515, -521); p9(460, 0, -516);
	p9(454, 0, -517); p9(451, 0, -519); p9(450, 0, 520, -622); if (m1(523)) {
		if (cheezy_rand(100) < 50)
		{
			p9(450, -2);
		} p9(460, -2);
	} if (m1(141)) {
		f3(679, 143); f3(678, 136); h31();
	} if (m1(144)) { f3(679, 440); f3(678, 144); h31(); } if (!p2(528, 626, -1))
		return 0; f3(678, 136); f3(679, 143); n25();
} int t41() {
	if (!k3(518, 524, 600, -1))
		return 0; p9(143, -2);
} int j11() {
	if (m1(571)) { return 0; } if (object_type_3_buffer[143] > 0)
	{
		if (m1(141)) { f3(679, 436); f3(678, 136); h31(); } if (m1(144)) {
			f3(679, 142);
			f3(678, 144); h31();
		}
	}
	else { p9(136, 0, -141); p9(144, 0, -144); } p9(142, 0, 599, -514);
	p9(144, 0, 600, 640, 518, -144); p9(460, 0, -515); p9(454, 0, -516); p9(455, 0, -517);
	p9(452, 0, -519); p9(451, 0, 520, -622); p9(450, 0, -521); if (m1(523)) {
		if (cheezy_rand(100) < 50)
		{
			p9(451, -2);
		} p9(454, -2);
	} if (!k3(143, 626, 524, 526, -1)) return 0; if
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
	if (m1(571)) {
		return
			0;
	} p9(454, 0, -515); p9(455, 0, -516); p9(456, 0, -517); p9(436, 0, -518); p9(453, 0, -519);
	p9(452, 0, 520, -622); p9(451, 0, -521); if (m1(141)) {
		f3(679, 436); f3(678, 136);
		h31();
	} if (m1(523)) { if (cheezy_rand(100) < 50) { p9(455, -2); } p9(452, -2); } p9(143, 0, 599, 514, -143);
	if (!k3(526, 524, 526, -1)) return 0; if (object_type_3_buffer[4] == 1) { p9(145, -2); } printMessage(64, 899, 0);
} int p13() {
	if (m1(571)) { return 0; } p9(146, 0, 627, 146, 526, -520); p9(150, 0, -150);
	p9(147, 0, -147); if (!k3(523, 527, 527, 620, -1)) return 0; if (object_type_3_buffer[4] == 1) {
		p9(144, -2);
	} printMessage(64, 899, 0);
} int j12() {
	p9(145, 0, 527, 620, 623, -516); p9(147, 0, 526, 229, 520, -147);
	p9(150, 0, -150);
} int t13() {
	p9(145, 0, -623); p9(146, 0, 627, 146, 625, 213, -516);
	p9(148, 0, 148, 526, 523, -520); p9(150, 0, -150); if (object_type_3_buffer[4] == 1) {
		p9(144, 0, -144);
	}
	else { p9(145, 899, -144); } if (m1(497)) {
		if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
		{
			modifyObjectFlag('s', t11(710), 4); printMessage(64, 934, 0);
		} p9(141, -object_type_3_buffer[685]);
	} if (!p2(125, -1))
		return 0; if (m1(571) || m1(562)) { printMessage(64, 1614, 0); } printMessage(64, 915, 0);
} int
l16() {
	p9(145, 0, -623); p9(147, 0, 524, 516, -147); p9(149, 0, 526, 523, -520);
	p9(150, 0, -150); if (object_type_3_buffer[4] == 1) { p9(144, 0, -144); }
	else {
		p9(145, 899, -144);
	}
} int h9() {
	if (m1(571)) { return 0; } p9(145, 0, -623); p9(147, 0, -147);
	p9(148, 0, 148, -516); p9(150, 0, 625, 150, -520); if (object_type_3_buffer[4] == 1) {
		p9(144, 0, -144);
	}
	else { p9(145, 899, -144); }
} int u29() {
	if (object_type_3_buffer[154] == 0) {
		if (isItemAtLocation(44, -1))
		{
			s9(5, 484);
		}
		else { s9(5, 150); }
	} if (m1(571)) { return 0; } p9(145, 0, -623);
	p9(147, 0, -147); p9(149, 0, 625, -516); p9(151, 0, -524); if (object_type_3_buffer[4] == 1) {
		p9(144, 0, -144);
	}
	else { p9(145, 899, -144); } if (!k3(524, 150, 5, -1)) return 0; if (q8(5, -1))
	{
		p9(151, -2);
	} printMessage(0, 1014, 0); p9(151, -1); die();
} int y23() {
	if (!k3(520, 616, -1))
		return 0; if (m1(571)) { printMessage(64, 1025, 0); } printMessage(64, 1024, 0);
} int p37() {
	if
		(!p2(531, -1)) return 0; p9(151, -1); v37();
} int u9() {
	if (object_type_3_buffer[154] == 0)
	{
		if (isItemAtLocation(44, -1)) { s9(5, 484); l12(0, 151, 1); }
		else {
			s9(5, 150); l12(0, 151, 0);
		}
	} if (m1(571)) { return 0; } p9(154, 0, -518); p9(312, 0, -516); p9(152, 0, 529, 628, -520);
	p9(155, 0, 524, -514); p9(164, 0, -163); if (!k3(598, 523, 150, 618, 625, 5, -1)) return
		0; if (q8(5, -1)) { p9(150, -2); } printMessage(64, 1015, 0);
} int q37() {
	if (m1(571))
	{
		return 0;
	} p9(151, 0, 516, -628); if (!k3(529, 532, 520, -1)) return 0; if
		(object_type_3_buffer[8] == 0) {
		printMessage(64, 903, 0);
	} h30(); p9(153, -2);
} int u30() {
	if (m1(531))
	{
		if (object_type_3_buffer[8] == 1) { printMessage(64, 902, 0); } p9(224, -1); v37();
	} if (m1(9) && object_type_3_buffer[8] == 1)
	{
		s9(9, object_type_3_buffer[671]);
	}
} int c17() {
	p9(151, 0, 514, 527, -628); if (!p2(125, -1))
		return 0; if (m1(571) || m1(562)) { printMessage(76, 1615, 154); } printMessage(64, 915, 0);
} int
n27() {
	l12(0, 676, 0); if (m1(571)) { return 0; } if (!k3(5, 523, 516, -1))
		return 0; f3(676, 151);
} int m25() {
	if (m1(514)) { f3(676, 160); }
	else
	{
		if (m1(519) || m1(624)) { f3(676, 215); }
		else {
			if (m1(518)) {
				f3(676, 161);
			}
			else {
				if (m1(520)) { f3(676, 162); }
				else {
					if (m1(524)) {
						f3(676, 314);
					}
					else {
						if (m1(515)) { f3(676, 313); }
						else {
							if (m1(521)) {
								f3(676, 319);
							}
							else { if (m1(517)) { f3(676, 316); } }
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
	} if (m1(519) && cheezy_rand(100) < 66) {
		l12(1, 681, 676);
		printMessage(64, 843, 0);
	} p9(object_type_3_buffer[676], -2);
} int q10() {
	if (m1(571)) { return 0; }
	p9(157, 0, 516, -532); p9(209, 0, 520, -209); p9(159, 0, 524, -150); if (!p2(621, -1))
		return 0; printMessage(64, 950, 0);
} int n10() { p9(157, 0, 523, -527); } int c18() {
	p9(156, 0, 523, -527); if (m1(598)) {
		if (object_type_3_buffer[11] == 0) { printMessage(64, 1028, 0); } if
			(object_type_3_buffer[11] == 1) {
			p9(156, -1029);
		} if (!(isObjectFlagSet(220, 4))) { l12(0, 733, 2); } p9(220, -1030);
	} if (!p2(534, 11, -1)) return 0; printMessage(64, 920, 0);
} int p14() {
	p9(167, 0, -520);
	if (m1(531)) { if (object_type_3_buffer[8] == 1) { printMessage(64, 902, 0); } p9(224, -1); v37(); } if (m1(514))
	{
		p9(167, -1017);
	} if (m1(9) && object_type_3_buffer[8] == 1) { s9(9, object_type_3_buffer[671]); } if (!k3(529, 532, 516, -1))
		return 0; if (object_type_3_buffer[8] == 0) { printMessage(64, 903, 0); } h30(); p9(152, -2);
} int a10()
{
	if (m1(571)) { return 0; } p9(155, 0, 518, 527, -628); p9(LOCATION_Y2, 0, 514, -163);
	p9(198, 0, 524, -621); p9(198, 0, -621);
} int s12() {
	if (m1(571)) {
		return
			0;
	} p9(155, 0, 514, 527, -628); p9(395, 0, 524, -5); x32();
} int j13() {
	if (m1(571))
	{
		return 0;
	} p9(155, 0, 516, 527, -628); p9(196, 0, 520, -523);
} int n11() {
	p9(160, 0, -518); p9(164, 0, 516, -164); p9(165, 0, -520); if (!k3(501, 228, -1))
		return 0; if (object_type_3_buffer[697] == 2 && !m1(493)) { return 0; } if (m1(228)) {
		modifyObjectFlag('c', 228, 8);
		modifyObjectFlag('c', 227, 8); modifyObjectFlag('c', 229, 8); p9(228, -2);
	} if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
	{
		modifyObjectFlag('s', t11(710), 4); printMessage(64, 934, 0);
	} p9(141, -object_type_3_buffer[685]);
} int v11() {
	p9(LOCATION_Y2, 0, 524, -163);
	p9(151, 0, -523);
} int k6() {
	p9(LOCATION_Y2, 0, 516, -163); b30(); if (!p2(531, -1))
		return 0; printMessage(0, 1014, 0); p9(237, -1); die();
} int o6() {
	if (m1(571)) {
		return
			0;
	} p9(199, 0, 516, -627); p9(160, 0, 523, -621); p9(201, 0, -520); p9(207, 0, -207);
} int l17() {
	if (m1(571)) { return 0; } p9(198, 0, 520, -627); p9(200, 0, 524, 598, -150);
} int x13() {
	p9(199, 0, 523, 527, -598); if (!k3(143, 626, 524, 599, 600, -1)) return
		0; printMessage(64, 901, 0);
} int y11() {
	if (m1(571)) { return 0; } p9(198, 0, 516, -625);
	p9(202, 0, 524, -621); p9(207, 0, -207);
} int g13() {
	if (m1(571)) {
		return
			0;
	} p9(168, 0, 518, 523, 625, -598); p9(153, 0, -516); p9(194, 0, 520, -627); if
		(!p2(514, -1)) return 0; p9(153, -1017);
} int z7() {
	p9(167, 0, -523); p9(168, 0, -514);
	p9(169, 0, -516); p9(171, 0, -518); p9(178, 0, -520);
} int p15() {
	p9(168, 0, -520);
	p9(170, 0, -518); p9(171, 0, -516);
} int j14() {
	p9(169, 0, -516); p9(189, 0, -524);
	p9(173, 0, -518); p9(191, 0, -514);
} int r10() {
	p9(168, 0, -520); p9(169, 0, -514);
	p9(182, 0, -516); p9(185, 0, -518); p9(181, 0, 523, -524); p9(181, 0, -524);
} int
q11() { p9(171, 0, 527, -520); } int p16() { p9(171, 0, 527, -516); } int j15()
{
	p9(170, 0, 527, -523);
} int k7() { p9(173, 0, -516); p9(174, 0, -520); } int
d16() {
	p9(170, 0, -516); p9(172, 0, -520); p9(174, 0, -524); p9(175, 0, -518);
} int o5() {
	p9(172, 0, -520); p9(173, 0, -523); p9(175, 0, -516); p9(176, 0, -518);
} int r11() {
	p9(173, 0, -520); p9(174, 0, -516); p9(175, 0, -518); p9(176, 0, -523);
	p9(177, 0, -514); p9(188, 0, -524);
} int r12() {
	p9(174, 0, -520); p9(175, 0, -514);
	p9(183, 0, -518);
} int w12() { p9(176, 0, 527, -520); } int g14() {
	p9(175, 0, -520);
	p9(177, 0, -514); p9(190, 0, -524); p9(193, 0, -516);
} int g15() {
	p9(177, 0, 527, -523);
} int j17() {
	p9(149, 0, 524, -598); p9(177, 0, -520); p9(186, 0, -518); p9(179, 0, -514);
	p9(180, 0, -516);
} int i17() { p9(193, 0, 527, -516); } int z9() {
	p9(167, 0, 516, 523, -627);
	p9(195, 0, -520); p9(196, 0, 514, 524, -621);
} int h11() {
	p9(194, 0, -516); p9(196, 0, -514);
	p9(300, 0, -518);
} int w13() {
	p9(194, 0, -520); p9(197, 0, -514); p9(162, 0, -516);
	p9(195, 0, -518);
} int m8() { p9(196, 0, 527, -518); } int r13() {
	p9(201, 0, 523, -598);
	p9(207, 0, 520, -207); p9(232, 0, 514, -232); p9(235, 0, -516);
} int d17() {
	p9(202, 0, -516);
	p9(208, 0, -520); p9(209, 0, -209); if (m1(521)) {
		if (cheezy_rand(100) < 50) {
			printMessage(64, 843, 0);
		} p9(226, -2);
	} if (!k3(514, 518, 523, 524, -1)) return 0; if (cheezy_rand(100) < 65) {
		printMessage(64, 929, 0);
	} p9(235, 0, -524); if (cheezy_rand(100) < 75) {
		p9(213, 0, -514); p9(201, 0, -523);
		p9(209, 0, -518);
	}
	else {
		p9(212, 0, -514); p9(211, 0, -523); p9(218, 0, -518);
	}
} int o7() {
	p9(207, 0, -515); p9(157, 0, -520); p9(218, 0, -148); p9(225, 0, 516, -225);
	p9(226, 0, -226); if (!k3(521, 518, -1)) return 0; if (cheezy_rand(100) < 33) {
		p9(218, 0, -518);
		p9(226, 0, -521);
	}
	else { printMessage(64, 843, 0); }
} int m7() {
	if (m1(571)) {
		return
			0;
	} p9(208, 0, -516); p9(156, 0, 520, -532); p9(158, 0, 524, -150);
} int j18()
{
	p9(156, 0, -518); p9(210, 0, 523, -598); p9(207, 0, 514, -207); p9(207, 0, -207);
	x31();
} int i18() {
	p9(209, 0, 524, -209); p9(237, 0, 514, -10); p9(239, 0, -239);
	p9(247, 0, -518);
} int y12() {
	if (m1(571)) { return 0; } p9(212, 0, -514);
	p9(207, 0, 524, -625); p9(238, 0, -518);
} int f5() {
	p9(207, 0, -517); p9(211, 0, -518);
	p9(166, 0, -514);
} int v14() {
	p9(207, 0, -207); p9(246, 0, -519); p9(214, 0, -514);
	p9(226, 0, 517, -226);
} int d18() { p9(213, 0, 518, 527, -627); } int t14() {
	p9(155, 0, -516); p9(216, 0, -524); if (!p2(520, -1)) return 0; if (object_type_3_buffer[20] == 0)
	{
		p9(248, -2);
	} p9(247, -2);
} int w14() {
	p9(217, 0, -518); p9(218, 0, -514);
} int d19() { p9(216, 0, -514); } int v15() {
	if (m1(571)) { return 0; } p9(216, 0, -516);
	p9(219, 0, -520); p9(208, 0, 514, -627); p9(483, 0, 518, -526);
} int q31() {
	if
		(m1(125)) {
		if (m1(571) || m1(562)) { printMessage(64, 1616, 0); } printMessage(64, 915, 0);
	} p9(218, 0, 514, -527);
	if (m1(526)) { printMessage(64, 1575, 0); } if (m1(535) && object_type_3_buffer[697] == 2) {
		if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1)))
		{
			printMessage(76, 1027, 670);
		} if (m1(80)) { printMessage(0, 1565, 0); }
		else {
			if (m1(100) &&
				isItemAtLocation(ITEM_BIRD, -1)) {
				printMessage(0, 1566, 0);
			}
			else {
				if (m1(101)) {
					s9(101, PLAYER_LOCATION); l12(0, 101, 0);
					printMessage(64, 1567, 0);
				} if (m1(95)) {
					if (object_type_3_buffer[95] == 1) { printMessage(0, 1569, 0); }
					else {
						printMessage(0, 1570, 0);
					}
				}
				else { if (m1(53)) { printMessage(0, 1568, 0); } else { printMessage(12, 1564, 670); } }
			}
		} if
			(isObjectFlagSet(t11(710), 7)) {
			printMessage(0, 1572, 0);
		}
		else {
			printMessage(0, 1571, 0); modifyObjectFlag('s', t11(710), 7);
		} if (m1(100) && isItemAtLocation(ITEM_BIRD, -1)) {
			printMessage(0, 1574, 0); s9(101, 149); l12(0, 101, 0);
		} printMessage(0, 1573, 0); if (m1(80)) { modifyObjectFlag('s', 80, 5); } if (m1(97) || m1(108)) {
			printMessage(0, 1561, 0);
		}
		else {
			if (m1(95)) { printMessage(0, 1563, 0); }
			else {
				if (m1(53)) {
					printMessage(0, 1562, 0);
				}
				else { if (isObjectFlagSet(t11(670), 5)) { printMessage(0, 1559, 0); } else { printMessage(0, 1560, 0); } }
			}
		}
		s9(object_type_3_buffer[670], 485); if (m1(111)) { l12(0, 111, 2); } if (m1(114)) {
			l12(0, 114, 2);
		} longjmp(done_with_command, 1);
	} if (m1(637)) {
		if (m1(571)) { printMessage(64, 1576, 0); } printMessage(64, 915, 0);
	}
} int q13() { p9(218, 0, -518); } int v12() {
	p9(168, 0, -514); p9(178, 0, 520, -518);
	p9(184, 0, -516);
} int h10() { p9(178, 0, 520, -527); } int e10() {
	p9(170, 0, 527, -518);
} int v13() { p9(193, 0, -518); p9(180, 0, -516); p9(187, 0, -520); } int z8()
{
	p9(193, 0, -514); p9(179, 0, -520); p9(192, 0, -521);
} int n12() {
	p9(179, 0, 527, -516);
} int q12() { p9(175, 0, 527, -523); } int c19() { p9(171, 0, 523, -524); } int
v40() { p9(159, 0, 516, 524, -598); p9(222, 0, -520); } int f24() {
	if (!p2(531, -1))
		return 0; p9(159, -1); v37();
} int o8() {
	if (m1(571)) { return 0; } p9(224, 0, 514, 224, -625);
	p9(213, 1112, 524, -598);
} int s13() {
	if (m1(571)) { return 0; } p9(220, 0, 518, -249);
	p9(322, 0, -516); p9(223, 0, -514);
} int v17() {
	if (m1(571)) { return 0; }
	p9(222, 0, 518, -625); p9(222, 0, -625); if (!k3(514, 526, 224, -1)) return 0; if
		(object_type_3_buffer[6] == 0) {
		printMessage(64, 916, 0);
	} p9(224, -2);
} int e11() {
	p9(223, 0, 518, -527);
	p9(221, 0, 520, -221); if (!k3(524, 531, -1)) return 0; if (y10(1166)) {
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
		else { printBlankLine(); } p9(240, -1169);
	} printMessage(66, 719, 0);
} int c30() {
	p9(429, 0, -516); p9(392, 0, -517); p9(208, 0, 520, 527, -208); if
		(!k3(514, 518, 519, 521, 515, -1)) return 0; printMessage(64, 1248, 0);
} int s32() {
	if
		(m1(571)) {
		if (m1(661)) { printMessage(64, 1596, 0); } if (m1(40)) {
			printMessage(76, 1546, 670);
		}
	}
} int l18() {
	if (m1(571)) { return 0; } p9(208, 0, -517); p9(213, 0, 520, -627);
	p9(213, 0, -627); p9(230, 0, 514, 523, -224);
} int s14() {
	p9(226, 0, 518, -226);
	p9(227, 0, -520); if (!p2(531, -1)) return 0; p9(224, -1); v37();
} int t15()
{
	p9(230, 0, 521, -224); if (!k3(516, 625, 228, -1)) return 0; l12(1, 699, 705);
	if (isItemAtLocation(55, -1)) { object_type_3_buffer[699] -= 1; } if (isItemAtLocation(58, -1)) { object_type_3_buffer[699] -= 1; } if (object_type_3_buffer[699] == 0)
	{
		p9(228, -2);
	} *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)
			&& !(isObjectFlagSet(t11(675), 12))) {
			printMessage(64, 922, 0);
		}
	} p9(228, -2);
} int t16() {
	if (m1(571))
	{
		return 0;
	} p9(229, 0, 515, 229, -526); if (m1(228)) {
		if (isItemAtLocation(55, -1)) {
			s9(55, PLAYER_LOCATION);
			printMessage(0, 1581, 0);
		} p9(LOCATION_Y2, -2);
	} if (!k3(520, 625, 227, -1)) return 0; l12(1, 699, 705);
	if (isItemAtLocation(55, -1)) { object_type_3_buffer[699] -= 1; } if (isItemAtLocation(58, -1)) { object_type_3_buffer[699] -= 1; } if (object_type_3_buffer[699] == 0)
	{
		p9(227, -2);
	} *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)
			&& !(isObjectFlagSet(t11(675), 12))) {
			printMessage(64, 922, 0);
		}
	} p9(227, -2);
} int e12() {
	p9(228, 0, 518, 527, -228);
	if (!p2(124, -1)) return 0; if (m1(562) || m1(571)) { printMessage(64, 1010, 0); } printMessage(76, 1546, 124);
} int i19() { p9(232, 0, 524, -232); p9(370, 0, 516, -523); } int p17() {
	if (m1(571))
	{
		return 0;
	} p9(231, 0, 523, 520, -628); p9(233, 0, 524, -249); if (!k3(518, 202, -1))
		return 0; if (isItemAtLocation(106, -1)) { printMessage(76, 923, 106); } if (isItemAtLocation(107, -1)) {
		printMessage(76, 923, 107);
	} p9(202, -2);
} int f6() { p9(232, 0, 523, -232); p9(234, 0, -524); } int m10()
{
	if (m1(571)) { return 0; } p9(233, 0, 523, 527, -249); p9(232, 0, -232);
} int
e13() {
	p9(413, 0, -515); p9(203, 0, -518); p9(202, 0, -523); p9(207, 0, -520);
	if (m1(516)) { modifyObjectFlag('c', t11(735), 2); p9(236, -2); } u28();
} int t19() {
	p9(302, 0, -518);
	p9(303, 0, -519); p9(304, 0, -515); p9(305, 0, -517); p9(306, 0, -523); p9(307, 0, -521);
	p9(308, 0, -516); p9(309, 0, -520); p9(310, 0, -514); p9(195, 0, -524);
} int q14()
{
	if (m1(520)) { modifyObjectFlag('c', t11(735), 2); p9(236, -2); } if (!k3(514, 518, 516, 523, 524, 515, 521, 517, 519, -1))
		return 0; if (isObjectFlagSet(t11(735), 2)) { l12(0, 700, 50); }
		else { l12(0, 700, 95); }
		if (cheezy_rand(100) < object_type_3_buffer[700]) { p9(236, -2); } p9(235, -2);
} int e14() {
	p9(210, 0, -518);
	p9(239, 0, 514, -239); if (!k3(10, 641, -1)) return 0; printMessage(64, 950, 0);
} int a11()
{
	p9(212, 0, -520); b30(); if (!p2(531, -1)) return 0; printMessage(0, 1014, 0); p9(237, -1);
	die();
} int n14() {
	p9(211, 0, -514); if (m1(524) && cheezy_rand(100) < 67) {
		if (cheezy_rand(100) < 50)
		{
			p9(176, -2);
		} p9(171, -2);
	} if (!k3(531, 598, 524, -1)) return 0; p9(173, -2);
} int q18() {
	p9(302, 0, -519); p9(303, 0, -514); p9(304, 0, -516); p9(305, 0, -521);
	p9(306, 0, -517); p9(307, 0, -515); p9(308, 0, -520); p9(309, 0, -524); p9(310, 0, -523);
	p9(311, 0, -518);
}
