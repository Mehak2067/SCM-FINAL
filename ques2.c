#include <stdio.h>
int main(){
int n,i=2;
printf("enter a positive integer:");
scanf("%d",&n);

do{
printf("%d",i);
i+=2;
    }
while(i<=n);
printf("/n");
return 0;
}
