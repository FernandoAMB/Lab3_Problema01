/****************************************************************************/
/*  C5502.cmd                                                               */
/*  Copyright (c) 2010  Texas Instruments Incorporated                      */
/*                                                                          */
/*    Description: This file is a sample linker command file that can be    */
/*                 used for linking programs built with the C compiler and  */
/*                 running the resulting .out file on a C5502.              */
/*                 Use it as a guideline.  You will want to                 */
/*                 change the memory layout to match your specific          */
/*                 target system.  You may want to change the allocation    */
/*                 scheme according to the size of your program.            */
/*                                                                          */
/****************************************************************************/
-heap  0x1000
-stack 0x1000


MEMORY
{
  	MMR  		:	o = 0x000000		l = 0x0000c0
  	DARAM0	:	o = 0x0000C0		l = 0x001F40
  	DARAM1	:	o = 0x002000		l = 0x002000
    DARAM2	:	o =	0x004000		l = 0x002000
    DARAM3	:	o = 0x006000		l = 0x002000	
  	DARAM4	:	o = 0x008000		l = 0x002000
    DARAM5	:	o = 0x00A000		l = 0x002000
  	DARAM6	:	o = 0x00C000		l = 0x002000
    DARAM7	:	o = 0x00E000		l = 0x002000
	
  	CE0	   	:	o = 0x010000		l = 0x3F0000
    CE1 		:	o = 0x400000		l = 0x400000
    CE2	  	:	o = 0x800000		l = 0x400000
    CE3		  :	o = 0xC00000		l = 0x3F8000
}

SECTIONS
{
    .cinit		>	DARAM0
  	.text  		>	DARAM1
    .stack		>	DARAM0
    .sysstack	>	DARAM0
    .sysmem		>	DARAM4
  	.data    	>	DARAM4
    .cio      >	DARAM0
    .bss      >	DARAM5
  	.const    >	DARAM0
}
