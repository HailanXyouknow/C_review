#include <stdio.h>
// Assignment - 1, Section - 2.
/** Please read the instructions in the comment and 
	write the code accordingly. 
	This assignment will test your understanding with console input and output.
	Just in case if you do not know the meaning of the term 'console', we typically
	indicate it to mean keyboard and terminal. Input console indicates to keyboard and 
	output console indicates terminal.
	This will also test your ability to use variables.
*/	
int main(){
	// Please follow the instructions and write the code chronologically.
	//  1. Declare a double type variable named rate and assign 0.06 to it
	//  2. Declare an integer variable, name it duration.
	//  3. Declare a double variable and name it principal_amount
	//  4. Declare a double variable and name it total_interest
	//  5. Prompt user to input duration in year. Read the year value in duration using 
	//	   scanf. Since duration is integer you must use %d.
	//	6. Prompt user to input principal amount of loan. Read the value in the 
	//	   variable principal_amount. Think about the format specifier this time. 
	//	   principal_amount is not an integer, it is a double, so use the format specifier
	//	   of double.
	//  7. Now you will calculate the total interest, if R is rate, D is duration and P 
	//	   is principal then the total interest should be calculated as follows:
	//		I = (P * D * R)
	//	   Use the above formula to calculate the total interest and finally print the 
	//     amount into the console. Your output should be like the following: 
	//	   Output: 
	//	   		Your total payable interest is $3000.000000  when principal_amount given as 1000.0, duration is 5					 
	//			

	double rate = 0.06, principal_amount = 0.0, total_interest = 0.0;
	int duration = 0;

	printf("Please enter the duration in year: ");
	scanf("%d", &duration);
	//printf("duration = %d\n", duration);  

	printf("Please enter the principal amount of loan: ");
	scanf("%lf", &principal_amount);
	//printf("principal = %lf\n", principal_amount); 

	total_interest = rate * duration * principal_amount;
	printf("Your total payable interest is %lf when principal_amount is given as %lf, duration is %d\n", total_interest, principal_amount, duration);

	return 0;
}