#include <stdio.h>

// The values are actually indices
// If defined as "...WED=70, THURS, FRI, SAT", then THURS=71 and FRI=72
typedef enum{
    SUN, MON, TUES, WED, THURS, FRI, SAT //SUN=0
} days_of_week;


typedef enum{
    FALSE, TRUE
}Boolean;

Boolean isEven(int n){
    if (n%2 == 0)
        return TRUE;
    else
        return FALSE;
}

int main() {
    days_of_week day = SAT;

    if (day == SAT || day == SUN)
        printf("Holiday\n");
    else 
        printf("Not holiday");
    
    printf("Value of SUN is: %d\n", SUN);
    return 0;
}