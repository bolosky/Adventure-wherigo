/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int d34() {
	if (isObjectFlagSet(t11(670), 16)) {
		z5(700, 670); if (object_type_3_buffer[700] > 1) {
			if (m1(64))
			{
				l12(0, 64, 1);
			}
			else { printMessage(76, 1606, 670); }
		}
	}
} int w24() {
	if (object_type_3_buffer[697] == 1)
	{
		if (g10(114, 4) || g10(111, 4) || q8(113, -1)) {
			modifyObjectFlag('s', t11(697), 5); printMessage(76, 1023, 113);
		} printMessage(76, 818, 113);
	} printMessage(64, 915, 0);
} int r26() {
	if (object_type_3_buffer[697] == 1) {
		if (g10(114, 3)
			|| g10(111, 3) || isObjectFlagSet(t11(671), 9)) {
			modifyObjectFlag('s', t11(697), 5); printMessage(76, 1023, 669);
		} printMessage(76, 818, 669);
	} printMessage(64, 915, 0);
} int b26() {
	l12(0, 699, 1); if (g10(99, 1)
		|| isObjectFlagSet(t11(671), 3)) {
		l12(0, 699, 0);
	}
	else {
		if (g10(95, 3)) {
			l12(0, 699, 0);
		}
	}
} int b27() { s9(101, 485); if (j0[7] == 155) { modifyObjectFlag('s', 155, 8); } } int a25()
{
	if (object_type_3_buffer[759] < 135) { printMessage(0, 868, 0); }
	else { printMessage(2, 699, 0); } object_type_3_buffer[699] = d2(150);
	object_type_3_buffer[759] += object_type_3_buffer[700]; object_type_3_buffer[759] += object_type_3_buffer[699]; if (object_type_3_buffer[759] > 1500) {
		l12(0, 759, 1500);
	} longjmp(done_with_command, 1);
} int p34() {
	object_type_3_buffer[715] += 1; if (j0[110] == 484 && object_type_3_buffer[w9] != 412)
	{
		s9(110, 412); modifyObjectFlag('c', 110, 4);
	}
} int a26() {
	l12(0, 686, 0); if (object_type_3_buffer[715] < 1)
	{
		return 0;
	} l12(1, 702, 760); object_type_3_buffer[702] *= 100; object_type_3_buffer[702] /= object_type_3_buffer[715]; object_type_3_buffer[702]
		*= object_type_3_buffer[134]; if (d2(100) < object_type_3_buffer[702]) {
		object_type_3_buffer[701] = d2(object_type_3_buffer[760]); object_type_3_buffer[701] += 1;
		*getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
			if (isObjectFlagSet(t11(675), 3) &&
				j0[object_type_3_buffer[675]] == 435) {
				object_type_3_buffer[701] -= 1; if (object_type_3_buffer[701] == 0) {
					l12(1, 686, 675); return
						0;
				}
			}
		}
	}
} int r27() {
	*getObjectPointer(703) = -1; object_type_3_buffer[703] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[703] <= OBJECT_TYPE_0_MAX_ID)
	{
		if (object_type_3_buffer[686] == 0) { a26(); } if (!(object_type_3_buffer[686] == 0)) {
			s9(object_type_3_buffer[686], object_type_3_buffer[671]); object_type_3_buffer[760]
				-= 1; b26(); if (object_type_3_buffer[699] == 0) { printMessage(2, 686, 0); } l12(0, 686, 0);
		} object_type_3_buffer[134] -=
			1; object_type_3_buffer[715] -= 1; if (object_type_3_buffer[134] == 0) { s9(134, 484); return 0; } object_type_3_buffer[704] -= 1;
		if (object_type_3_buffer[704] == 0) { return 0; }
	}
} int e24() {
	object_type_3_buffer[699] = d2(5); if (object_type_3_buffer[699] == 0)
	{
		f3(676, 168);
	}
	else {
		if (object_type_3_buffer[699] == 1) { f3(676, 192); }
		else {
			if (object_type_3_buffer[699] == 2)
			{
				f3(676, 151);
			}
			else {
				if (object_type_3_buffer[699] == 3) { f3(676, 212); }
				else {
					f3(676, 319);
				}
			}
		}
	} printMessage(0, 1230, 0); l12(0, 701, 0); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID)
	{
		if (q8(t11(object_type_3_buffer[675]), -1) && object_type_3_buffer[675] != 78 && isObjectFlagSet(t11(675), 3)) {
			printMessage(0, 1232, 0);
			s9(object_type_3_buffer[675], object_type_3_buffer[676]); l12(0, 701, 1);
		}
	} if (object_type_3_buffer[701] == 0) { printMessage(0, 1231, 0); }
	p9(object_type_3_buffer[676], -2);
} int j36() {
	*getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID)
	{
		if (q8(t11(object_type_3_buffer[675]), 1027)) { s9(object_type_3_buffer[675], object_type_3_buffer[676]); }
	}
} int e25() {
	*getObjectPointer(675) =
		-1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), 1039)) {
			printMessage(64, 1266, 0);
		}
	}
} int q36() {
	if (isObjectFlagSet(t11(670), 15)) {
		s9(object_type_3_buffer[670], w9); printMessage(12, 1489, 669);
		printMessage(76, 1490, 670);
	} f3(677, 1228); if (d2(100) < 10 && j0[78] == 393) {
		f3(677, 1229);
		s9(78, 419); s9(79, 485);
	} printMessage(12, 1544, 670); if (isObjectFlagSet(t11(670), 11)) {
		printMessage(11, 677, 1);
	}
	else { printMessage(11, 677, 0); } s9(object_type_3_buffer[670], 419); longjmp(done_with_command, 1);
} int l32() {
	if
		(object_type_3_buffer[733] == 11) {
		l12(0, 699, 0); return 0;
	} l12(1, 699, 733); if (object_type_3_buffer[699] == object_type_3_buffer[734])
	{
		if (d2(100) < 10) {
			l12(0, 701, 11); object_type_3_buffer[701] -= object_type_3_buffer[699]; object_type_3_buffer[700] = d2(object_type_3_buffer[701]);
			object_type_3_buffer[699] += object_type_3_buffer[700];
		}
		else { if (d2(100) < 80) { f3(699, 0); return 0; } }
	}
	else { l12(1, 734, 699); }
} int h23() {
	printMessage(0, 1297, 0); 
	printBlankLine(); 
	l12(1, 676, 671);
	object_type_3_buffer[701] = d2(3 - 1 + 1) + 1; if (d2(100) < 50) { object_type_3_buffer[676] += object_type_3_buffer[701]; }
	else {
		object_type_3_buffer[699]
			-= object_type_3_buffer[701];
	} if (isObjectFlagSet(t11(676), 3) || isObjectFlagSet(t11(676), 7) || isObjectFlagSet(t11(676), 5)) {
		l12(1, 676, 682);
	} s9(85, object_type_3_buffer[676]); if (g10(85, -1)) { s9(85, 205); }
} int
y20() {
	if (d2(100) < object_type_3_buffer[701]) { printMessage(0, 1520, 0); return 0; } if (d2(100) < object_type_3_buffer[700])
	{
		printMessage(0, 1299, 0); return 0;
	} b26(); if (object_type_3_buffer[699] == 0) { printMessage(0, 1298, 0); }
	else
	{
		if (g10(87, -1)) {
			printMessage(0, 1301, 0); l12(0, 733, 4); s9(87, 485); l12(0, 86, 1);
			if (object_type_3_buffer[115] == 2) { l12(0, 115, 0); }
		}
		else {
			if (g10(134, -1)) {
				printMessage(0, 1301, 0);
				l12(1, 704, 134); r27();
			}
			else {
				if (g10(20, 0)) {
					printMessage(0, 1467, 0); s9(85, 485);
				}
				else { printMessage(0, 1300, 0); }
			}
		} t10(682, 85); s9(85, object_type_3_buffer[671]);
	}
} int z24() {
	l12(1, 702, 670); if (object_type_3_buffer[697] == 1 || (513 <= object_type_3_buffer[669] && object_type_3_buffer[669] <= 522)) {
		l12(1, 702, 669);
	} if (object_type_3_buffer[701] == 0) { modifyObjectFlag('s', t11(671), 8); p9(object_type_3_buffer[678], -1); }
	else {
		if (object_type_3_buffer[701] == object_type_3_buffer[702])
		{
			p9(object_type_3_buffer[678], -2);
		} p9(object_type_3_buffer[679], -2);
	}
} int j37() {
	if (isObjectFlagSet(t11(671), 7))
	{
		f3(699, 1695); l12(0, 700, 200); a25();
	} object_type_3_buffer[759] = d2(750 - 600 + 1) + 600; s9(81, 485);
	modifyObjectFlag('s', t11(710), 10); if (isObjectFlagSet(64, 4)) { printMessage(64, 1360, 0); } printMessage(0, 1271, 0); if (y10(1272))
	{
		s9(82, object_type_3_buffer[671]); printMessage(64, 1276, 0);
	} printMessage(64, 1273, 0);
} int x28() {
	l12(0, 701, 1);
	b26(); if (object_type_3_buffer[699] == 1) { return 0; } l12(0, 701, 0); if (isObjectFlagSet(t11(697), 7) ||
		object_type_3_buffer[717] > 0 || isObjectFlagSet(t11(671), 7) || isObjectFlagSet(t11(671), 5) || isObjectFlagSet(t11(671), 11) || isObjectFlagSet(19, 13)
		|| g10(134, -1) || g10(20, -1) || g10(22, -1) || g10(7, -1) || g10(32, -1) ||
		object_type_3_buffer[714] > 0) {
		l12(0, 701, 1);
	}
} int i41() {
	object_type_3_buffer[756] -= 1; if (object_type_3_buffer[756] < 1 &&
		d2(100) < 25) {
		x28(); if (object_type_3_buffer[701] == 1) { return 0; } l12(0, 755, -1); if (!(isObjectFlagSet(t11(755), 0)
			|| d2(100) < 75 || j0[81] == 485 || isObjectFlagSet(64, 4))) {
			l12(0, 755, 0); modifyObjectFlag('s', t11(755), 0);
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 1) || d2(100) < 75 || isObjectFlagSet(385, 4))) {
				l12(0, 755, 1); modifyObjectFlag('s', t11(755), 1);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 9)
				|| d2(100) < 75 || isObjectFlagSet(119, 4) || !(isObjectFlagSet(116, 4)))) {
				l12(0, 755, 9); modifyObjectFlag('s', t11(755), 9);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 2) || d2(100) < 75 || isObjectFlagSet(253, 4) ||
				!(isObjectFlagSet(250, 4)))) {
				l12(0, 755, 2); modifyObjectFlag('s', t11(755), 2);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 3) || d2(100) < 75 || !(isObjectFlagSet(259, 4)) || isObjectFlagSet(27, 13))) {
				l12(0, 755, 3);
				modifyObjectFlag('s', t11(755), 3);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 4) || d2(100) < 75
				|| isObjectFlagSet(253, 4))) {
				l12(0, 755, 4); modifyObjectFlag('s', t11(755), 4);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 6) || d2(100) < 75 || j0[95] == 140 || !(isObjectFlagSet(95, 4)))) {
				l12(0, 755, 6);
				modifyObjectFlag('s', t11(755), 6);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 7) || d2(100) < 75
				|| isObjectFlagSet(462, 4) || !(isObjectFlagSet(271, 4)))) {
				l12(0, 755, 7); modifyObjectFlag('s', t11(755), 7);
			}
		} if
			(object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 8) || d2(100) < 75 || !(isObjectFlagSet(324, 4)))) {
				l12(0, 755, 8);
				modifyObjectFlag('s', t11(755), 8);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 11) || d2(100) < 75
				|| isObjectFlagSet(58, 4) || isObjectFlagSet(228, 8))) {
				l12(0, 755, 11); modifyObjectFlag('s', t11(755), 11);
			}
		} if (object_type_3_buffer[755] == -1)
		{
			if (!(isObjectFlagSet(t11(755), 10) || d2(100) < 75 || !(isObjectFlagSet(35, 4)))) {
				l12(0, 755, 10);
				modifyObjectFlag('s', t11(755), 10);
			}
		} if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 12) || d2(100) < 75
				|| !(isObjectFlagSet(415, 4)) || isObjectFlagSet(420, 4))) {
				l12(0, 755, 12); modifyObjectFlag('s', t11(755), 12);
			}
		}
		if (object_type_3_buffer[755] == -1) {
			if (!(isObjectFlagSet(t11(755), 5) || d2(100) < 85)) {
				l12(0, 755, 5);
				modifyObjectFlag('s', t11(755), 5);
			}
		} object_type_3_buffer[756] = d2(100 - 20 + 1) + 20; if (object_type_3_buffer[755] > -1) {
			f3(677, 1280);
			object_type_3_buffer[677] += object_type_3_buffer[755]; 
			printBlankLine(); 
			printMessage(2, 677, 0); object_type_3_buffer[756] += 100;
		}
	}
} int a27()
{
	if (d2(100) < 20) { p9(434, -2); } p9(432, -2);
} int u23() {
	if (isObjectFlagSet(116, 13))
	{
		printMessage(64, 1333, 0);
	} modifyObjectFlag('s', 116, 13); printMessage(64, 1332, 0);
} int e26() {
	if (object_type_3_buffer[715] < 1)
	{
		return 0;
	} l12(0, 700, 0); modifyObjectFlag('s', 95, 15); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while
		(++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isObjectFlagSet(t11(675), 3)) {
			modifyObjectFlag('c', t11(675), 14); if (isObjectFlagSet(t11(675), 4)
				&& !(isObjectFlagSet(t11(675), 15)) && !g10(t11(object_type_3_buffer[675]), -1)) {
				t10(676, 675); if (!(isObjectFlagSet(t11(676), 7)
					|| isObjectFlagSet(t11(676), 5))) {
					if (!(isObjectFlagSet(t11(676), 10))) {
						object_type_3_buffer[700] += 1; modifyObjectFlag('s', t11(675), 14);
					}
				}
			}
		}
	} modifyObjectFlag('c', 95, 15); if (object_type_3_buffer[700] > 0) {
		object_type_3_buffer[701] = d2(object_type_3_buffer[700]); object_type_3_buffer[701] +=
			1; *getObjectPointer(674) = -1; object_type_3_buffer[674] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[674] <= OBJECT_TYPE_0_MAX_ID) {
			if (object_type_3_buffer[701] > 0 &&
				isObjectFlagSet(t11(674), 3) && isObjectFlagSet(t11(674), 14)) {
				object_type_3_buffer[701] -= 1; if (object_type_3_buffer[701] == 0) {
					t10(676, 674);
					l12(1, 675, 674);
				}
			}
		} l12(1, 699, 760); object_type_3_buffer[699] *= 100; object_type_3_buffer[699] /= object_type_3_buffer[715];
		object_type_3_buffer[699] *= object_type_3_buffer[134]; if (d2(100) < object_type_3_buffer[699]) {
			if (!(isObjectFlagSet(t11(675), 5))) {
				return
					0;
			} object_type_3_buffer[701] = d2(object_type_3_buffer[760]); object_type_3_buffer[701] += 1; *getObjectPointer(674) = -1; object_type_3_buffer[674] = OBJECT_TYPE_0_MIN_ID - 1; while
				(++object_type_3_buffer[674] <= OBJECT_TYPE_0_MAX_ID) {
				if (object_type_3_buffer[701] > 0 && j0[object_type_3_buffer[674]] == 435) {
					object_type_3_buffer[701] -= 1; if
						(object_type_3_buffer[701] == 0) {
						if (isObjectFlagSet(t11(674), 5) || object_type_3_buffer[674] == object_type_3_buffer[686]) { return 0; } object_type_3_buffer[760]
							-= 1; s9(object_type_3_buffer[674], object_type_3_buffer[676]);
					}
				}
			}
		} object_type_3_buffer[760] += 1; s9(object_type_3_buffer[675], 435);
	}
} int a28()
{
	if (object_type_3_buffer[697] == 1) { l12(1, 700, 669); }
	else { l12(1, 700, 670); } if ((513 <= object_type_3_buffer[700]
		&& object_type_3_buffer[700] <= 522)) {
		object_type_3_buffer[700] += 4; f3(701, 522); if (!(object_type_3_buffer[700] < object_type_3_buffer[701])) {
			object_type_3_buffer[700] -= 8;
		} if (object_type_3_buffer[697] == 1) { b10(9, 700); }
		else { b10(10, 700); }
	}
}
int g32() {
	l12(0, 673, 0); if (object_type_3_buffer[697] == 1) { l12(1, 675, 669); }
	else {
		l12(1, 675, 670);
	} if (!(isObjectFlagSet(t11(675), 0))) { return 0; } if (g10(t11(object_type_3_buffer[675]), -1)) {
		return
			0;
	} if (m1(102)) {
		if (isObjectFlagSet(102, 4) && g10(104, -1) && !g10(102, -1)) {
			return
				0;
		}
	} if (!(isObjectFlagSet(t11(675), 13) || isObjectFlagSet(t11(675), 14))) { return 0; } if (m1(27))
	{
		return 0;
	} if (isObjectFlagSet(t11(675), 13)) { if (!(object_type_3_buffer[w9] == 378)) { return 0; } }
	else { if (!(object_type_3_buffer[w9] == 379)) { return 0; } } if (m1(534)) {
		if (m1(134)) {
			printMessage(64, 915, 0);
		} if (isObjectFlagSet(t11(675), 4)) { printMessage(76, 1378, 670); } if (object_type_3_buffer[705] < object_type_3_buffer[721])
		{
			modifyObjectFlag('s', t11(675), 4);
		}
		else { g12(); printMessage(64, 897, 0); }
	} t10(673, 675); s9(object_type_3_buffer[675], object_type_3_buffer[671]);
} int i42() {
	if (!(object_type_3_buffer[673] == 0)) {
		if (object_type_3_buffer[697] == 1) { l12(1, 675, 669); }
		else
		{
			l12(1, 675, 670);
		} if (!(isObjectFlagSet(t11(675), 0))) { return 0; } if (!(isItemAtLocation(t11(object_type_3_buffer[675]), -1)))
		{
			s9(object_type_3_buffer[675], object_type_3_buffer[673]);
		}
	}
} int r28() {
	if (object_type_3_buffer[w9] == 147 || object_type_3_buffer[w9] == 419 ||
		object_type_3_buffer[w9] == 370 || object_type_3_buffer[w9] == 380) {
		printMessage(64, 1377, 0);
	} printMessage(76, 829, 147);
} int u24()
{
	if (m1(534)) {
		if (q8(102, -1)) { return 0; } if (isItemAtLocation(104, -1)) {
			printMessage(76, 813, 670);
		} if (!(g10(104, -1))) {
			if (object_type_3_buffer[w9] == 379) {
				if (isObjectFlagSet(104, 4)) {
					printMessage(76, 1378, 670);
				}
			}
			else { return 0; }
		} if (object_type_3_buffer[705] < object_type_3_buffer[721]) {
			s9(104, r5); modifyObjectFlag('s', 104, 4);
			l12(0, 673, 0); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} g12(); printMessage(64, 897, 0);
	}
	if (m1(535) || m1(557)) {
		if (isItemAtLocation(ITEM_ROD,-1)) { return 0; } if (isItemAtLocation(104, -1))
		{
			s9(104, w9); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} printMessage(76, 1027, 670);
	} if
		(m1(547)) {
		if (isItemAtLocation(ITEM_ROD,-1) || isItemAtLocation(104, -1)) { printMessage(64, 828, 0); } printMessage(76, 1027, 670);
	} if (m1(571)) {
		if (g10(102, -1) && !isItemAtLocation(104, -1) || isItemAtLocation(ITEM_ROD,-1)) {
			printMessage(76, 1541, 670);
		}
		else {
			modifyObjectFlag('s', t11(697), 4); printMessage(0, 104, 0); modifyObjectFlag('c', t11(697), 4); longjmp(done_with_command, 1);
		}
	}
	else { printMessage(64, 1396, 0); }
} int k21() {
	if (!(object_type_3_buffer[717] == 3)) {
		printMessage(64, 1065, 0);
	} if (!(isItemAtLocation(107, -1))) { printMessage(64, 1066, 0); } if (isObjectFlagSet(107, 15)) {
		printMessage(64, 1397, 0);
	} printMessage(9, 1387, 20); if (y10(1388)) {
		modifyObjectFlag('s', 107, 15); object_type_3_buffer[707] += 20; printMessage(64, 1389, 0);
	} printMessage(64, 1398, 0);
} int e27() {
	if (object_type_3_buffer[718] == 0 || object_type_3_buffer[717] > 2) {
		l12(0, 708, 10);
	}
	else { l12(0, 708, 0); } l12(0, 709, 10); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while
		(++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isObjectFlagSet(t11(675), 5)) {
			if (j0[object_type_3_buffer[675]] == 141 || j0[object_type_3_buffer[675]] == 243)
			{
				object_type_3_buffer[708] += 15;
			}
			else { if (isObjectFlagSet(t11(675), 4)) { object_type_3_buffer[708] += 7; } } object_type_3_buffer[709]
				+= 15;
		}
	} if (j0[95] == 141) { object_type_3_buffer[708] -= 8; }
	else {
		if (j0[95] == 140) {
			object_type_3_buffer[708]
				+= 8;
		}
	} if (!(isObjectFlagSet(80, 5))) { object_type_3_buffer[709] += 15; } if (isObjectFlagSet(97, 4)) {
		object_type_3_buffer[708] +=
			1; if (j0[97] == 141) { object_type_3_buffer[708] += 1; }
	} if (j0[108] != 236) {
		object_type_3_buffer[708] += 1;
	} object_type_3_buffer[709] += 1; if (isObjectFlagSet(147, 4) || isObjectFlagSet(163, 4)) {
		object_type_3_buffer[708] += 20; if (isObjectFlagSet(324, 4))
		{
			object_type_3_buffer[708] += 10;
		} if (isObjectFlagSet(377, 4)) { object_type_3_buffer[708] += 10; } if (isObjectFlagSet(253, 4)) {
			object_type_3_buffer[708]
				+= 10;
		} if (isObjectFlagSet(290, 4)) { object_type_3_buffer[708] += 15; } if (isObjectFlagSet(27, 13)) {
			object_type_3_buffer[708] += 8;
		}
	} object_type_3_buffer[709] += 73; l12(1, 699, 717); object_type_3_buffer[699] *= 16; object_type_3_buffer[708] += object_type_3_buffer[699]; object_type_3_buffer[709]
		+= 96; l12(1, 702, 706); object_type_3_buffer[702] *= 10; object_type_3_buffer[708] -= object_type_3_buffer[702]; object_type_3_buffer[708] -= object_type_3_buffer[707];
	if (object_type_3_buffer[708] < 0) { l12(0, 708, 0); }
} int a29() {
	e27(); printMessage(13, 1033, 708); printMessage(13, 1035, 709);
	printMessage(13, 1036, 712); 
	printBlankLine();
	l12(1, 700, 708); if (object_type_3_buffer[708] < 30) {
		printMessage(0, 1041, 0);
		object_type_3_buffer[700] -= 30;
	}
	else {
		if (object_type_3_buffer[708] < 100) {
			printMessage(0, 1042, 0); object_type_3_buffer[700] -= 100;
		}
		else {
			if (object_type_3_buffer[708] < 200) { printMessage(0, 1043, 0); object_type_3_buffer[700] -= 200; }
			else {
				if (object_type_3_buffer[708] < 300)
				{
					printMessage(0, 1044, 0); object_type_3_buffer[700] -= 300;
				}
				else {
					if (object_type_3_buffer[708] < 400) {
						printMessage(0, 1045, 0);
						object_type_3_buffer[700] -= 400;
					}
					else {
						if (object_type_3_buffer[708] < 500) {
							printMessage(0, 1046, 0); object_type_3_buffer[700] -= 500;
						}
						else {
							if (object_type_3_buffer[708] < 600) { printMessage(0, 1047, 0); object_type_3_buffer[700] -= 600; }
							else {
								if (object_type_3_buffer[708] < 650)
								{
									printMessage(0, 1048, 0); object_type_3_buffer[700] -= 650;
								}
								else {
									if (object_type_3_buffer[708] < 660) {
										printMessage(0, 1049, 0);
										object_type_3_buffer[700] -= 660;
									}
									else { printMessage(0, 1050, 0); l12(0, 700, 0); }
								}
							}
						}
					}
				}
			}
		}
	} 
	printBlankLine();
	object_type_3_buffer[700] *= -1; if (object_type_3_buffer[700] > 0) {
		if (object_type_3_buffer[700] == 1) { printMessage(0, 1051, 0); }
		else {
			printMessage(13, 1052, 700); // To reach the next qualification level you need 50 more points.
		}
	} 
	printBlankLine();
	r7();
} int b28() {
	if (object_type_3_buffer[14] < 8) {
		object_type_3_buffer[14]
			= d2(8);
	} object_type_3_buffer[15] = d2(8); if (g10(99, 1)) { s9(15, 484); }
	else {
		s9(15, 256);
		if (object_type_3_buffer[w9] == 256 && !(isObjectFlagSet(t11(697), 0))) { 
			printMessage(0, 15, 0); // A glow of light is visible through the fog to the north.
		}
	}
} 

