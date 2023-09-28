#include<stdio.h>
#include<stdbool.h>


int main(){
    printf("%lu",sizeof(1)); //4
    short int a = 1;
    printf("%lu",sizeof(a)); //2
    printf("%lu",sizeof(false)); //4
    printf("%lu",sizeof(2L));  //8
}

//Output: 4248