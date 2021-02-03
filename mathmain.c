/***********************************\
| Main maths functions              |
| Unit 2 Assignment 2               |
| Rory Brennan 18237606             |
| Last Change: 15/11/2019           |
\***********************************/

// System header files
#include <stdio.h>
#include <stdlib.h>

// Module header files
#include "3DShapes/3dim.h"
#include "2DShapes/2dim.h"

// Internal Function Declarations
int Shapes2D();
int Shapes3D();
void calcPrint(int dim,int a,int b);

//////////////////////////////////////////////////
// function main()
// entry point from operating system. defines 
// the main application of this program. first asks
// the user to choose a number system and calls the
// corresponding function to perform calculations.
//
// author:	Rory Brennan 18237606
// date:        15/11/2019
//////////////////////////////////////////////////

int main()
{
  printf("----------------------------------------\n");
  printf("           GEOMETRY CALCULATOR               \n");
  int choice; // variable for choosing dimension of shape
  printf("What shapes would you like to work with?\n");
  printf("1) 2D Shapes \n2) 3D Shapes \n3) Exit\n");

  // do-while loop to ensure choice is valid
  do{ 
  printf("Enter your valid choice: ");
  scanf("%d",&choice);
  if (choice < 1 || choice > 3)
    {
      printf("Number is invalid. Try again...\n");
    }
  }while (choice < 1 || choice > 3);

  // switch statement to call functions
  // and exit program once finished
  switch(choice)
    {
    case 1 :{
      printf("----------------------------------------\n");
      Shapes2D();
      printf("----------------------------------------\n");
      return 0;
    }
    case 2 :{
      printf("----------------------------------------\n");
      Shapes3D();
      printf("----------------------------------------\n");
      return 0;
    }
    case 3 :{
      printf("Exiting.....\n");
      printf("----------------------------------------\n");
      return 0;
    }
    }
}

//////////////////////////////////////////////////
// Shapes2D()
// performs calculations for 2D shapes
// first prompts the user to choose a shape
// Then asks for dimensions of chosen shape
// performs calculations based on dimensions
// 
// param:	none
// return:	EXIT_SUCCESS
//////////////////////////////////////////////////

int Shapes2D()
{
  int num2dShape; // variable for choosing 2D shape
  int dim = 2; // variable for dimension of shape
  printf("                2D SHAPES             \n");
  printf("1) Square \n2) Rectangle \n3) Circle \n4) Triangle \n5) Parallelogram \n6) Exit\n");

  // do-while loop to ensure choice is valid
  do{
  printf("Enter your valid choice: ");
  scanf("%d",&num2dShape);
  if (num2dShape < 1 || num2dShape > 6)
    {
      printf("Number is invalid. Try again...\n");
    }
  }while (num2dShape < 1 || num2dShape > 6);

  // switch statement to do calculations based
  // on what shape was chosen
  switch(num2dShape)
    {
    case 1 :{ // Square
      int s;
      printf("Enter square length: ");
      scanf("%d",&s);
      int a = squareA(s);
      int p = squareP(s);
      calcPrint(dim,a,p);
      break;
    }
    case 2 :{ // Rectangle
      int l,w;
      printf("Enter rectangle length: ");
      scanf("%d",&l);
      printf("Enter rectangle width: ");
      scanf("%d",&w);
      int a = rectangleA(l,w);
      int p = rectangleP(l,w);
      calcPrint(dim,a,p);
      break;
    }
    case 3 :{ // Circle
      int r;
      printf("Enter circle radius: ");
      scanf("%d",&r);
      int a = circleA(r);
      int c = circleP(r);
      calcPrint(dim,a,c);
      break;
    }
    case 4 :{ // Triangle
      int base,h,a,b,c;
      printf("Enter triangle base length: ");
      scanf("%d",&base);
      printf("Enter triangle height: ");
      scanf("%d",&h);
      printf("Enter side length 1: ");
      scanf("%d",&a);
      printf("Enter side length 2: ");
      scanf("%d",&b);
      printf("Enter side length 3: ");
      scanf("%d",&c);
      int ar = triangleA(base,h);
      int p = triangleP(a,b,c);
      calcPrint(dim,ar,p);
      break;
    }
    case 5 :{ // Parallelogram
      int b,h,a;
      printf("Enter parallelogram base length: ");
      scanf("%d",&b);
      printf("Enter parallelogram height: ");
      scanf("%d",&h);
      printf("Enter side length : ");
      scanf("%d",&a);
      int ar = paralleloA(b,h);
      int p = paralleloP(b,a);
      calcPrint(dim,ar,p);
      break;
    }
    case 6 :{ // Exit
      printf("Exiting.....\n");
      break;
    }
    }
  return 0;
}

