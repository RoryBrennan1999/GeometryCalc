/***********************************\						
| 2D shapes maths functions         |
| Used for calculating properties   |
| of various 2D shapes and printing | 
| out the result                    |
| Unit 2 Assignment 2               |
| Rory Brennan 18237606             |
| Last Change: 15/11/2019           |
\***********************************/


// Header file
#include "2dim.h" 

/* 
 * int squareA(int s)
 * int s: length of side of square
 * return: int A (Area)
 */

int squareA(int s)
{
  int A = s*s;
  return A;
}

/* 
 * int squareP(int s)
 * int s: length of side of square
 * return: int P (Perimeter)
 */

int squareP(int s)
{
  int P = 4*s;
  return P;
}


/* 
 * int rectangleA(int l,int w)
 * int l: length of rectangle
 * int w: width of rectangle
 * returns int A (Area)
 */

int rectangleA(int l,int w)
{
  int A = l*w;
  return A;
}

/* 
 * int rectangleP(int l,int w)
 * int l: length of rectangle
 * int w: width of rectangle
 * returns int P (Perimeter)
 */

int rectangleP(int l,int w)
{
  int P = 2*(l+w);
  return P;
}

/* 
 * int circleA(int r)
 * int r: radius of circle
 * returns int A (Area)
 */

int circleA(int r)
{
  int A = PI*(r*r);
  return A;
}

/* 
 * int circleP(int r)
 * int r: radius of circle
 * returns int P (Perimeter)
 */

int circleP(int r)
{
  int P = 2*PI*r;
  return P;
}

/* 
 * int triangleA(int base,int h,int a,int b,int c)
 * int b: base of triangle
 * int h: height of triangle
 * return int A (Area)
 */

int triangleA(int base,int h)
{
  int A = (base*h)/2;
  return A;
}

/* 
 * int triangleP(int base,int h,int a,int b,int c)
 * int a,b,c: sides of triangle
 * return int P (Perimeter)
 */

int triangleP(int a,int b,int c)
{
  int P = a+b+c;
  return P;
}

/* 
 * int paralleloA(int b,int h)
 * int b: base of parallelogram
 * int h: height of parallelogram
 * returns int A (Area)
 */

int paralleloA(int b,int h)
{
  int A = b*h;
  return A;
}

/* 
 * int paralleloP(int b,int h,int a)
 * int b: base of parallelogram
 * int a: side of parallelogram
 * returns int P (Perimeter)
 */

int paralleloP(int b,int a)
{
  int P = (2*a)+(2*b);
  return P;
}

