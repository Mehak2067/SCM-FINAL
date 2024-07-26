#include<stdio.h>
int a=10 ,b=5,c;
int product(int x,int y);
int main(void)
{
     c= product(a,b);

    printf("%i\n",c);

    return 0;
}
int product(int x,int y)
{
    return(x*y);
}