int die() {
	l12(0, 718, 0);
	g12(); 
	printBlankLine();

	modifyObjectFlag('c', t11(710), 3); 
	modifyObjectFlag('c', t11(710), 1); 
	modifyObjectFlag('c', 95, 13);
	
	if (object_type_3_buffer[95] == 2) { 
		l12(0, 95, 3); 
	} 
	
	if (object_type_3_buffer[w9] == 432 || object_type_3_buffer[w9] == 256) {
		p9(485, -1);
	} 
	l12(0, 17, 0); 
	s9(17, 484); 
	if (!(j0[121] == 485)) { 
		s9(121, 484); 
	} 
	
	if (object_type_3_buffer[25] == 1)
	{
		l12(0, 25, 0);
	} else { 
		if (object_type_3_buffer[25] == 3) { 
			l12(0, 25, 2); 
		} 
	} 
	
	s9(14, 255); 
	l12(0, 14, 8);
	
	if (object_type_3_buffer[43] > 1) { 
		l12(0, 43, 1); 
	} 

	if (object_type_3_buffer[35] == 1) {
		l12(0, 35, 0); 
		l12(0, 683, 0);
		modifyObjectFlag('c', 35, 13);
	} 
	
	object_type_3_buffer[706] += 1; 
	if (object_type_3_buffer[717] > 1) {
		if (object_type_3_buffer[717] == 2) {
			printMessage(0, 935, 0); // It  looks  as  though  you're dead.  Well, seeing as how it's so close to closing time anyway, I think we'll just call it a day.
		} else { 
			object_type_3_buffer[706] -= 1; 
		} 
		a29();
	} 
	
	f3(677, 885); 
	object_type_3_buffer[677] += object_type_3_buffer[706]; 
	object_type_3_buffer[677] += object_type_3_buffer[706]; 
	
	if (y10(object_type_3_buffer[677])) {
		object_type_3_buffer[677] += 1; 
		printMessage(2, 677, 0); 
		printBlankLine();
		f3(700, 894); 
		if (object_type_3_buffer[677] < object_type_3_buffer[700]) {
			if (isItemAtLocation(53, -1)) {
				s9(53, 485); 
				s9(54, r5);
			} 
			
			if (isItemAtLocation(111, -1)) { 
				l12(0, 111, 2); 
			} 
			
			if (isItemAtLocation(114, -1) && object_type_3_buffer[114] != 1) {
				l12(0, 114, 2);
			} 
			
			*getObjectPointer(675) = -1; 
			object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; 
			
			while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
				if (isItemAtLocation(t11(object_type_3_buffer[675]), -1))
				{
					s9(object_type_3_buffer[675], w9);
				}
			} 
			
			l12(0, 705, 0); 
			l12(0, 99, 0); 
			s9(14, 255); 
			l12(0, 14, 8);
			b28(); 
			p9(141, -1); 
			l12(0, 672, 0); 
			s9(99, 136); 
			
			if (object_type_3_buffer[698] == 0) {
				if (!(isObjectFlagSet(324, 4)))
				{
					t10(676, 39); 
					if (object_type_3_buffer[39] == 3 || !(isObjectFlagSet(t11(676), 7))) { 
						s9(99, 485); 
					}
				}
			} 
			s9(134, 484);
			l12(0, 134, 0); 
			modifyObjectFlag('c', 19, 13); 
			longjmp(done_with_command, 1);
		}
	} 
	a29();
} 

