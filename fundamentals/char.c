#include <stdio.h>

int main(){
    // ASCII is the acronym for American Standard Code for Information Interchange
    char ch = 'A';
    printf("Character is %c\n", ch);

    printf("Enter a characters: ");
    //char another, another2;

    // Get Input - option #1
    //scanf("%c", &another);
    //printf("You have typed: %c\n", another);

    // Get Input - option #2
    //another2 = getchar();
    //printf("You have typed: %c\n", another2);

    // A => 65; a => 97 (the difference between capital and lower is always 32)

    char ch2 = 'A';
    printf("%d - %c\n", ch2, ch2);

    int i = 65;
    printf("%d - %c\n", i, i);    
        
    return 0;
}


/* 
For getting multiple string inputs in C 
How to avoid 'enter' character staying in the standard input buttfer
https://stackoverflow.com/a/14068471
=================================================

#include <stdio.h>
#include <stdlib.h>
  
int main(int argc, char const *argv[])
{
  char ch1, ch2;
  printf("Enter the first character: ");
  scanf(" %c", &ch1);
  printf("Enter the second character: ");
  scanf(" %c", &ch2);
  printf("Sum value of these characters is %c + %c = %d\n", ch1, ch2, ch1 + ch2);
 
  return 0;
}
or that:

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[])
{
  char ch1, ch2;
  printf("Enter the first character: ");
  scanf("%c", &ch1);
  getchar();
  printf("Enter the second character: ");
  scanf("%c", &ch2);
  getchar();
  printf("Sum value of these characters is %c + %c = %d\n", ch1, ch2, ch1 + ch2);
 
  return 0;
}

*/