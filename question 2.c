#include<stdio.h>
int main()
{
    int num;
       printf("Enter a number:");
       scanf("%d",&num);
if(num>0){
    printf("%d is a positive number.\n",num);
}else if(num<0){
    printf("%d is a negative number.\n",num);
}else {
    printf("thenumber is zero.\n");
}
if (num % 2==0){
    printf("%d is an even number.\n",num);
}
else{
    printf("%d is a odd number.\n",num);
}
printf("T he absolute vakue of the number is %d\n", abs(num));

return 0;
}
