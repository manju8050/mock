#include<stdio.h>
#include"area_of_circle.h"
#include"area_of_react.h"

float radius;
int main()
{
  
  float length,breadth;
  float area_circle,area_react;
   
  printf("Enter the radius ,length, breadth\n");
 
  
  scanf("%f\n",&radius);
  scanf("%f\n",&length);
  scanf("%f",&breadth);
  
  
  area_of_react(&length,&breadth,&area_react);
  area_circle= area_of_circle();   //using extern keyword for the variables in this function
  
  
  printf("Area of circle= %f\n", area_circle);
  printf("Area of rectangle= %f\n", area_react);
  return 0;
  }
