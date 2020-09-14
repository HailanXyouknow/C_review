#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount = 0;  // you need to calculate this

    printf("****** Welcome to the ABC Power Supply Company *******\n");
	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.
    printf("Input Unit Consumed: ");
    scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
        return 0;
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units <= 250){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	
        bill_amount = 100 * 0.2 + (units-100) * 0.5;
	}
	else if(units <= 500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
        bill_amount = 100 * 0.2 + 150 * 0.5 + (units-250) * 0.75;
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
        bill_amount = 100 * 0.2 + 150 * 0.5 + 250 * 0.75 + (units-500);
	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	// invalid that is negative then no bill should be printed. **
    printf("Total bill: $%.2lf for %d units\n", bill_amount, units);
    printf("Thank you!\n");
	return 0;
}