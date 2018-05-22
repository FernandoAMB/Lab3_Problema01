/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.2 and the Signal Processing Toolbox 7.4.
 * Generated on: 19-May-2018 19:05:55
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 4
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
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
#define MWSPT_NSEC 9
const int NL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T NUM[MWSPT_NSEC][3] = {
  {
     7756,      0,      0 
  },
  {
    32767,  32767,  32767 
  },
  {
     6083,      0,      0 
  },
  {
    32767,  32767,  32767 
  },
  {
     5222,      0,      0 
  },
  {
    32767,  32767,  32767 
  },
  {
     4850,      0,      0 
  },
  {
    32767,  32767,  32767 
  },
  {
    32767,      0,      0 
  }
};
const int DL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T DEN[MWSPT_NSEC][3] = {
  {
    32767,      0,      0 
  },
  {
    32767, -24760,  23016 
  },
  {
    32767,      0,      0 
  },
  {
    32767, -19420,  10985 
  },
  {
    32767,      0,      0 
  },
  {
    32767, -16669,   4787 
  },
  {
    32767,      0,      0 
  },
  {
    32767, -15482,   2112 
  },
  {
    32767,      0,      0 
  }
};