int w25() {
	b26();
	if (object_type_3_buffer[699] == 1) { 
		printMessage(0, 1594, 0); // As  you  creep  about  in  the  dark, you incatiously stumble over a rock outcrop and with an almighty >>>>>CRUNCH<<<<< split  your  head  on   a conveniently positioned sharp stone.
		die(); 
	}
} 

int t35() {
	if (g10(121, -1))
	{
		if (object_type_3_buffer[121] == 6) { die(); } object_type_3_buffer[121] += 1;
	}
} int j39() {
	l12(0, 701, 0);
	l12(0, 700, 1); 
	*getObjectPointer(675) = -1; 
	object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; 
	while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (q8(t11(object_type_3_buffer[675]), -1))
		{
			modifyObjectFlag('s', t11(675), 4); if (object_type_3_buffer[700] == 1 && !(isObjectFlagSet(t11(675), 10))) {
				l12(0, 700, 0);
				printBlankLine();
			} if (object_type_3_buffer[701] == 20) {
				l12(0, 701, 0); f3(674, 134); if (object_type_3_buffer[675] < object_type_3_buffer[674])
				{
					if (!(y10(1589))) { f3(675, 134); }
				} object_type_3_buffer[675] -= 1;
			}
			else {
				object_type_3_buffer[701] +=
					1; modifyObjectFlag('s', t11(675), 4); printMessage(2, 675, 0);
			}
		}
	}
} 