//////////////////////////////////////////////////
// Shapes3D()
// performs calculations for 3D shapes
// first prompts the user to choose a shape
// Then asks for dimensions of chosen shape
// performs calculations based on dimensions
// 
// param:	none
// return:	EXIT_SUCCESS
//////////////////////////////////////////////////

int Shapes3D()
{
  int num3dShape; // variable for choosing 3D shape
  int dim = 3; // variable for dimension of shape
  printf("                3D SHAPES             \n");
  printf("1) Cube \n2) Prism \n3) Sphere \n4) Cylinder \n5) Exit\n");

  // do-while loop to ensure choice is valid
  do{
  printf("Enter your valid choice: ");
  scanf("%d",&num3dShape);
  if (num3dShape < 1 || num3dShape > 5)
    {
      printf("Number is invalid. Try again...\n");
    }
  }while (num3dShape < 1 || num3dShape > 5);

  // switch statement to do calculations based
  // on what shape was chosen
  switch(num3dShape)
    {
    case 1 :{ // Cube
      int s;
      printf("Enter cube length: ");
      scanf("%d",&s);
      int a = cubeA(s);
      int v = cubeV(s);
      calcPrint(dim,a,v);
      break;
    }
    case 2 :{ // Prism
      int l,h,w;
      printf("Enter prism length: ");
      scanf("%d",&l);
      printf("Enter prism height: ");
      scanf("%d",&h);
      printf("Enter prism width : ");
      scanf("%d",&w);
      int a = prismA(l,h,w);
      int v = prismV(l,h,w);
      calcPrint(dim,a,v);
      break;
    }
    case 3 :{ // Sphere
      int r;
      printf("Enter sphere radius: ");
      scanf("%d",&r);
      int a = sphereA(r);
      int v = sphereV(r);
      calcPrint(dim,a,v);
      break;
    }
    case 4 :{ // Cylinder
      int r,h;
      printf("Enter cylinder radius: ");
      scanf("%d",&r);
      printf("Enter cylinder height: ");
      scanf("%d",&h);
      int a = cylinderA(r,h);
      int v = cylinderV(r,h);
      calcPrint(dim,a,v);
      break;
    }
    case 5 :{ // Exit
      printf("Exiting.....\n");
      break;
    }
    }
  return 0;
}

//////////////////////////////////////////////////
// calcPrint()
// Lets the user chooses which calculation to get
// and prints out chosen calculation
// 
// param:       int a, int p, int dim
// return:      void
//////////////////////////////////////////////////

void calcPrint(int dim,int a,int b)
{
  int calcnum; // variable for choosing which calculation
  printf("----------------------------------------\n");
  printf("What would you like to calculate?\n");
  if( dim == 2)
    {
      printf("1) Area \n2) Perimeter \n3) Both \n4) Exit\n");
      // do-while loop to ensure choice is valid
      do{
          printf("Enter your valid choice: ");
          scanf("%d",&calcnum);
	  
         if (calcnum < 1 || calcnum > 4)
         { 
           printf("Number is invalid. Try again...\n");
         }
      }while (calcnum < 1 || calcnum > 4);

      // switch statement to print calculation
      switch (calcnum)
	{
	case 1:{
	  printf("Area: %d\n",a);
	  break;
	}
	case 2:{
	  printf("Perimeter: %d\n",b);
	  break;
	}
	case 3:{
	  printf("Area: %d\n",a);
	  printf("Perimeter: %d\n",b);
	  break;
	}
	case 4:{
	  printf("Exiting.....\n");
          break;	  
	}
	}
    }

  if( dim == 3)
    {
      printf("1) Surface Area \n2) Volume \n3) Both \n4) Exit\n");
      // do-while loop to ensure choice is valid
      do{
          printf("Enter your valid choice: ");
          scanf("%d",&calcnum);
	  
         if (calcnum < 1 || calcnum > 4)
         { 
           printf("Number is invalid. Try again...\n");
         }
      }while (calcnum < 1 || calcnum > 4);

      // switch statement to print calculation
      switch (calcnum)
	{
	case 1:{
	  printf("Surface Area: %d\n",a);
	  break;
	}
	case 2:{
	  printf("Volume: %d\n",b);
	  break;
	}
	case 3:{
	  printf("Area: %d\n",a);
	  printf("Perimeter: %d\n",b);
	  break;
	}
	case 4:{
	  printf("Exiting.....\n");
          break;	  
	}
	}
    }
}
