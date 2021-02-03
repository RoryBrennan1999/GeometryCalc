// Header file for 2dim.c
// Rory Brennan 18237606

// Include guard
#ifndef DIM2_H
#define DIM2_H

// System header files
#include <stdio.h>
#include <stdlib.h>

// Symbolic constant
#define PI 3.14159265359

// Function declarations
int squareA(int s);
int squareP(int s);
int rectangleA(int l,int w);
int rectangleP(int l,int w);
int circleA(int r);
int circleP(int r);
int triangleA(int base,int h);
int triangleP(int a,int b,int c);
int paralleloA(int b,int h);
int paralleloP(int b,int a);

#endif