int y21() {
	printMessage(2, 671, 0); // Prints the location description

	if ((437 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 460)) {
		printMessage(0, 861, 0); // The  trees  of  the  forest  are  large  hardwood  oak and maple, with an occasional grove of pine or spruce.  There is quite a bit of undergrowth, 
								 // largely birch and ash saplings as well as nondescript bushes  of  various sorts.   This  time  of  year  visibility  is quite restricted by all the
								 // leaves, but travel is quite easy if you  detour  around  the  spruce  and berry bushes.
	} 

	if (object_type_3_buffer[700] > 0) {
		if (object_type_3_buffer[w9] == 463) {
			printMessage(2, 684, 0);
		} else { 
			if (object_type_3_buffer[w9] == 150 && object_type_3_buffer[151] == 0) 
			{ 
				printMessage(0, 1225, 0); // Rough stone steps lead down the pit.
			} 
		}
	} 

	if (isObjectFlagSet(t11(671), 15))
	{
		printMessage(0, 876, 0); // The ground here is damp.
	} 
	
	j39(); 
	
	if (isItemAtLocation(38, -1)) { 
		printMessage(0, 939, 0); // You are being followed by a very large, tame bear.
	} 
	t35();
} 

int i43()
{
	if (!g10(ITEM_BIRD, -1))
		return 0; 
	
	if (isItemAtLocation(ITEM_BIRD, -1)) { 
		printMessage(76, 813, 101); // You are already carrying the bird!
	} 

	if (object_type_3_buffer[101] == 1)
	{
		s9(100, r5); 
		modifyObjectFlag('s', 100, 4); 
		s9(101, r5); 
		printMessage(12, 1489, 669); 
		printMessage(64, 1514, 0); // You  the cage with the bird in it.
	} 
	
	if (isItemAtLocation(ITEM_CAGE, -1)) {
		if (isItemAtLocation(ITEM_ROD,-1)) { 
			printMessage(64, 815, 0); // The  bird  was  unafraid when you entered, but as you approach it becomes disturbed and you cannot catch it.
		} 
		modifyObjectFlag('c', 149, 8); 
		s9(101, r5);
		l12(0, 101, 1); 
		printMessage(64, 1495, 0);  // You catch the bird and put it into the cage.
	} 

	printMessage(64, 816, 0); // You  might  be  able to catch the bird, but you have no means of carrying it
} 

