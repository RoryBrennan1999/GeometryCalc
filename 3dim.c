/***********************************\						
| 3D shapes maths functions         |
| Used for calculating properties   |
| of various 3D shapes and then     | 
| printing out result               |
| Unit 2 Assignment 2               |
| Rory Brennan 18237606             |
| Last Change: 15/11/2019           |
\***********************************/

// Header file
#include "3dim.h"
  
/*
 * int cubeA(int s)
 * int s: side of cube
 * returns int A (Area)
 */

int cubeA(int s)
{
  int A = 6*squareA(s);
  return A;
}

/*
 * int cubeV(int s)
 * int s: side of cube
 * returns int V (Volume)
 */

int cubeV(int s)
{
  int V = CUBE(s);
  return V;
}


/*
 * int prismA(int l,int h,int w)
 * int l: length of prism
 * int h: height of prism
 * int w: width of prism
 * returns int A (Area)
 */

int prismA(int l,int h,int w)
{
  int A = 2*rectangleA(l,h) + 2*rectangleA(l,w) + 2*rectangleA(h,w);
  return A;
}

/*
 * int prismV(int l,int h,int w)
 * int l: length of prism
 * int h: height of prism
 * int w: width of prism
 * returns int V (Volume)
 */

int prismV(int l,int h,int w)
{
  int V = l*w*h;
  return V;
}

/*
 * int sphereA(int r)
 * int r: radius of sphere
 * returns int A (Area)
 */

int sphereA(int r)
{
  int A = 4*circleA(r);
  return A;
}

/*
 * int sphereV(int r)
 * int r: radius of sphere
 * returns int V (Volume)
 */

int sphereV(int r)
{
  int V = ((4*PI)/3)*(CUBE(r));
  return V;
}


/*
 * int cylinderA(int r,int h)
 * int r: radius of cylinder
 * int h: height of cylinder
 * returns int A (Area)
 */

int cylinderA(int r,int h)
{
  int A = (circleP(r)*h) + (2*circleA(r));
  return A;
}

/*
 * int cylinderP(int r,int h)
 * int r: radius of cylinder
 * int h: height of cylinder
 * returns int V (Volume)
 */

int cylinderV(int r,int h)
{
  int V = circleA(r) * h;
  return V;
}


