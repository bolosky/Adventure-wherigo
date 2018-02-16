/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#include <setjmp.h>
extern jmp_buf done_with_command; extern int object_type_3_buffer[]; extern int j0[]; extern short object_type_0_buffer[];
extern short object_type_1_buffer[]; extern short object_type_2_buffer[]; extern short *getObjectPointer(); extern int isObjectFlagSet();
extern int(*command_dispatch_table[])();
#include "autod1.h"
#ifdef b7
extern v0;
#endif

