#include <stdio.h>

void convert(char *arr, int flag){
    int i;
    if (flag == 0){
        for(i=0; arr[i]!='\0'; i++){
            arr[i] = (arr[i]>='a'&&arr[i]<='z')?(arr[i]-32):arr[i];
        }
    } else {
        for(i=0; arr[i]!='\0'; i++){
            arr[i] = (arr[i]>='A'&&arr[i]<='Z')?(arr[i]+32):arr[i];
        }
    }
}

int main(){
    char arr[] = "Hello World";
    convert(arr, 0);
    printf("%s\n", arr);
    convert(arr, 1);
    printf("%s\n", arr);
    return 0;
}