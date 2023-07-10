/*
Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Constraints

 integer variables 
 float variables 
Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.


*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int number_1, number_2;
    float number_3, number_4;
    scanf("%d %d", &number_1, &number_2);
    scanf("%f %f", &number_3, &number_4);
    printf("%d %d\n", number_1+number_2,number_1-number_2);
    printf("%.1f %.1f",number_3+number_4, number_3-number_4);
    return 0;
}