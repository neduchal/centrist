#ifndef __centrist_cxx
#define __centrist_cxx

/* -------------------------------------------------------------------------

      Program:   centrist for C++
      Module:    $RCSfile: realtime.c $
      Language:  C++
      Version:   $Revision: 0.6.0 $

   ------------------------------------------------------------------------- */

/* Necessary headers */  
#include "centristCxx.hpp"
//#include "centrist2x8Cxx.hpp"
#include "centrist.hpp"

/* ------------------------------------------------------------------------- */

WINDLLMSG  int* centrist(int rows, int columns, const int* data,
  int* result)
{
  int* dataOut = centristCxx(rows, columns, data, result);
  return dataOut;
}


/* ------------------------------------------------------------------------- */
/*
WINDLLMSG  int* centrist2x8(int rows, int columns, const int* data,
  int* result)
{
  int* dataOut = centrist2x8Cxx(rows, columns, data, result);
  return dataOut;
}
*/
/* ------------------------------------------------------------------------- */
/*
WINDLLMSG  int* centrist3x10(int rows, int columns, const int* data,
  int* result)
{
  int* dataOut = centrist3x10Cxx(rows, columns, data, result);
  return dataOut;
}
*/
/* ------------------------------------------------------------------------- */
/*
WINDLLMSG  int* centrist4x12(int rows, int columns, const int* data,
  int* result)
{
  int* dataOut = centrist4x12Cxx(rows, columns, data, result);
  return dataOut;
}
*/
/* ------------------------------------------------------------------------- */
/*
WINDLLMSG  int* uniformcentrist(int columns, const int* data,
  int* result)
{
  int* dataOut = uniformcentristCxx(columns, data, result);
  return dataOut;
}
*/
/* ------------------------------------------------------------------------- */
/*
WINDLLMSG  int* rotationMincentrist(int columns, const int* data,
  int* result)
{
  int* dataOut = rotationMincentristCxx(columns, data, result);
  return dataOut;
}
*/
/* ------------------------------------------------------------------------- */

WINDLLMSG  int* centristIm(int rows, int columns, const int* data,
  int* result)
{
  int* dataOut = centristImCxx(rows, columns, data, result);
  return dataOut;
}

#endif

