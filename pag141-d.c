#include<stdio.h>
int main()
{
    int a,b;
    a = 0;
    for(b=2;b<=500;b=b+2){
        a=a+b;
    }
    printf("o resultado da soma dos pares de 1 a 500 e: %i",a);
}
