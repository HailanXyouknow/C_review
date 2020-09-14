/*
    This is a simple C program which will print Hello, World!
    
    To compile:
    gcc –Wall hello.c –o hello
        ^- -Wall enables all compiler’s warning messages

    # from #include is a preprocessor directives
    include from #include is a function for the compiler
    stdio.h is a header

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;    // variable 
    age = 20;
    printf("The content of age is: %d\n", age);

    // C datatypes: https://en.wikipedia.org/wiki/C_data_types

    // int --> short (2 bytes), long (4 bytes), long long (8 bytes)
    // by default int is long int
    // There are 8 bits in a byte

    // Default: Signed (Two's Complement)
    // Range of value => -2^(n-1) to 2^(n-1)-1 
    // 2 bytes = 2 * 8 bits = 16 bits
    //  -2^(16-1) to 2^(16-1)-1 = -32768 to 32767

    short int x = -32768; // Cannot have 'short int x = -32769;'
    printf("%hi\n", x);

    // Unsigned (unsigned int x;)
    // Range of value = 0 to 2^(n)-1
    
    // Decimal --> float (4 bytes) & double (8 bytes)
    double weight;
    weight = 1.2;

    // Characters (1 bytes = 8 bits)
    char new_char;
    new_char = 'c';         // single quote means character
    printf("%c\n", new_char);

    printf("Size of character: %zu\n", sizeof(char));
    printf("Size of short: %zu\n", sizeof(short int));
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of long int: %zu\n", sizeof(long int));
    printf("Size of long long int: %zu\n", sizeof(long long int));

    // %ld or %li to print signed long numbers
    printf("%ld\n", __STDC_VERSION__);

    // %<d/i> is a format specifier

    // begins with 0: tells compiler this is an octal number (base 8)
    int aVar = 015; // (8^0 * 5) + (8^1 * 1) = 13
    printf("Content of aVar: %d\n", aVar);  // 13
    printf("Content of aVar = %o\n", aVar); // Print octal value 15
    printf("Content of aVar = %x\n", aVar); // hexadecimal d

    // begins with 0x: tells compiler this is a hexadecimal number
    int aVar2 = 0x15; // (16^0 * 5) + (16^1 * 1) = 21
    printf("Content of aVar: %d\n", aVar2); // 21
    printf("Content of aVar = %o\n", aVar2);// 25    
    printf("Content of aVar = %x\n", aVar2);// 15 

    // Initailze binary number
    int binary = 0b101; 
    printf("binary: %d\n", binary); // 101 = 5
    
    // -7 (unary); 4-3 (binary)
    int a = 10, b = 2;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d && %d = %d\n", a, b, a%b);

    printf("Hello, World!\n");


    return 0;
}
