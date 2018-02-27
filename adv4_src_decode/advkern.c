/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#define _CRT_SECURE_NO_WARNINGS 1 // cause, like, 1991
#include <stdio.h>
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#define NOVARARGS
#ifdef __50SERIES
#ifdef BUFFERS
#undef BUFFERS
#endif 
extern int time();
#define g0 "i"
#define h0 "o"
#define unlink delete
#else 
#ifdef vms
#define unlink delete
#include <time.h>
#else 
#include <sys/types.h>
#endif 
extern time_t time();
#define Read_Binary "rb"
#define Write_Binary "wb"
#endif 
extern char *strncpy(); extern void exit(); 
FILE *data_file; FILE *log_file;
char *u0 = NULL;
#define write_char_to_term_and_log(X) putchar(X); if (log_file) (void)fputc(X,log_file); 
#define write_char_to_term_and_log_and_advance_pointer(X) if (log_file) (void)fputc(X,log_file); (void)putchar(X++);
#define write_string_to_term_and_log(X) printf(X); if (log_file) (void)fprintf(log_file,X);
#define printf_to_term_and_log(X,Y) printf(X,Y); if (log_file) (void)fprintf(log_file,X,Y);
#include "advkern.h"
int v0; jmp_buf done_with_command; 
int object_type_3_buffer[OBJECT_TYPE_3_MAX_ID]; 
int j0[OBJECT_TYPE_0_MAX_ID + 1]; 
short object_type_0_buffer[OBJECT_TYPE_0_SIZE_IN_SHORTS * (OBJECT_TYPE_0_MAX_ID - OBJECT_TYPE_0_MIN_ID+ 1)]; 
short object_type_1_buffer[OBJECT_TYPE_1_SIZE_IN_SHORTS * (OBJECT_TYPE_1_MAX_ID - OBJECT_TYPE_1_MIN_ID + 1)]; 
short object_type_2_buffer[OBJECT_TYPE_2_SIZE_IN_SHORTS * (OBJECT_TYPE_3_MAX_ID - OBJECT_TYPE_2_MIN_ID + 1)]; 
char command[161] = "\n"; 
char h1[161] = "\n"; 
char u1[161]; 
int k1, r2; 
int o1;
char b1[20]; 
char x2[20]; 
char l0[20]; 
char v1[20]; 
long l1; 
long e2 = 0;
#include "autod3.h"
#include "autod2.h"
#include "autod0.h"
#ifdef i1
int g2 = 1;
#endif 
#ifdef i2
#ifdef BUFFERS
#undef BUFFERS
#endif 
char KilobyteInputBuffer[l2];
#else 
#define Kilobyte 1024
#ifdef MSD
#ifdef BUFFERS
#if BUFFERS == 0
#undef BUFFERS
#endif 
#else 
#define BUFFERS 31
#endif 
#endif 
#ifdef BUFFERS
char KilobyteInputBuffer[BUFFERS * e3]; long s0[BUFFERS]; long i3[BUFFERS]; long x3[BUFFERS];
#else 
char KilobyteInputBuffer[Kilobyte]; 
long addressOfBeginningOfBuffer; 
long firstAddressAfterEndOfBuffer;
#endif 
#endif 
char *commandTokens[100]; short commandTokenLength[100]; char z0[100]; 
short nTokensInCommand;
#define w1 73
long dataFileOffset; 
long l3; 
long nLocates;
#ifdef y0
long p0; long t1;
#endif 
char p1[w1 + 40]; 
char *k2 = p1; 
int t2 = -1; 
int c2[40]; 
int q1[40];
int c3; 
int t3; 
int j3; 
int v2; 
int d1; 
int m0; 
char q2[16]; 
int g3; 
int should_exit; 
char *c4;
#ifndef NOVARARGS
int k3(a1) int a1; { int *z1; z1 = &a1; while (*z1 >= 0) {
	if (m1(*z1))
		return (1); else z1 += 1;
} return (0); } int p2(a1) int a1; { int *z1;
z1 = &a1; while (*z1 >= 0) { if (!m1(*z1)) return (0); else z1 += 1; }
return (1); }
#else 
int currentCommandIsOneOf(q3, b2, t4, j4, s1, y1, c5, y2, e4, l4, l5, v3, t5, w2, q4, b3) int q3, b2, t4, j4, s1, y1, c5, y2, e4, l4, l5, v3, t5, w2, q4, b3;
{ 
	if (q3 == -1) return (0); 
	if (currentCommandContains(q3)) return (1); 
	if (b2 == -1) return (0); 
	if (currentCommandContains(b2)) return (1); 
	if (t4 == -1) return (0); 
	if (currentCommandContains(t4)) return (1); 
	if (j4 == -1) return (0); 
	if (currentCommandContains(j4)) return (1); 
	if (s1 == -1) return (0); 
	if (currentCommandContains(s1)) return (1); 
	if (y1 == -1) return (0); 
	if (currentCommandContains(y1)) return (1); 
	if (c5 == -1) return (0); 
	if (currentCommandContains(c5)) return (1); 
	if (y2 == -1) return (0); 
	if (currentCommandContains(y2)) return (1); 
	if (e4 == -1) return (0); 
	if (currentCommandContains(e4)) return (1); 
	if (l4 == -1) return (0); 
	if (currentCommandContains(l4)) return (1); 
	if (l5 == -1) return(0); 
	if (currentCommandContains(l5)) return (1); 
	if (v3 == -1) return (0); 
	if (currentCommandContains(v3)) return(1); 
	if (t5 == -1) return (0); 
	if (currentCommandContains(t5)) return (1); 
	if (w2 == -1) return(0); 
	if (currentCommandContains(w2)) return (1); 
	if (q4 == -1) return (0); 
	if (currentCommandContains(q4)) return(1); 
	if (b3 == -1) return (0); 
	if (currentCommandContains(b3)) return (1); 
	return (0); 
} 

