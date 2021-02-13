#ifndef __centrist_hpp
#define __centrist_hpp

/**
 \file realtime.h
 \details Interface for realtime centrist dynamic library.
 \author Petr Neduchal
 \version 1.0.0
 \date 2012
 */


/** \def WINDLLMSG
 *  Definition of string for dll compilation. In unix system the definition is empty.
*/
#ifdef __WIN32__

    #include <windows.h>

    #define  WINDLLMSG _declspec(dllexport)

#else
    #define WINDLLMSG ;
#endif

/* ------------------------------------------------------------------------- */

/**
 * \fn int* realTimecentrist(int rows, int columns, const int* data, int* result);
 *
 * \brief Realtime implementation of centrist algorithm
 *
 * Function returns histogram of the centrist image in result parameter.
 * \param rows  Number of rows in image.
 * \param columns  Number of cols in image.
 * \param data  Image data in 1D array.
 * \param result Output parameter.
 * \return Histogram of centrist image data.
 */
WINDLLMSG  int* centrist(int rows, int columns, const int* data,
  int* result);
/*
WINDLLMSG  int* centrist2x8(int rows, int columns, const int* data,
  int* result);

WINDLLMSG  int* centrist3x10(int rows, int columns, const int* data,
  int* result);

WINDLLMSG  int* centrist4x12(int rows, int columns, const int* data,
  int* result);

WINDLLMSG  int* uniformcentrist(int columns, const int* data, int* result);

WINDLLMSG  int* rotationMincentrist(int columns, const int* data, int* result);
*/
WINDLLMSG  int* centristIm(int rows, int columns, const int* data,
  int* result);

/* ------------------------------------------------------------------------- */

#endif
