#ifndef __centristCxx_cxx
#define __centristCxx_cxx

/* -------------------------------------------------------------------------

      Program:   centrist filter for C++
      Module:    $RCSfile: centristCxx.cxx $
      Language:  C++
      Date:      $Date: 2012-07-18 12:50:00 $
      Version:   $Revision: 1.0.0 $

   ------------------------------------------------------------------------- */

/* Necessary headers */  
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "centristCxx.hpp"


// Helping macro for real-time algorithm
#define compab_mask_inc(ptr,shift) \
{ value |= ((unsigned int)(cntr - *ptr) & 0x80000000) \
>> (31-shift); ptr++; }


using namespace std;

/* ------------------------------------------------------------------------- */

int * centristCxx(int rows, int columns, const int* data, int* result)
{
  // MASK (group of pointers 
  const int *p0 = data,
     *p1 = p0 + 1,
     *p2 = p1 + 1,
     *p3 = p0 + columns,
     *p4 = p2 + columns,
     *p5 = p3 + columns,
     *p6 = p5 + 1,
     *p7 = p6 + 1,
		*center = p1 + 1;
  // Help variables for rows,cols and center
	int r,c,cntr;
	unsigned int value;
  // Memory allocation
  memset(result, 0, 256*sizeof(int));
  // Main cycle
  for (r=0;r<rows-2;r++)
  {
    for (c=0;c<columns-2;c++)
    {
      value = 0;
      cntr = *center - 1;
      compab_mask_inc(p0,7);
      compab_mask_inc(p1,6);
      compab_mask_inc(p2,5);
      compab_mask_inc(p3,4);
      compab_mask_inc(p4,3);
      compab_mask_inc(p5,2);
      compab_mask_inc(p6,1);
      compab_mask_inc(p7,0);
      center++;
      result[value]++;
    }
    p0 += 2;
    p1 += 2;
    p2 += 2;
    p3 += 2;
    p4 += 2;
    p5 += 2;
    p6 += 2;
    p7 += 2;
    center += 2;
  }
  
  return result;
}


/* ------------------------------------------------------------------------- */


int * centristImCxx(int rows, int columns, const int* data, int* result)
{
  // MASK (group of pointers 
  const int *p0 = data,
     *p1 = p0 + 1,
     *p2 = p1 + 1,
     *p3 = p0 + columns,
     *p4 = p2 + columns,
     *p5 = p3 + columns,
     *p6 = p5 + 1,
     *p7 = p6 + 1,
		*center = p1 + 1;

   int *rp = result + columns + 1;
  // Help variables for rows,cols and center
	int r,c,cntr;
	unsigned int value;
  // Memory allocation
  memset(result, 0, rows*columns*sizeof(int));
  // Main cycle
  for (r=0;r<rows-2;r++)
  {
    for (c=0;c<columns-2;c++)
    {
      value = 0;
      cntr = *center - 1;
      compab_mask_inc(p0,7);
      compab_mask_inc(p1,6);
      compab_mask_inc(p2,5);
      compab_mask_inc(p3,4);
      compab_mask_inc(p4,3);
      compab_mask_inc(p5,2);
      compab_mask_inc(p6,1);
      compab_mask_inc(p7,0);
      center++;
      *rp = value;
      rp++;
    }
    p0 += 2;
    p1 += 2;
    p2 += 2;
    p3 += 2;
    p4 += 2;
    p5 += 2;
    p6 += 2;
    p7 += 2;
    center += 2;
    rp += 2;
  }
  
  return result;
}
/* ------------------------------------------------------------------------- */

#endif