int
currentCommandIsNotOneOf(q3, b2, t4, j4, s1, y1, c5, y2, e4, l4, l5, v3, t5, w2, q4, b3) int q3, b2, t4, j4, s1, y1, c5, y2, e4, l4, l5, v3, t5, w2, q4, b3;
{ 
	if (q3 == -1) return (1); 
	if (!currentCommandContains(q3)) return (0); 
	if (b2 == -1) return(1); 
	if (!currentCommandContains(b2)) return (0); 
	if (t4 == -1) return (1); 
	if (!currentCommandContains(t4)) return(0); 
	if (j4 == -1) return (1); 
	if (!currentCommandContains(j4)) return (0); 
	if (s1 == -1) return(1); 
	if (!currentCommandContains(s1)) return (0); 
	if (y1 == -1) return (1); 
	if (!currentCommandContains(y1)) return(0); 
	if (c5 == -1) return (1); 
	if (!currentCommandContains(c5)) return (0); 
	if (y2 == -1) return(1); 
	if (!currentCommandContains(y2)) return (0); 
	if (e4 == -1) return (1); 
	if (!currentCommandContains(e4)) return(0); 
	if (l4 == -1) return (1); 
	if (!currentCommandContains(l4)) return (0); 
	if (l5 == -1) return(1); 
	if (!currentCommandContains(l5)) return (0); 
	if (v3 == -1) return (1); 
	if (!currentCommandContains(v3)) return(0); 
	if (t5 == -1) return (1); 
	if (!currentCommandContains(t5)) return (0); 
	if (w2 == -1) return(1); 
	if (!currentCommandContains(w2)) return (0); 
	if (q4 == -1) return (1); 
	if (!currentCommandContains(q4)) return(0); 
	if (b3 == -1) return (1); 
	if (!currentCommandContains(b3)) return (0); 
	return (1); 
}
#endif 

int cheezy_rand(i5) int i5; { 
	int p3; 
	e2 = (((e2 << 10) + e2) / 13) & 32767; 
	return (p3 = e2 % i5); 
}

#define d3 100
char getByteOfDataFile(long whichByteToGet) 
{
	void errorReadingDataFile(); 
	
	if (whichByteToGet < addressOfBeginningOfBuffer || whichByteToGet >= firstAddressAfterEndOfBuffer) {
		l3++; 
		if (fseek(data_file, whichByteToGet, 0)) {
			return 0;	// BJB
			errorReadingDataFile();
		}
		addressOfBeginningOfBuffer = whichByteToGet; 
		firstAddressAfterEndOfBuffer = fread(KilobyteInputBuffer, sizeof(char), Kilobyte, data_file) + addressOfBeginningOfBuffer - 1; 
		
		if (addressOfBeginningOfBuffer > firstAddressAfterEndOfBuffer) {
			return 0; //BJB
			errorReadingDataFile();
		}
	}
#ifdef w3
	return (KilobyteInputBuffer[v4 - s0]);
#else 
	return (KilobyteInputBuffer[whichByteToGet - addressOfBeginningOfBuffer] ^ q2[whichByteToGet % g3]);
#endif 
} 

void errorReadingDataFile() {
	(void)write_string_to_term_and_log("Unable to retrieve required data! Sorry...\n");
	(void)fclose(data_file); if (log_file) (void)fclose(log_file); exit(1);
} 

void printMessage(flags, y4, c7) int flags; int y4; int c7; 
{ 
	int i6; 
	int y5; 
	int b4; 
	int a2; 
	int dereference_through_object_type_3; 
	int e5; 
	int endCommandWhenDone;
#ifdef x5
	int n3;
#endif 
#ifdef l7
	int t6;
#endif 
	int z2;
	int c8; 
	int y7; 
	char n4[20]; 
	char c9; 
	char b5; 
	char w4; 
	long d4;
	long n5; 
	char *j7; 
	char i8; 
	char getByteOfDataFile(); 
	
	nLocates++; 
	v2 = 1;
	c9 = '\377'; // -1
	b5 = '\376'; // -2
	w4 = '\375'; // -3
	
	if (flags < 64)
		endCommandWhenDone = 0;
	else { 
		endCommandWhenDone = 1;
		flags -= 64;
	}
#ifdef l7
	if (flags < 32)
		t6 = 0; 
	else { 
		flags -= 32;
		t6 = 1; 
	}
#endif
#ifdef x5
	if (flags < 16)
		n3 = 0; 
	else { 
		flags -= 16;
		n3 = 1; 
	}
#endif
	if (flags < 8)
		a2 = 0; 
	else 
	{ 
		flags -= 8;
		a2 = 1; 
	} 
	
	if (flags < 4)
		e5 = 0; 
	else {
		flags -= 4;
		e5 = 1;
	} 
	
	if (flags < 2)
		dereference_through_object_type_3 = 0; 
	else { 
		flags -= 2;
		dereference_through_object_type_3 = 1; 
	} 
	b4 = flags;

#ifdef x5
	if (isObjectFlagSet(v5, x5)) 
		n3 = 1;
#endif 
#ifdef l7
	if (isObjectFlagSet(v5, l7)) 
		t6 = 1;
#endif 
	if (dereference_through_object_type_3) 
		y4 = object_type_3_buffer[y4]; 
	c8 = c7; 

	if (e5 && ((c7 != i9 && c7 != o2) || b4))
		c7 = object_type_3_buffer[c7]; 

	if (y4 > OBJECT_TYPE_1_MAX_ID) 
		dataFileOffset = h3[y4];
#ifdef x5
	else if (n3) 
		dataFileOffset = i10[y4];
#endif
#ifdef l7
	else if (t6) 
		dataFileOffset = c10[y4];
#endif
	else if (y4 > OBJECT_TYPE_0_MAX_ID || j0[y4] == r5) 
		dataFileOffset = y8[y4]; 
	else 
		dataFileOffset = i10[y4]; 


	if ((i8 = getByteOfDataFile(dataFileOffset)) == '\0') 
		goto l8; 
	
	while (i8 != '\0') {
		if (i8 == c9) {
			z2 = getByteOfDataFile(++dataFileOffset); 
			n5 = dataFileOffset + 2 * z2 - 1; 
			
			if (!a2) {
				if (y4 <= OBJECT_TYPE_1_MAX_ID) 
					c7 = object_type_3_buffer[y4];
				else 
					c7 = y4;
			}
#ifdef s2
		if (c7 <= 1)
#else 
		if (c7 <= 0)
#endif 
			dataFileOffset = n5 + 1; 
		else {
			dataFileOffset = dataFileOffset - 1 + 2 *
#ifdef s2
			((c7 > z2) ? z2 - 1 : c7 - 1);
#else 
				((c7 >= z2) ? z2 - 1 : c7);
#endif 
			y5 = getByteOfDataFile(dataFileOffset + 1); 
			if (y5 < 0) 
				y5 += 256; 
			dataFileOffset = n5 + 256 * getByteOfDataFile(dataFileOffset) + y5 + 1;
		} 
		
		y5 = getByteOfDataFile(n5 + 1); 
		if (y5 < 0) 
			y5 += 256; 
		n5 = n5 + 256 * getByteOfDataFile(n5) +y5 + 1; 
		i8 = getByteOfDataFile(dataFileOffset);
	} else if (i8 == b5) 
		i8 = getByteOfDataFile(dataFileOffset = n5); 
	else if (i8	== w4) {
		if (flags) {
			(void)sprintf(n4, "%d", c7); 
			j7 = n4 - 1; 
			while (*(++j7)!= '\0') 
				d5(*j7); 
			goto x6;
		} else if (c7 == i9 || c7 == o2) {
			j7 = ((c7 == i9) ? b1 : x2) - 1; 
			while (*(++j7) != '\0') 
				d5(*j7); 
			goto x6;
		}
		else
		{
			i6 = (e5 && c8 <= OBJECT_TYPE_1_MAX_ID) ? c8 : c7; 
			d4 = dataFileOffset; 
			nLocates++; 
			dataFileOffset = h3[i6]; 
			i8 = getByteOfDataFile(dataFileOffset); 
			
			if (i8 == '!') 
				i8 = getByteOfDataFile(++dataFileOffset);
			while (i8 != '\0') {
				d5(i8); 
				i8 = getByteOfDataFile(++dataFileOffset);
			} 
			dataFileOffset = d4;
		}
	} else 
		d5(i8); 
x6: 
	i8 = getByteOfDataFile(++dataFileOffset);
	} 
l8: 
	if (endCommandWhenDone)
		longjmp(done_with_command, 1); 
	return; 
} 