int i44() {
	if (!g10(ITEM_CAGE, -1))
		return 0; 
	
	if (isItemAtLocation(ITEM_CAGE, -1)) { 
		printMessage(76, 813, 100); // You are already carrying the cage!
	} 
	s9(100, r5); 
	printMessage(12, 1489, 669);

	if (object_type_3_buffer[101] == 1) { 
		s9(101, r5); 
		modifyObjectFlag('s', 101, 4); 
		printMessage(64, 1514, 0); 
	} 
	printMessage(76, 1490, 670);
} 

int t36() { 
	if (q8(134, -1)) { 
		printMessage(64, 921, 0); 
	} 
} 

int e28() {
	if (q8(78, -1))
	{
		if (object_type_3_buffer[705] < object_type_3_buffer[721]) {
			s9(78, r5); s9(79, 485); printMessage(12, 1489, 669); printMessage(76, 1490, 670);
		} g12(); printMessage(64, 897, 0);
	}
} int p35() {
	if (g10(95, -1) && object_type_3_buffer[705] < object_type_3_buffer[721]
		&& !isItemAtLocation(95, -1)) {
		if (object_type_3_buffer[95] == 0) {
			l12(0, 95, 1); s9(95, r5); printMessage(64, 1352, 0);
		} if (j0[95] == object_type_3_buffer[671]) {
			if (isObjectFlagSet(95, 13)) { printMessage(64, 1354, 0); } modifyObjectFlag('s', 95, 13);
			printMessage(64, 1353, 0);
		}
	}
} int k22() {
	if (isItemAtLocation(95, -1)) {
		s9(95, w9); modifyObjectFlag('c', 95, 13);
		b26(); if (object_type_3_buffer[95] > 1 || object_type_3_buffer[w9] == 324) {
			if (object_type_3_buffer[w9] == 324) { printMessage(0, 1454, 0); }
			else { printMessage(0, 1455, 0); } l12(0, 95, 3); if (g10(85, -1)) { h23(); } if (object_type_3_buffer[699] == 1)
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
		} if (object_type_3_buffer[w9] == 393) { e24(); } if (object_type_3_buffer[w9] == 204) {
			s9(95, 203);
		} longjmp(done_with_command, 1);
	}
} int k23() {
	if (!isItemAtLocation(97, -1)) return 0; if (!g10(34, -1))
		return 0; s9(97, w9); printMessage(64, 1385, 0);
} int s27() {
	if (!isItemAtLocation(ITEM_BIRD, -1)) return
		0; s9(101, w9); l12(0, 101, 0); if (g10(7, -1)) {
		s9(7, 485); modifyObjectFlag('c', 155, 8);
		printMessage(64, 819, 0);
	} if (g10(20, -1)) {
		if (object_type_3_buffer[20] == 0) {
			b27(); printMessage(64, 957, 0);
		} printMessage(76, 1492, 670);
	} if (g10(22, -1)) { printMessage(64, 958, 0); } if (g10(24, -1)) {
		b27(); printMessage(64, 959, 0);
	} if (g10(38, -1)) {
		if (object_type_3_buffer[38] == 0) {
			b27(); printMessage(64, 960, 0);
		} printMessage(64, 961, 0);
	} if (g10(25, -1) && object_type_3_buffer[25] < 2) {
		printMessage(0, 962, 0); b27(); die();
	} if (g10(134, -1)) { b27(); printMessage(13, 963, 134); longjmp(done_with_command, 1); } if (g10(87, -1))
	{
		b27(); printMessage(64, 964, 0);
	} if (object_type_3_buffer[w9] == 379) {
		if (!(j0[104] == 485)) {
			printMessage(0, 1384, 0);
			printMessage(0, 1372, 0); die();
		}
	} printMessage(12, 1492, 670); if (object_type_3_buffer[w9] == 393) { e24(); } longjmp(done_with_command, 1);
} int g33() {
	if (!isItemAtLocation(ITEM_CAGE, -1)) return 0; s9(100, w9); printMessage(12, 1489, 669); if
		(isItemAtLocation(ITEM_BIRD, -1)) {
		s9(101, w9); printMessage(0, 1514, 0); if (object_type_3_buffer[w9] == 204) {
			printBlankLine();
			printMessage(0, 1543, 0); // You  the cage with the bird in it.
			s9(101, 203);
		}
	}
	else { printMessage(12, 1490, 670); } if (object_type_3_buffer[w9] == 204)
	{
		s9(100, 203);
	} if (object_type_3_buffer[w9] == 393) { e24(); } longjmp(done_with_command, 1);
} int e29()
{
	if (!isItemAtLocation(53, -1)) return 0; s9(53, w9); if (object_type_3_buffer[w9] == 225) {
		printMessage(12, 1489, 669);
		printMessage(12, 1490, 670);
	}
	else {
		if (object_type_3_buffer[w9] == 204) {
			printMessage(0, 1216, 0); s9(53, 485); s9(54, 203);
		}
		else {
			if (isItemAtLocation(105, -1) || !g10(105, -1)) {
				l12(0, 53, 2); printMessage(0, 53, 0); s9(53, 485);
				s9(54, object_type_3_buffer[671]);
			}
			else { l12(0, 53, 1); printMessage(0, 53, 0); l12(0, 53, 0); }
		}
	} if (object_type_3_buffer[w9] == 393)
	{
		e24();
	} longjmp(done_with_command, 1);
} int h24() {
	if (object_type_3_buffer[670] == object_type_3_buffer[112]) {
		l12(0, 700, 3);
	}
	else { l12(0, 700, 4); } if (isItemAtLocation(111, t11(object_type_3_buffer[700]))) {
		l12(0, 111, 2); if (g10(134, -1)
			&& m1(557)) {
			modifyObjectFlag('s', 134, 14); if (object_type_3_buffer[134] == 1) { printMessage(76, 1062, 670); } printMessage(76, 1063, 670);
		} printMessage(76, 875, 670);
	} if (isItemAtLocation(114, t11(object_type_3_buffer[700]))) {
		l12(0, 114, 2); printMessage(64, 1367, 0);
	}
} int a30() {
	if (!isItemAtLocation(111, -1)) return 0; s9(111, w9); l12(0, 111, 2); if
		(object_type_3_buffer[w9] == 393) {
		printMessage(12, 1544, 670); printMessage(9, 1601, 0); s9(111, 419); e24();
	} if
		(object_type_3_buffer[w9] == 415) {
		s9(111, 419); printMessage(12, 1544, 670); printMessage(72, 1263, 0);
	} if (object_type_3_buffer[w9] == 204
		|| object_type_3_buffer[w9] == 418 || object_type_3_buffer[w9] == 417) {
		printMessage(12, 1544, 670); if (object_type_3_buffer[w9] == 204) {
			s9(111, 203);
			modifyObjectFlag('s', 203, 15); printMessage(72, 1076, 0);
		} s9(111, 419); printMessage(72, 1295, 0);
	} printMessage(12, 1489, 669);
	printMessage(12, 1491, 670); if (object_type_3_buffer[111] == 3) {
		modifyObjectFlag('s', t11(671), 15); printMessage(76, 1493, 112);
	} if (object_type_3_buffer[111] == 4) { modifyObjectFlag('s', t11(671), 15); printMessage(76, 1493, 113); } printMessage(64, 776, 0);
} int b29() {
	if (q8(113, -1)) {
		if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1))) {
			printMessage(76, 909, 113);
		} if (isItemAtLocation(111, 2)) { l12(0, 111, 4); printMessage(76, 912, 113); } if (isItemAtLocation(114, 2)) {
			l12(0, 114, 4);
			printMessage(76, 913, 113);
		} if (isItemAtLocation(111, -1) && isItemAtLocation(114, -1)) { printMessage(64, 1368, 0); } if (isItemAtLocation(111, -1))
		{
			printMessage(64, 910, 0);
		} printMessage(64, 1369, 0);
	}
} int s28() {
	if (!(isObjectFlagSet(t11(671), 9)))
	{
		return 0;
	} if (isItemAtLocation(81, -1)) {
		if (object_type_3_buffer[w9] == 412) {
			if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1)))
			{
				printMessage(64, 1268, 0);
			}
		}
		else {
			modifyObjectFlag('s', 81, 13); modifyObjectFlag('s', 81, 14); printMessage(64, 1269, 0);
		}
	} if (!(isItemAtLocation(111, -1) || isItemAtLocation(114, -1))) { printMessage(76, 909, 112); } if (isItemAtLocation(111, 2)) {
		l12(0, 111, 3); printMessage(76, 912, 112);
	} if (isItemAtLocation(114, 2)) {
		l12(0, 114, 3); printMessage(76, 913, 112);
	} if (isItemAtLocation(114, -1) && isItemAtLocation(111, -1)) { printMessage(64, 1368, 0); } if (isItemAtLocation(111, -1)) {
		printMessage(64, 910, 0);
	} printMessage(64, 1369, 0);
} int u25() {
	if (object_type_3_buffer[20] > 0) { printMessage(64, 976, 0); } if (y10(836))
	{
		l12(0, 20, 1); s9(60, 247); s9(117, 247); modifyObjectFlag('c', 20, 6); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1;
		while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) { if (q8(t11(object_type_3_buffer[675]), -1)) { s9(object_type_3_buffer[675], 247); } } p9(247, -1446);
	} printMessage(12, 1222, 669); printMessage(76, 1223, 670);
} int d35() {
	if (object_type_3_buffer[717] < 3) {
		b27();
		printMessage(64, 831, 0);
	} printMessage(64, 1399, 0);
} int h25() {
	if (y10(836)) {
		l12(1, 699, 721);
		object_type_3_buffer[699] -= object_type_3_buffer[705]; object_type_3_buffer[699] += 2; object_type_3_buffer[699] *= 10; if (d2(100) < object_type_3_buffer[699]) {
			l12(0, 704, 1); printMessage(0, 833, 0); r27(); longjmp(done_with_command, 1);
		} if (d2(100) < object_type_3_buffer[699])
		{
			printMessage(64, 834, 0);
		} printMessage(0, 835, 0); die();
	} printMessage(12, 1222, 669); printMessage(76, 1223, 670);
} int l33() {
	if (y10(836)) {
		if (d2(100) < 50) { printMessage(64, 1118, 0); } printMessage(0, 1119, 0);
		die();
	} printMessage(12, 1222, 669); printMessage(76, 1223, 670);
} int e30() {
	if (!g10(38, -1))
		return 0; if (isItemAtLocation(38, -1)) { printMessage(64, 1697, 0); } if (object_type_3_buffer[w9] == 299 && object_type_3_buffer[38] < 2)
	{
		printMessage(64, 978, 0);
	} s9(38, r5); printMessage(64, 1696, 0);
} int x29() {
	if (!g10(116, -1))
		return 0; if (object_type_3_buffer[116] == 0 && object_type_3_buffer[705] < object_type_3_buffer[721]) {
		if (object_type_3_buffer[119] == 2) {
			l12(0, 733, 5);
			object_type_3_buffer[116] += 1; s9(116, r5); modifyObjectFlag('c', 434, 8); printMessage(64, 1089, 0);
		} printMessage(64, 1090, 0);
	}
} int s29() {
	if (!g10(56, -1)) return 0; if (object_type_3_buffer[56] == 0 && object_type_3_buffer[705] < object_type_3_buffer[721])
	{
		s9(56, r5); l12(0, 56, 1); object_type_3_buffer[699] = d2(4); if (object_type_3_buffer[699] == 0) {
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
		} s9(37, 485); if (object_type_3_buffer[35] == 0) {
			printMessage(76, 1132, 683);
		} printMessage(64, 1133, 0);
	}
} int v37() {
	f3(677, 1018); object_type_3_buffer[677] += object_type_3_buffer[706]; printMessage(2, 677, 0);
	die();
} int j40() {
	modifyObjectFlag('s', t11(710), 2); x28(); if (object_type_3_buffer[701] == 1) {
		return
			0;
	} modifyObjectFlag('s', t11(697), 7); 
	printBlankLine();
	object_type_3_buffer[677] = d2(1199 - 1190 + 1) + 1190; printMessage(2, 677, 0);
} int j41() {
	printMessage(0, 936, 0); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID)
	{
		modifyObjectFlag('c', t11(675), 4); if (!(object_type_3_buffer[675] == 27)) {
			modifyObjectFlag('c', t11(675), 13); modifyObjectFlag('c', t11(675), 14);
		} if (isObjectFlagSet(t11(675), 3)) { if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)) { s9(object_type_3_buffer[675], w9); } }
	} s9(10, 379);
	modifyObjectFlag('s', 111, 13); l12(0, 111, 2); modifyObjectFlag('s', 11, 13); modifyObjectFlag('s', 107, 13); l12(0, 107, 0);
	modifyObjectFlag('s', 107, 7); modifyObjectFlag('c', 107, 15); modifyObjectFlag('s', 102, 13); modifyObjectFlag('s', 99, 13); l12(0, 99, 0);
	l12(0, 698, 0); modifyObjectFlag('s', 134, 13); l12(0, 134, 0); modifyObjectFlag('s', 104, 14); modifyObjectFlag('s', 7, 14);
	modifyObjectFlag('s', 100, 14); l12(0, 100, 1); modifyObjectFlag('s', 101, 14); l12(0, 101, 1); modifyObjectFlag('s', 105, 14);
	l12(0, 120, 2); *getObjectPointer(676) = -1; object_type_3_buffer[676] = OBJECT_TYPE_1_MIN_ID - 1; while (++object_type_3_buffer[676] <= OBJECT_TYPE_1_MAX_ID) {
		if (isObjectFlagSet(t11(676), 7))
		{
			modifyObjectFlag('c', t11(676), 4);
		}
	} modifyObjectFlag('s', 461, 4); modifyObjectFlag('s', 243, 4); l12(0, 717, 3); l12(0, 143, 1);
	l12(0, 716, 999); l12(0, 672, 0); p9(378, -2);
} int i45() {
	*getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1;
	while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (isObjectFlagSet(t11(675), 5)) {
			if (!(j0[object_type_3_buffer[675]] == 141 ||
				j0[object_type_3_buffer[675]] == 485)) {
				return 0;
			}
		}
	} if (!(j0[95] == 141 || j0[95] == 140 || j0[95] == 485))
	{
		return 0;
	} if (!(isItemAtLocation(64, -1) || j0[64] == 141 || j0[64] == 485)) {
		return 0;
	} if (j0[80] == 141 || j0[80] == 485) { l12(0, 717, 1); }
} int w26() {
	modifyObjectFlag('s', t11(697), 7);
	if (object_type_3_buffer[43] > 1) { return 0; } if (object_type_3_buffer[717] == 0) {
		modifyObjectFlag('c', 95, 5); modifyObjectFlag('c', 64, 5);
		i45(); modifyObjectFlag('s', 64, 5); modifyObjectFlag('s', 95, 5); if (object_type_3_buffer[717] == 1) { l12(0, 716, 35); }
		else
		{
			object_type_3_buffer[716] = d2(39 - 30 + 1) + 30;
		} if (object_type_3_buffer[66] > 0) { object_type_3_buffer[66] = d2(16) + 1; } if
			(object_type_3_buffer[116] > 0) {
			object_type_3_buffer[116] = d2(14) + 1;
		} if (object_type_3_buffer[20] == 1) {
			object_type_3_buffer[723] -= object_type_3_buffer[724];
			if (object_type_3_buffer[723] < 0) { l12(0, 20, 2); }
		} if (!(j0[82] == 484 || g10(82, -1))) {
			s9(82, 485);
		} if (isObjectFlagSet(27, 13) && !(isObjectFlagSet(27, 14)) && !g10(134, -1)) {
			modifyObjectFlag('s', 27, 14); printMessage(0, 1170, 0);
			l12(0, 716, 5); l12(1, 724, 716); return 0;
		} if (object_type_3_buffer[119] == 2) {
			object_type_3_buffer[722] -= object_type_3_buffer[724];
			if (object_type_3_buffer[722] < 0) {
				l12(0, 119, 3); l12(0, 722, 40); printMessage(0, 119, 0); l12(0, 119, 0);
				l12(0, 721, 7); l12(0, 716, 8); l12(1, 724, 716); return 0;
			}
		} if (isObjectFlagSet(151, 4) ||
			isObjectFlagSet(163, 4)) {
			if (isObjectFlagSet(t11(671), 7) || isObjectFlagSet(t11(671), 5)) {
				object_type_3_buffer[716] = d2(17 - 8 + 1) + 8;
			}
			else {
				b26(); if ((object_type_3_buffer[699] == 0 && object_type_3_buffer[713] > 150 && !(isObjectFlagSet(19, 4)) || isObjectFlagSet(19, 13)
					|| d2(100) < 10) && !(isObjectFlagSet(49, 4)) && !g10(134, -1) && !(isObjectFlagSet(t11(671), 3)) && !(isObjectFlagSet(43, 12)))
				{
					modifyObjectFlag('c', 19, 13); l12(0, 700, 0); if (object_type_3_buffer[64] == 2) { modifyObjectFlag('c', 64, 5); } if (isObjectFlagSet(62, 12))
					{
						modifyObjectFlag('c', 62, 5);
					} if (isObjectFlagSet(67, 12)) { modifyObjectFlag('c', 67, 5); } t10(676, 95); if (object_type_3_buffer[676] == object_type_3_buffer[671])
					{
						modifyObjectFlag('c', 95, 5);
					} *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
						if
							(g10(t11(object_type_3_buffer[675]), 1029)) {
							s9(object_type_3_buffer[675], 192); l12(0, 700, 1);
						}
					} modifyObjectFlag('s', 64, 5);
					modifyObjectFlag('s', 95, 5); modifyObjectFlag('s', 62, 5); modifyObjectFlag('s', 67, 5); if (object_type_3_buffer[700] == 0) {
						if (isObjectFlagSet(19, 4)
							|| object_type_3_buffer[713] < 150) {
							printMessage(0, 930, 0); modifyObjectFlag('s', 19, 13); object_type_3_buffer[716] = d2(13 - 4 + 1) + 4;
						}
						else { s9(49, 192); s9(29, 311); modifyObjectFlag('s', 19, 4); printMessage(0, 998, 0); }
					}
					else {
						if
							(isObjectFlagSet(19, 4)) {
							printMessage(0, 932, 0);
						}
						else {
							printMessage(0, 931, 0); modifyObjectFlag('s', 19, 4); s9(49, 192);
							s9(29, 311);
						}
					}
				}
				else {
					l12(1, 699, 715); object_type_3_buffer[699] += 2; object_type_3_buffer[699] *= 10; if
						((g10(134, -1) || d2(100) < object_type_3_buffer[699]) && object_type_3_buffer[134] < object_type_3_buffer[715]) {
						if (isObjectFlagSet(115, 4)) {
							s9(134, object_type_3_buffer[671]); object_type_3_buffer[134] += 1; if (object_type_3_buffer[134] == 1) {
								b26(); if (object_type_3_buffer[699] == 0)
								{
									printMessage(0, 134, 0);
								} modifyObjectFlag('s', 134, 13); modifyObjectFlag('c', 134, 14);
							} if (object_type_3_buffer[686] == 0) {
								a26();
							}
						}
						else {
							if (!(isObjectFlagSet(t11(671), 11))) {
								b26(); if (object_type_3_buffer[699] == 0) {
									s9(115, object_type_3_buffer[671]);
									modifyObjectFlag('s', 115, 4); printMessage(0, 783, 0);
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
			l12(0, 717, 2);
			l12(0, 4, 0); printMessage(0, 933, 0); if (g10(134, -1)) { printMessage(13, 1039, 134); } s9(134, 484);
			l12(0, 134, 0); l12(0, 715, 0); l12(0, 760, 0); l12(0, 686, 0); l12(0, 8, 0); l12(0, 30, 0);
			s9(22, 485); s9(20, 485); l12(0, 22, 4); s9(23, 244); modifyObjectFlag('s', 8, 10); modifyObjectFlag('s', 30, 10);
			s9(82, 485); l12(0, 716, 30);
		}
		else {
			if (isObjectFlagSet(t11(710), 4)) {
				modifyObjectFlag('c', t11(710), 4);
				l12(0, 716, 15);
			}
			else { j41(); }
		}
	} l12(1, 724, 716);
} int x30() {
	if (m1(113))
	{
		w24();
	} if (m1(112)) { r26(); } if (object_type_3_buffer[697] == 1) {
		if ((533 <= object_type_3_buffer[669] &&
			object_type_3_buffer[669] <= 570) || m1(493)) {
			modifyObjectFlag('s', t11(697), 5); printMessage(76, 1038, 669);
		} if ((615 <= object_type_3_buffer[669]
			&& object_type_3_buffer[669] <= 629)) {
			printMessage(0, 937, 0);
		}
		else {
			if ((630 <= object_type_3_buffer[669] && object_type_3_buffer[669] <= 659))
			{
				printMessage(12, 818, 669);
			}
			else { printMessage(0, 1503, 0); }
		}
	}
	else {
		if (object_type_3_buffer[697] == 2 && isObjectFlagSet(t11(670), 0))
		{
			if (m1(112) && isObjectFlagSet(t11(671), 9)) { printMessage(64, 1588, 0); } if (g10(t11(object_type_3_buffer[670]), -1))
			{
				printMessage(12, 1504, 669); printMessage(12, 1505, 670);
			}
			else { printMessage(12, 818, 670); }
		}
		else {
			if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 663)) {
				if (m1(550)) { printMessage(0, 915, 0); }
				else
				{
					if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 659)) { printMessage(12, 818, 670); }
					else {
						printMessage(12, 1504, 669);
						printMessage(12, 1505, 670);
					}
				}
			}
			else {
				object_type_3_buffer[699] = d2(1009 - 1005 + 1) + 1005; printMessage(2, 699, 0);
			}
		}
	} longjmp(done_with_command, 1);
} int z25() {
	if (object_type_3_buffer[698] > 0) {
		if (object_type_3_buffer[39] == 3) {
			printMessage(0, 1001, 0);
		}
		else {
			if (g10(39, -1)) { printMessage(0, 1000, 0); l12(0, 39, 3); l12(0, 698, 400); }
			else {
				if (isObjectFlagSet(39, 4)) { printMessage(0, 999, 0); }
				else {
					if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193))
					{
						printMessage(9, 995, 1);
					}
					else {
						if ((300 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 311)) {
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
				printMessage(0, 1000, 0); l12(0, 39, 3); object_type_3_buffer[698] += 400;
			}
			else {
				printMessage(0, 996, 0);
				l12(0, 99, 0); modifyObjectFlag('s', t11(710), 6); b28();
			}
		}
	}
} int h26() {
	modifyObjectFlag('s', t11(671), 14);
	if ((329 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364) || object_type_3_buffer[w9] == 328) {
		modifyObjectFlag('s', 328, 14); *getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 328; while (++object_type_3_buffer[676] <= 364) { modifyObjectFlag('s', t11(676), 14); }
	} if ((271 <= object_type_3_buffer[671]
		&& object_type_3_buffer[671] <= 289)) {
		*getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
			modifyObjectFlag('s', t11(676), 14);
		}
	} if ((385 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 390)) {
		*getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 384; while (++object_type_3_buffer[676] <= 390) { modifyObjectFlag('s', t11(676), 14); }
	} if ((168 <= object_type_3_buffer[671]
		&& object_type_3_buffer[671] <= 193)) {
		*getObjectPointer(676) = -1; object_type_3_buffer[676] = 167; while (++object_type_3_buffer[676] <= 193) {
			modifyObjectFlag('s', t11(676), 14);
		}
	} if ((300 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 311)) {
		*getObjectPointer(676) =
			-1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) { modifyObjectFlag('s', t11(676), 14); }
	}
} 

