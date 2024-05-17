#include <stdio.h>
int main() {
   int n ,factorial=1;
      printf("enter a positive integer: ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
        factorial*=i;
      }
      printf("factorial of %d is:%d\n",n,factorial);
      return 0;
}
