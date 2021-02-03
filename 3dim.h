// Header file for 3dim.c
// Rory Brennan 18237606

// Include guard
#ifndef DIM3_H 
#define DIM3_H

// System header files
#include <stdio.h> 
#include <stdlib.h>

// Other header file
#include "../2DShapes/2dim.h"

// Symbolic Constant
#define PI 3.14159265359

// Macro with parameter
#define CUBE(a) ((a)*(a)*(a))

// Function declarations
int cubeA(int s);
int cubeV(int s);
int prismA(int l,int h,int w);
int prismV(int l,int h,int w);
int sphereA(int r);
int sphereV(int r);
int cylinderA(int r,int h);
int cylinderV(int r,int h);

#endif