int p36() {
	if (isObjectFlagSet(t11(671), 14) && !m1(580) || !(isObjectFlagSet(t11(671), 8))) {
		return 0;
	} 
	l12(0, 677, 0); 
	if (object_type_3_buffer[w9] == 434 && m1(580)) {
		l12(0, 720, 0); 
		printMessage(64, 1474, 0);
	} 
	
	if (object_type_3_buffer[w9] == 144 && object_type_3_buffer[4] == 0 && !isItemAtLocation(98, -1)) { 
		f3(677, 859); 
	} 
	
	if (object_type_3_buffer[w9] == 149	&& g10(101, 0) && isItemAtLocation(ITEM_ROD,-1)) {
		f3(677, 806);
	} 
	
	if (object_type_3_buffer[w9] == 155 && g10(7, -1))
	{
		if (isObjectFlagSet(t11(735), 0)) {
			if (!(m1(580) && !(isObjectFlagSet(t11(671), 14)))) {
				f3(677, 1579);
			}
		}
		else { 
			if (j0[101] == 485) { 
				f3(677, 810); 
			} else { 
				f3(677, 808); 
			} 
		}
	} 
	
	if (object_type_3_buffer[w9] == 236) {
		f3(677, 992);
	} 
	
	if ((object_type_3_buffer[w9] == 228 || object_type_3_buffer[w9] == 227 || object_type_3_buffer[w9] == 229) && !(isObjectFlagSet(229, 4))) {
		f3(677, 990);
	} 
	
	if (object_type_3_buffer[w9] == 256) { 
		f3(677, 1140); 
	} 
	
	if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193) || (300 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 311) || (385 <= object_type_3_buffer[671]
			&& object_type_3_buffer[671] <= 390)) {
		f3(677, 987);
	} 
	
	if ((328 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364)) {
		f3(677, 1217);
	} 
	
	if ((271 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 289)) {
		if (m1(580) && !(isObjectFlagSet(t11(671), 14)))
		{
			return 0;
		} else { 
			f3(677, 1320); 
		}
	} 
	
	if (object_type_3_buffer[w9] == 427 || object_type_3_buffer[w9] == 428) {
		f3(677, 1654);
	} 
	
	if (object_type_3_buffer[w9] == 239) { f3(677, 1318); } if (g10(16, -1)) {
		f3(677, 1431);
	} 
	
	if (object_type_3_buffer[w9] == 252) { 
		f3(677, 1436); 
	} 
	
	if (object_type_3_buffer[w9] == 264) { 
		f3(677, 1517); 
	}
	
	if (object_type_3_buffer[w9] == 254) {
		if (isObjectFlagSet(t11(735), 1)) {
			if (!(m1(580) && !(isObjectFlagSet(t11(671), 14))))
			{
				f3(677, 1512);
			}
		}
		else { 
			f3(677, 1438); 
			modifyObjectFlag('s', t11(735), 1); 
		}
	} 
	
	if (g10(24, -1))
	{
		f3(677, 1441);
	} 
	
	if (g10(35, -1)) { 
		f3(677, 1443); 
	} 
	
	if (object_type_3_buffer[w9] == 259) {
		if (m1(580)) {
			f3(677, 1452);
		} else { 
			return 0; 
		}
	} 
	
	if (object_type_3_buffer[677] == 0) {
		return 0;
	} 
	
	l12(0, 720, 0); 
	
	if (y10(object_type_3_buffer[677])) {
		printMessage(9, 985, 20);  // I  can  give  you some advice that might help you solve your problem, but I'll have to charge you 20 points for it.  TANSTAAFL, y'know!
		
		if (y10(986)) {
			object_type_3_buffer[677]+= 1; 
			printMessage(2, 677, 0); 

			object_type_3_buffer[707] += 20; 
			modifyObjectFlag('c', t11(671), 8); 
			modifyObjectFlag('c', t11(671), 14);
			object_type_3_buffer[677] -= 1; 

			if (object_type_3_buffer[w9] == 427) { 
				modifyObjectFlag('c', 428, 8); 
			} 
			
			if (object_type_3_buffer[w9] == 428) {
				modifyObjectFlag('c', 427, 8);
			} if (g10(7, -1)) {
				if (object_type_3_buffer[677] == 1579) { modifyObjectFlag('c', t11(735), 0); }
				else {
					modifyObjectFlag('s', t11(671), 8);
					modifyObjectFlag('s', t11(735), 0);
				}
			} if (object_type_3_buffer[w9] == 254) {
				if (object_type_3_buffer[677] == 1512) {
					modifyObjectFlag('c', t11(735), 1);
				}
				else { modifyObjectFlag('s', t11(671), 8); modifyObjectFlag('s', t11(735), 1); }
			} if (object_type_3_buffer[w9] == 228 || object_type_3_buffer[w9] == 227
				|| object_type_3_buffer[w9] == 229) {
				modifyObjectFlag('c', 228, 8); modifyObjectFlag('c', 229, 8); modifyObjectFlag('c', 227, 8);
			} if (object_type_3_buffer[w9] == 254
				&& isObjectFlagSet(197, 4) && isObjectFlagSet(t11(735), 1)) {
				printMessage(0, 1440, 0);
			} if (g10(35, -1)) {
				modifyObjectFlag('c', 314, 8);
				modifyObjectFlag('c', 315, 8);
			} if (object_type_3_buffer[w9] == 236) { modifyObjectFlag('s', t11(735), 2); } if ((328 <= object_type_3_buffer[671]
				&& object_type_3_buffer[671] <= 364) || object_type_3_buffer[w9] == 328) {
				modifyObjectFlag('c', 328, 8); *getObjectPointer(676) = -1; object_type_3_buffer[676] = 328;
				while (++object_type_3_buffer[676] <= 364) { modifyObjectFlag('c', t11(676), 8); }
			} if ((271 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 289))
			{
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 270; while (++object_type_3_buffer[676] <= 289) {
					modifyObjectFlag('c', t11(676), 8);
				}
			} if ((385 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 390)) {
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 384; while
					(++object_type_3_buffer[676] <= 390) {
					modifyObjectFlag('c', t11(676), 8);
				}
			} if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193))
			{
				if (object_type_3_buffer[168] == 0) { printMessage(0, 989, 0); }
				else { 
					printBlankLine();
				} *getObjectPointer(676) = -1; object_type_3_buffer[676] = 167;
				while (++object_type_3_buffer[676] <= 193) { modifyObjectFlag('c', t11(676), 8); }
			} if ((300 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 311))
			{
				*getObjectPointer(676) = -1; object_type_3_buffer[676] = 299; while (++object_type_3_buffer[676] <= 311) {
					modifyObjectFlag('c', t11(676), 8);
				}
			} if (g10(16, -1)) { modifyObjectFlag('c', 165, 8); modifyObjectFlag('c', 166, 8); }
		}
		else { h26(); }
	}
	else { h26(); }
}