d5(int h4) 
{ 
	int a3; 
	char *s3; 
	
	if (h4 == ' ' && j3 && c3 == 0) {
		j3 = 0; 
		while (getByteOfDataFile(++dataFileOffset) == ' '); 
		dataFileOffset--; 
		return;
	} 
	
	if (h4 == '\n') {
		if (c3 > 0) { 
			d6(c3); 
			(void)write_char_to_term_and_log('\n'); 
		} else if (!j3) {
			(void)write_char_to_term_and_log('\n');
		} 
		t3 = '\n'; 
		j3 = 0; return;
	} 
	
	j3 = 0; 
	if (h4 == ' ') {
		if (t3 != ' ') 
			c2[++t2] = c3; 
		if (c3 >= w1) {
			while (getByteOfDataFile(++dataFileOffset) == ' ');
			dataFileOffset--; 
			d6(c2[t2]); 
			(void)write_char_to_term_and_log('\n'); 
			j3 = 1; 
			t3 = '\0'; 
			return;
		} 
		goto n6;
	} 
	
	if (t3 == ' ') 
		q1[t2] = c3; 
	if (c3 >= w1) {
		*k2 = '\0'; 
		if (t2 < 0) {
			a3 = w1; d6(w1);
		} else {
			a3 = q1[t2]; 
			d6(c2[t2]); 
			(void)write_char_to_term_and_log('\n');
			j3 = 1;
		} 
		s3 = &p1[a3]; 
		while (*s3 != '\0') { 
			*k2++ = *s3++; 
			c3++; 
		}
	}

n6: 
	*k2++ = t3 = h4; 
	c3++; 
	return; 
} 

d6(int v6) 
{ char *s3; int i6;
int j8; int a4; int n7; int a3; s3 = p1; if (c3 < w1 || v6 == w1 || t2 ==
	0) while (v6-- > 0) { write_char_to_term_and_log_and_advance_pointer(*s3); }
else {
	a4 = w1 - v6; n7 = (a4 - v2) /
		t2 + v2; j8 = 1 - 2 * v2; a3 = a4 % t2; if (!v2) a3 = t2 - a3; v2 = 1 -
		v2; t3 = '\0'; while (v6-- > 0) {
		if (t3 == ' ' && *s3 != ' ') {
			i6 = n7;
			while (i6-- > 0) { (void)write_char_to_term_and_log(' '); } if (--a3 == 0) n7 = n7 + j8;
		} t3 =
			*s3; write_char_to_term_and_log_and_advance_pointer(*s3);
	}
} c3 = 0; k2 = p1; t2 = -1; return; } 

c11(char *c12, long  g4) 
{ 
	int u2; 
	
	if (getByteOfDataFile(g4) == '!') 
		g4++; 
	
	for (u2 = 1; u2 <= 20;u2++) 
		if ((*c12++ = getByteOfDataFile(g4++)) == '\0') 
			return; 
} 

