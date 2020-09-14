/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
	int x, y ,z;
	double average;
	
	printf("First value: ");
	scanf("%d", &x);
	printf("Second value: ");
	scanf(" %d", &y);
	printf("Third value: ");
	scanf(" %d", &z);

	printf("Values entered: %d %d %d\n", x, y, z);

	average = (double) (x + y + z)/3;
	printf("Average: %f\n", average);

	return 0;
}