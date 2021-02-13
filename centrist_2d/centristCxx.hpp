#ifndef __centristCxx_hpp
#define __centristCxx_hpp

/**
 \file realtimeCxx.h
 \details Source for realtime centrist dynamic library .
 \author Petr Neduchal
 \version 0.5.0
 \date 2013
 */

/* ------------------------------------------------------------------------- */

/**
 * \fn int* realTimecentristCxx(int rows, int columns, const int* data, int* result);
 *
 * \brief Realtime implementation of centrist algorithm
 *
 * Function returns histogram of the centrist image in result parameter.
 * \param rows  Number of rows in image.
 * \param columns Number of cols in image.
 * \param data  Image data in 1D array.
 * \param result Output parameter.
 * \return Histogram of centrist image data.
 */
#ifdef __cplusplus
  extern "C"
#endif
int* centristCxx(int rows, int columns, const int* data, int* result);

#ifdef __cplusplus
  extern "C"
#endif
int * centristImCxx(int rows, int columns, const int* data, int* result);
/* ------------------------------------------------------------------------- */

#endif
