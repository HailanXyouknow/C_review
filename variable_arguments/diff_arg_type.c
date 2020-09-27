#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

double sum(char *format, ... ){
    double sum=0.0;
    va_list ap;
    va_start(ap, format);

    int i;
    for(i=0; i<strlen(format); i++){
        char ch = format[i];
        printf("%c\n", format[i]);
        switch(ch){
            case 'i': sum += va_arg(ap, int);
                      break;
            case 'd': sum += va_arg(ap, double);
                      break;
            case 'f': sum += va_arg(ap, double);
                      break;
            default: printf("invalid format found\n");
                     exit(1);
        }
        // printf("----\n");
    }
    va_end(ap);  // IMPORTANT! DO NOT FORGET!
    return sum;
}

int main(){
    double k = sum("idfid", 20, 10.5, 4.2f, 90, 10.9);
    printf("Sum = %lf\n", k);

    return 0;
}