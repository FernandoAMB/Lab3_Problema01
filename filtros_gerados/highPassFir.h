/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.2 and the Signal Processing Toolbox 7.4.
 * Generated on: 19-May-2018 19:04:53
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 34
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 *
 * wpass = 0.7
 * wstop = 0.5
 * Coeficientes divididos por 4.
 *
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
#define FILTER_SIZE 35
/* 
 * Expected path to tmwtypes.h 
 * D:\Programas\MATLAB\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */
const int BL = FILTER_SIZE;
DATA B[FILTER_SIZE] = {
-3, 18, -65, 142, -190, 116, 95, -277, 182, 219, -540, 273, 570, -1141, 350, 1994, -4664, 5842, -4664, 1994, 350, -1141, 570, 273, -540, 219, 182, -277, 95, 116, -190, 142, -65, 18, -3};

DATA buffer[FILTER_SIZE + 2];


void filter(DATA * samplesIn, ushort numSamples, DATA * out) {
    ushort overflowFlag = fir (samplesIn, B, out, buffer, numSamples, BL);
    printf("\n\Overflow: %u\n", overflowFlag);
}
