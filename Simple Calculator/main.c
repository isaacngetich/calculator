/*
    simple calculator
    by isaacngetich
    c89 compliler
    MIT licence
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[1000];
    int nl,n2,sum,product,diff;
    float quot;
    printf("simple calculator!\n");

    // input
    printf("enter your name: ");
    gets(name);
    printf("enter two integers: ");
    scanf("%d%d",&nl,&n2);


    //computations
    sum = nl + n2;
    diff = nl - n2;
    product = nl * n2;
    quot = (float) nl/n2;


    //output
    printf("hey %s, here are the results: \n",name);
    printf("%d+%d=%d",nl,n2,sum);
    printf("%d-%d=%d",nl,n2,diff);
    printf("%d*%d=%d",nl,n2,product);
    printf("%d/%d=%f",nl,n2,quot);
    return 0;
}