void w5(int g5) 
{
	int q5; 
	int k4; 
	long d7; 
	int m2; 
	char *b6; 
	
	*getObjectPointer(i9) = -1; 
	*getObjectPointer(o2) = -1;
#ifdef b7
	if (v0) { 
		e6(2, d1, m0); 
		if (v0) return; 
	} else {
		k1 = object_type_3_buffer[i9]; 
		r2 = object_type_3_buffer[o2];
	}
#else 
	k1 = e0[i9]; r2 = e0[o2];
#endif 
	m2 = (nTokensInCommand != 0 && commandTokens[nTokensInCommand] && z0[nTokensInCommand] == ','); 

	if (z0[nTokensInCommand] == '.') {
		object_type_3_buffer[i9] = -1; 
		object_type_3_buffer[o2] = -1;
	} 

g6: 
	if (commandTokens[nTokensInCommand] == NULL) {
		if (u1[0] != '\0' && u1[0] != '\n') 
			(void) strncpy(h1, u1, 160); 

		command[0] = '\0'; 

		while (command[0] == '\0' || command[0] == '\n') {
#ifdef i1
			g2 = 1;
#endif 
#ifdef y0
			(void) printf("\n(Locates: demanded %ld (+%ld), faults %ld (+%ld))", nLocates,
				n2 - t1, l3, l3 - p0); t1 = n2; p0 = l3;
#endif 
			if (g5) 
				(void)printMessage(0, g5, 0); 

			if (c3 > 0) {
				if (*(k2 - 1) != ' ') 
					d5(' ');
				d6(c3);
			} else { 
				(void)write_string_to_term_and_log("\n? "); 
			} 
			
			(void)fgets(command, 160, stdin); 
			if (log_file) 
				(void)fprintf(log_file, command);

			(void)strncpy(u1, command, 160);
		} // while command[0] == '\0' || command[0] == '\n'
		(void)write_char_to_term_and_log('\n'); 
b8: 
		tokenizeCommand(); 
		nTokensInCommand = 0; 
		object_type_3_buffer[i9] = -1; 
		object_type_3_buffer[o2] = -1; 
		object_type_3_buffer[v5] = 0;
	} // if NULL
g7: 
	u4(&q5, &k4, &d7); 
/*BJB*/ printf("k4 = %d\n", k4);
	nTokensInCommand++; 

	if (q5 == w6 && (z0[nTokensInCommand] == ' ' || z0[nTokensInCommand] == ',')) 
		goto g7;
#ifdef i1
	if (k4 == i1) {
		if (g2) {
			if (h1[0] == '\n') 
				goto g6; 

			if (l1) {
				k1 = o1;
				(void)strncpy(b1, v1, 20); 
				if (l1) 
					modifyObjectFlag('s', v5, f1);
			} 
			(void)strncpy(command, h1, 160); 
			(void)strncpy(u1, h1, 160); 
			goto b8;
		} else {
			nTokensInCommand--; 
			while (z0[++nTokensInCommand] == ' '); 
			object_type_3_buffer[i9] = k1; 
			object_type_3_buffer[o2] = r2; 
			return;
		}
	}
	else if (g2)
	{
		if (l1 = isObjectFlagSet(v5, f1)) { o1 = k1; (void)strncpy(v1, b1, 20); }
	}
#endif 
	if (isObjectFlagSet(v5, f1) && k4 <= OBJECT_TYPE_1_MAX_ID || m2) {
		object_type_3_buffer[i9] = k1; 
		object_type_3_buffer[o2] = k4; 
		if (k4 == i11 || k4 == c13) 
			(void) strncpy(x2, commandTokens[nTokensInCommand - 1], 20); 
		else (void)c11(x2, d7);
		object_type_3_buffer[v5] = 2; 
		goto z3;
	} 
	object_type_3_buffer[i9] = k4; 
	if (k4 == i11 || k4 == c13)
		(void) strncpy(b1, commandTokens[nTokensInCommand - 1], 20); 
	else 
		(void)c11(b1, d7); 

	object_type_3_buffer[v5]= 1; 

b9: 
	if (z0[nTokensInCommand] == ' ') {
		u4(&q5, &k4, &d7); 
		nTokensInCommand++; 
		if (q5 == w6) 
			goto b9; 
		object_type_3_buffer[o2] = k4; 
		b6 = (k4 == i11 || k4 == c13) ? commandTokens[nTokensInCommand - 1] : &KilobyteInputBuffer[d7];
		if (k4 == i11 || k4 == c13) 
			(void) strncpy(x2, commandTokens[nTokensInCommand - 1], 20); 
		else 
			(void)c11(x2, d7); 
		object_type_3_buffer[v5] = 2;
	} 

z3:
#ifdef i1
	g2 = 0;
#endif 
	modifyObjectFlag('c', v5, f1); 
	if (object_type_3_buffer[i9] == i11 || object_type_3_buffer[i9] == c13 || object_type_3_buffer[o2] == i11
		|| object_type_3_buffer[o2] == c13) 
		commandTokens[nTokensInCommand] = NULL; 
	else if (object_type_3_buffer[v5] == 2 && (isObjectFlagSet(object_type_3_buffer[o2],
			OBJECT_TYPE_2_FLAG)) && !(isObjectFlagSet(object_type_3_buffer[i9], OBJECT_TYPE_2_FLAG))) {
		
		k1 = object_type_3_buffer[i9]; 
		object_type_3_buffer[i9] = object_type_3_buffer[o2];
		object_type_3_buffer[o2] = k1; 
		(void)strncpy(l0, b1, 20); 
		(void)strncpy(b1, x2, 20); 
		(void)strncpy(x2, l0, 20);
	} 
	
	b1[19] = '\0'; 
	x2[19] = '\0'; 
	if (z0[nTokensInCommand] == ' ') {
		if (strcmp(commandTokens[nTokensInCommand], "and") == 0 && z0[++nTokensInCommand] == ' ') 
			z0[nTokensInCommand] = ','; 
		else 
			while (z0[++nTokensInCommand] == ' ');
	} 
	return; 
} 


int y10(g5) int g5; { char s5[10]; char
		*n8; int l9 = 0; if (g5 >= 0) printMessage(0, g5, 0); if (c3 > 0) {
		if (*(k2 - 1)
			!= ' ') d5(' '); d6(c3);
	}
		else { (void)write_string_to_term_and_log("? "); } m3: (void)fgets
		(s5, 10, stdin); if (log_file) (void)fprintf(log_file, s5); n8 = s5; if
		(*n8 == '\0' || *n8 == '\n') return (1); while (*n8 == ' ') n8++; if (*n8
			== 'y' || *n8 == 'Y') return (1); if (*n8 == 'n' || *n8 == 'N') return (0);
	if (l9) {
		(void)write_string_to_term_and_log("(OK, smartass... I'll assume you mean YES - so there!)\n\n");
		return (1);
	} (void)write_string_to_term_and_log("Eh? Do me a favour and answer yes or no!\nWhich will it be? ");
	l9 = 1; goto m3; } int b10(p4, c14) int p4; int c14; { static char i12
		[80]; char r6[15]; char q6[32]; FILE *u5; int e7, z4; long g8; static
		int t8; static long i13; void adv_hours(); void adv_news(); switch (p4)
	{
		case 1: case 2: e7 = object_type_3_buffer[o2]; m3: if (e7 >= 0) (void) strncpy(r6, x2,
			14); else {
			if (p4 == 1) { (void)write_string_to_term_and_log("Name to save game under: "); }
			else
			{
				(void)write_string_to_term_and_log("Name of saved game to restore: ");
			} (void)fgets(r6, 14,
				stdin); if (log_file) (void)fprintf(log_file, r6); if (r6[0] == '\0'
					|| r6[0] == '\n') {
				(void)write_string_to_term_and_log("Changed your mind, eh?  Fine by me...\n");
				object_type_3_buffer[c14] = 0; return (0);
			}
		} adv_save_path(r6, i12); if ((u5 = fopen(i12,
			Read_Binary)) != NULL) {
			if (p4 == 2) goto p6; (void)fclose(u5); (void)write_string_to_term_and_log("There's already a game dumped under that name.\n");
			(void)write_string_to_term_and_log("Do you really mean to overwrite it?\n"); if (!y10(-1)) {
				e7
					= -1; goto m3;
			} (void)write_string_to_term_and_log("As you wish...\n");
		} if (p4 == 2) {
			object_type_3_buffer[c14]
				= 1; return (0);
		} if ((u5 = fopen(i12, Write_Binary)) == NULL) {
			object_type_3_buffer[c14] = 1; return
				(1);
		} (void)time(&g8); (void)fprintf(u5, "%s\n", TITLE); (void)fwrite
		(&g8, sizeof(long), 1, u5); e7 = OBJECT_TYPE_0_MIN_ID; (void)fwrite(&e7, sizeof(int),
			1, u5); e7 = OBJECT_TYPE_0_MAX_ID; (void)fwrite(&e7, sizeof(int), 1, u5); e7 = OBJECT_TYPE_1_MAX_ID; (void)
			fwrite(&e7, sizeof(int), 1, u5); e7 = OBJECT_TYPE_2_MAX_ID; (void)fwrite(&e7, sizeof(int),
				1, u5); e7 = OBJECT_TYPE_3_MAX_ID; (void)fwrite(&e7, sizeof(int), 1, u5); (void)fwrite
				(object_type_3_buffer, sizeof(int), sizeof(object_type_3_buffer) / sizeof(int), u5); (void)fwrite(j0, sizeof
				(int), sizeof(j0) / sizeof(int), u5); (void)fwrite(object_type_0_buffer, sizeof(short),
					sizeof(object_type_0_buffer) / sizeof(short), u5); (void)fwrite(object_type_1_buffer, sizeof(short), sizeof
					(object_type_1_buffer) / sizeof(short), u5); (void)fwrite(object_type_2_buffer, sizeof(short), sizeof(object_type_2_buffer)
						/ sizeof(short), u5); (void)fclose(u5); if (ferror(u5)) {
			object_type_3_buffer[c14] =
				1; return (1);
		} object_type_3_buffer[c14] = 0; return (0); p6: z4 = 0; (void)fscanf(u5,
			"%s", q6); (void)fgetc(u5); if (strcmp(q6, TITLE) == 0) {
			(void)fread
			(&g8, sizeof(long), 1, u5); (void)fread(&e7, sizeof(int), 1, u5); if
				(e7 != OBJECT_TYPE_0_MIN_ID) z4++; (void)fread(&e7, sizeof(int), 1, u5); if (e7 != OBJECT_TYPE_0_MAX_ID)
				z4++; (void)fread(&e7, sizeof(int), 1, u5); if (e7 != OBJECT_TYPE_1_MAX_ID) z4++; (void)
				fread(&e7, sizeof(int), 1, u5); if (e7 != OBJECT_TYPE_2_MAX_ID) z4++; (void)fread(&e7,
					sizeof(int), 1, u5); if (e7 != OBJECT_TYPE_3_MAX_ID) z4++;
		} if (z4) {
			object_type_3_buffer[c14] = 2; (void)
				fclose(u5); return (0);
		} (void)fread(object_type_3_buffer, sizeof(int), sizeof(object_type_3_buffer) /
			sizeof(int), u5); (void)fread(j0, sizeof(int), sizeof(j0) / sizeof
			(int), u5); (void)fread(object_type_0_buffer, sizeof(short), sizeof(object_type_0_buffer) / sizeof(short),
				u5); (void)fread(object_type_1_buffer, sizeof(short), sizeof(object_type_1_buffer) / sizeof(short), u5);
		(void)fread(object_type_2_buffer, sizeof(short), sizeof(object_type_2_buffer) / sizeof(short), u5); if
			(ferror(u5)) {
			(void)write_string_to_term_and_log("Oops!! Dump file incomplete! Sorry - got to crash...\n");
			(void)fclose(u5); if (log_file) (void)fclose(log_file); exit(1);
		}
		(void)fclose(u5); i13 = g8; object_type_3_buffer[c14] = 0; return (0); case 3: object_type_3_buffer[c14]
			= _unlink(i12); return (0); case 4: adv_news(); return (0); case 5: adv_hours
			(); return (0); case 6: t8 = object_type_3_buffer[c14]; return (0); case 7: object_type_3_buffer[c14] = t8;
		return (0); case 8: (void)time(&g8); object_type_3_buffer[c14] = 1 + (g8 - i13) / 60; return
			(0); case 9: case 10: object_type_3_buffer[(p4 == 9) ? i9 : o2] = object_type_3_buffer[c14]; return (0); case
			11: if (OBJECT_TYPE_0_MIN_ID <= object_type_3_buffer[c14] && object_type_3_buffer[c14] <= OBJECT_TYPE_0_MAX_ID) object_type_3_buffer[c14] = 0; else object_type_3_buffer[c14] =
			1; return (0); case 12: object_type_3_buffer[c14] = adv_allowed(); return (0); case 13:
				object_type_3_buffer[c14] = adv_still_allowed(); return (0); default: (void)printf_to_term_and_log("GLITCH! Bad special code: %d\n",
					p4); return (1);
	} } e6(p4, d8, q5) int p4; int d8; int q5; { int i6; int
		k5; int a1; if (p4 == 0 && object_type_3_buffer[v5] != 1) return; k5 = -1;
#ifdef b7
	a1 = (p4 == 2) ? v0 + 1 : OBJECT_TYPE_0_MIN_ID; if (a1 > OBJECT_TYPE_0_MAX_ID) goto b11; for (i6 = a1; i6 <=
		OBJECT_TYPE_0_MAX_ID; i6++)
#else 
	for (i6 = r0; i6 <= n1; i6++)
#endif 
#ifdef m4
		if ((j0[i6] == d8 || (d8 != r5 && isObjectFlagSet(i6, m4) && j0[i6] + 1 == d8)) &&
#else
			if (j0[i6] == d8 &&
#endif
				(q5 < 0 || isObjectFlagSet(i6, q5))) {
			if (k5 >= 0) return; k5 = i6; if (p4) break;
		} if (k5 >= 0) {
			object_type_3_buffer[o2] = k5; (void)c11(x2, h3[k5]); x2[19] = '\0';
			object_type_3_buffer[v5] = 2;
#ifdef b7
			if (p4 > 0) v0 = k5; if (p4 == 1) { d1 = d8; m0 = q5; }
#endif 
			return;
		}
#ifdef b7
		b11 : if (p4 == 1 && object_type_3_buffer[v5] == 2) object_type_3_buffer[v5] = 1; if (p4 > 0) v0 = 0;
#endif 
			  return; } 
	
	int initialize() {
				  
		long h5; 
		int objectId; 
		unsigned long c15; 
		(void)write_string_to_term_and_log("[A-code kernel version 10.05; MLA, 01 Apr 94]\n");
		adv_data_path(KilobyteInputBuffer); 
		if ((data_file = fopen(KilobyteInputBuffer, Read_Binary)) == NULL) {
			(void)printf("Sorry, can't find the %s data file.\n", TITLE); 
			if (log_file) 
					(void)fclose(log_file); exit(1);
		}
#ifdef i2
		(void) printf("\nInitialising the universe - please wait...\n\n"); h5 =
			fread(KilobyteInputBuffer, sizeof(char), l2 + 1, data_file); (void)clearerr(data_file); (void)fclose
			(data_file); if (h5 != l2) {
			(void)printf("Wrong data file length!\n"); return
				(1);
		}
#else 
#ifdef BUFFERS
		i3[0] = fread(KilobyteInputBuffer, sizeof(char), e3, data_file) - 1; s0[0] = 0;
#else 
		firstAddressAfterEndOfBuffer = fread(KilobyteInputBuffer, sizeof(char), Kilobyte, data_file) - 1; 
		addressOfBeginningOfBuffer = 0;
#endif 
#endif 
		q2[0] = KilobyteInputBuffer[1]; 
		g3 = 1; 
		while (g3 < 16) {
			if ((q2[g3] = q2[g3 - 1] ^ KilobyteInputBuffer[g3 + 1]) == '\0') 
				break; 
			g3++;
		} 
		
		if (strcmp(q2, TITLE) != 0) {
					  (void)
						  printf("Data file does not belong to this program!\n"); 
					  return (1);
		} 
		commandTokens[0] = NULL; 

		for (objectId = OBJECT_TYPE_0_MIN_ID; objectId <= OBJECT_TYPE_0_MAX_ID; objectId++)
			modifyObjectFlag('s', objectId, OBJECT_TYPE_0_FLAG);
		
		for (objectId = OBJECT_TYPE_1_MIN_ID; objectId <= OBJECT_TYPE_1_MAX_ID; objectId++)
			modifyObjectFlag('s', objectId, OBJECT_TYPE_1_FLAG);
		
		for (objectId = OBJECT_TYPE_2_MIN_ID; objectId <= OBJECT_TYPE_2_MAX_ID; objectId++)
			modifyObjectFlag('s', objectId, OBJECT_TYPE_2_FLAG);
		
		if (u0 && *u0) 
			if ((log_file = fopen(u0, "a+")) == NULL) 
				(void)printf("(Sorry, unable to open log file...)\n"); 
			else 
				(void)fprintf(log_file,
						  "\n<%s: random seed %lu>\n", TITLE, e2); return (0);
	} 

	void BJBMessage(int a, int b, int c) 
	{
		printf("printMessage(%d, %d, %d): ", a, b, c);
		printMessage(a, b, c);
		printf("\n");
	}
			  
	main(argc, argv)
		int argc; char *argv[]; 
	{ 
		if (argc > 1) 
				while (--argc) {
					if ((e2 = atoi(argv[argc])) == 0); 
						u0 = argv[argc];
				} 
		if (e2 == 0) (void) time(&e2);
		e2 %= 32768L; 

		if (initialize() != 0) {
				(void)printf("Sorry, unable to set up the world.\n");
				return (1);
		} 

		if (0) {
			int i;
			for (i = 0; i <= OBJECT_TYPE_3_MAX_ID; i++) {
				printf("Message #%d:\n", i);
				printMessage(0, i, 0);
				printf("\n");
			}
		}


		x7();

		BJBMessage(64-64, 1520, 0); // BJB
		BJBMessage(64-64, 1302, 0);
		BJBMessage(0, 858, 0);
		BJBMessage(64-64, 1376, 0);
		BJBMessage(0, 1558, 0);
		BJBMessage(0, 1450, 0);
		BJBMessage(0, 802, 0);
		BJBMessage(0, 828, 0);
		BJBMessage(0, 805, 0);
		BJBMessage(0, 791, 0);
		BJBMessage(0, 997, 0);

#if 0	// Create the locations file.  You have to edit it by hand to take out the line breaks for the long descriptions and the empty string ones
		log_file = fopen("c:\\adventure-wherigo\\locations.txt", "w");
		for (int i = 136; i < 483; i++) {
			fprintf(log_file, "%d\t", i);
			printMessage(0, i, 0);
		}
		fclose(log_file);
		log_file = NULL;
#endif // 0


		(void)setjmp(done_with_command);
			  
		if (should_exit) {
			return (0); 
			if (log_file)
				(void)fclose(log_file);
		} 
			  
		while (1) {
			printf("Current location: %d\n", object_type_3_buffer[PLAYER_LOCATION]);
			u6();
		}
	} // main


			  
	tokenizeCommand() {
				  
		short d10; 
		char p7(); 
		nTokensInCommand = 0; 
		c4 = command; 
				  
		while (1) {
			commandTokens[nTokensInCommand] = NULL; 
			if ((z0[nTokensInCommand] = p7()) == '\n') return; 

			commandTokens[nTokensInCommand] = c4; 
			d10 = 0; 
					  
			while (*c4 != ' ' && *c4 != ',' && *c4 != ';' && *c4 != '.' && *c4 != '\n') {
				if (*c4 >= 'A' && *c4 <= 'Z')
					*c4 += 'a' - 'A'; 
				c4++; 
				d10++;
			} // while
			commandTokenLength[nTokensInCommand] = d10; 
			nTokensInCommand++;
		} // while
	} 
			  
	char p7() {
		char w8; 
		w8 = ' ';

		while (*c4 == ' ' || *c4 == ',' || *c4 == ';' || *c4 == '.' || *c4 == '\n') {
			if (*c4 != ' ') { 
				w8 = *c4; 
				if (w8 == ';') 
					w8 = '.'; 
			}
			*c4 = '\0'; 
			if (w8 == '\n') 
				return w8; 
			c4++;
		} // while

		return w8;
	} 
			  
u4(q5, k4, d7) int *q5; int *k4; long *d7; 
{ 
	int s6, x8, j9; 
	int g9; 
	int i14; 
	long a5; 
	char *nextByteToMatch; 
	long d11; 
	
	s6 = -1; 
	j9 = d12 + 1; 
	while (j9 > s6 + 1) { // binary search through the command list
		nLocates++;
		x8 = (s6 + j9) / 2;
		if (getByteOfDataFile(a5 = b12[x8]) == '!') 
			a5++; 

		nextByteToMatch = commandTokens[nTokensInCommand];
		
		while (getByteOfDataFile(a5) == *nextByteToMatch) 
			if (*nextByteToMatch != '\0') { 
				nextByteToMatch++; 
				a5++; 
			} 
			else 
				break; 
		
		if (getByteOfDataFile(a5) < *nextByteToMatch && *nextByteToMatch != '\0') 
			s6 = x8; 
		else 
			j9 = x8;
	} 
	
	*k4 = i11; 
	s6++; 
	j9 = d12;

	g9 = i11; 
	
	while (s6 < j9) {
		nextByteToMatch = commandTokens[nTokensInCommand]; 
		if (getByteOfDataFile(a5 = b12[s6]) == '!')
		{
			a5++; 
			i14 = 1;
		}
		else 
			i14 = 0; 
		d11 = a5;
		while (*nextByteToMatch == getByteOfDataFile(d11)) 
			if (*nextByteToMatch	== '\0') 
				break; 
			else { 
				d11++; 
				nextByteToMatch++; 
			} 
			
			if (*nextByteToMatch != '\0') 
				break; 
			if (!i14 || getByteOfDataFile(d11) == '\0') {
				*q5 = a6[s6]; 
				*k4 = j10[s6]; 
				*d7 = p8[s6]; 
				if (getByteOfDataFile(d11) == '\0')
			return;

			if (g9 != i11 && *k4 != g9) { 
				*k4 = c13; 
				return; 
			} 
			
			g9 = *k4; 

			if (getByteOfDataFile(a5)	== '\0') 
				break;
			} 
			s6++;
	} // while
	return; 
} 
			  
			  
			  int g10(b2, t4) int b2; int t4; { if
				  (isItemAtLocation(b2, t4)) return (1); if (q8(b2, t4)) return (1); return (0); } 
			  
int isItemAtLocation (int itemId, int location) 
{ 
	if (itemId > OBJECT_TYPE_0_MAX_ID)
	return (0); 

	if (j0[itemId] != r5)
		return (0); 

	if (location < 0)
		return (1); 
			  
	if (location < 1024) {
		if (object_type_3_buffer[itemId] == location)
			return (1);
	} else if (isObjectFlagSet(itemId, location - 1024))
		return (1); 

	return (0); 
} 
			  
			  int q8(b2, t4)
					  int b2; int t4; { if (b2 > OBJECT_TYPE_0_MAX_ID) return (0); if (t4 != -1) if (t4 < 1024)
			  {
				  if (object_type_3_buffer[b2] != t4) return (0);
			  }
					  else if (!(isObjectFlagSet(b2, t4 - 1024))) return
						  (0); if (j0[b2] == object_type_3_buffer[PLAYER_LOCATION]) return (1);
#ifdef m4
			  if (!(isObjectFlagSet(b2, m4))) return (0); if (j0[b2] + 1 == object_type_3_buffer[PLAYER_LOCATION]) return (1);
#endif
			  return (0); }

processMoveCommand(destinationLocation, messageIdToPrint, l10, u7, v8, l11, h7, s8, v9, p10, t9, h8, b13, v10, a8, b14) int destinationLocation, messageIdToPrint, l10, u7, v8, l11, h7, s8, v9, p10, t9, h8, b13, v10, a8, b14;
{ 
	int w10; 
				  
	if (messageIdToPrint < 0) 
		goto doMove;

	if ((w10 = l10) < 0) 
		w10 = -w10; 

	if (currentCommandContains(w10)) 
		goto doMove;
	else if (l10 < 0) 
		return; 
				  
	if ((w10 = u7) < 0) 
		w10 = -w10;
			  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (u7 < 0) 
		return; 
				  
	if ((w10 = v8) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (v8 < 0) 
		return; 
				  
	if ((w10 = l11) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (l11 < 0) 
		return; 
				  
	if ((w10 = h7) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (h7 < 0) 
		return; 
				  
	if ((w10 = s8) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (s8 < 0) 
		return;
			  
	if ((w10 = v9) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (v9 < 0)
		return; 
				  
	if ((w10 = p10) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (p10 < 0) 
		return; 
				  
	if ((w10 = t9) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (t9 < 0) 
		return; 
				  
	if ((w10 = h8) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (h8 < 0) 
		return; 
				  
	if ((w10 = b13) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10))
		goto doMove;
	else if (b13 < 0) 
		return; 
				  
	if ((w10 = v10) < 0) 
		w10 = -w10; 
				  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (v10 < 0) 
		return; 
				  
	if ((w10 = a8) < 0) 
		w10 = -w10;
			  
	if (currentCommandContains(w10)) 
		goto doMove;
	else if (a8 < 0) 
		return; 
				  
	if ((w10 = b14) < 0) 
		w10 = -w10; 

	if (currentCommandContains(w10)) 
		goto doMove;
				  
	return;

doMove: 
	object_type_3_buffer[PREVIOUS_LOCATION] = object_type_3_buffer[PLAYER_LOCATION]; 
	*getObjectPointer(PREVIOUS_LOCATION) = -1; 
	object_type_3_buffer[PLAYER_LOCATION] = destinationLocation; 
	*getObjectPointer(PLAYER_LOCATION) = -1;

#if defined (f2) && defined (v5)
	modifyObjectFlag('s', v5, f2);
#endif

	if (messageIdToPrint < -2) 
		messageIdToPrint = -messageIdToPrint; 
			  
	if (messageIdToPrint > 0) 
		printMessage(0, messageIdToPrint, 0); 
			  
	if (messageIdToPrint != -1) 
		longjmp(done_with_command, 1); 
	return; 
} 
			  
			  
			  s9(b2, t4) int b2, t4; { j0[b2] = (t4 <= OBJECT_TYPE_1_MAX_ID || t4 ==
				  r5) ? t4 : object_type_3_buffer[t4];
#if defined (g11) && defined (v5)
			  modifyObjectFlag('s', v5, g11);
#endif
			  return; } 
			  
l12(int b2, int t4, int j4) 
{ 
	object_type_3_buffer[t4] = b2 ? object_type_3_buffer[j4] : j4; 

	if (t4 < OBJECT_TYPE_3_MIN_ID) 
		return; 

	if (b2 && j4 >= OBJECT_TYPE_3_MIN_ID && j4 <= OBJECT_TYPE_3_MAX_ID) 
		*getObjectPointer(t4) = *getObjectPointer(j4); 
	else if (*getObjectPointer(t4) == -1) 
		*getObjectPointer(t4) = 0; 
	
	return; 
} 
			  
f3(int b2, int t4)
{ 
	object_type_3_buffer[b2] = t4; 
	*getObjectPointer(b2) = -1; 
	h3[b2] = h3[t4]; 
	return; 
} 

z5(b2, t4) int b2, t4;
			  { object_type_3_buffer[b2] = object_type_3_buffer[object_type_3_buffer[t4]]; return; } c16(b2, t4) int b2, t4; { object_type_3_buffer[object_type_3_buffer[b2]]
				  = (t4 > OBJECT_TYPE_3_MAX_ID || t4 < OBJECT_TYPE_3_MIN_ID) ? t4 : object_type_3_buffer[t4]; return; } t10(b2, t4) int b2, t4;
			  { object_type_3_buffer[b2] = j0[(t4 < OBJECT_TYPE_3_MIN_ID || t4 > OBJECT_TYPE_3_MAX_ID) ? t4 : object_type_3_buffer[t4]]; *getObjectPointer(b2) = -1; return;
			  } 
			  
			  int t11(b2) int b2; // Not quite sure about this, because I can't see how getObkjectPointer could return -1
			  { 
				  if (*getObjectPointer(b2) == -1) 
					  return object_type_3_buffer[b2]; 
				  else return b2; 
			  } 
			  
			  r7() {
#ifndef i2
				  (void) fclose(data_file);
#endif 
#ifdef y0
				  (void) printf("\n(Locates: demanded %ld (+%ld), faults %ld (+%ld))\n",
					  n2, n2 - t1, l3, l3 - p0); (void)printf("(Locate ratio %ld%%)\n", (((1000
						  * l3) / n2) + 5) / 10);
#endif 
				  if (log_file) (void)fclose(log_file); should_exit = 1; longjmp(done_with_command, 1);
			  } 
			  
			  short *getObjectPointer(objectId) int objectId;
			  { short *objectPointer; 
				objectPointer = NULL;

				if (objectId <= OBJECT_TYPE_0_MAX_ID)
					objectPointer = &object_type_0_buffer[OBJECT_TYPE_0_SIZE_IN_SHORTS * (objectId - OBJECT_TYPE_0_MIN_ID)];
				else if (objectId <= OBJECT_TYPE_1_MAX_ID)
					objectPointer = &object_type_1_buffer[OBJECT_TYPE_1_SIZE_IN_SHORTS * (objectId - OBJECT_TYPE_1_MIN_ID)];
				else if (objectId <= OBJECT_TYPE_3_MAX_ID)
					objectPointer = &object_type_2_buffer[OBJECT_TYPE_2_SIZE_IN_SHORTS * (objectId - OBJECT_TYPE_2_MIN_ID)];

				return (objectPointer);
			  } 
			  
			  modifyObjectFlag(setFlag, objectId, whichFlag) char setFlag; int objectId; int whichFlag;
			  { short *objectPtr; 
			    objectPtr = getObjectPointer(objectId);
				while (whichFlag > 15) {	// Presumably this weirdness is to handle the 32 bit objects, though it would work with larger ones, too.
					objectPtr++;
					whichFlag -= 16;
				} 
				
				if (setFlag == 's')
					*objectPtr |= 1 << whichFlag;
				else *objectPtr &= ~(1 << whichFlag);
				return; 
			  }

			  int isObjectFlagSet(objectId, whichFlag) int objectId; int whichFlag;
			  { short *objectPtr;
			  objectPtr = getObjectPointer(objectId);
				while (whichFlag > 15) {
					objectPtr++;
				  whichFlag -= 16;
				} 
				return (*objectPtr & 1 << whichFlag);
			  } 
			  
			  void g12() {
				  v0 = 0; commandTokens[nTokensInCommand]
					  = NULL; return;
			  }
