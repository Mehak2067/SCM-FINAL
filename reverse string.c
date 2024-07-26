#include<stdio.h>
void reverse_string(char str[]) {
int length=0;
while (str[length]!='\0'){
length++;
}
for (int i=length -1;i>=0;i--){
printf("%c",str[i]);
}
printf("\n");
}
int main(){
char original_string[]="hello";
printf("original string:%s\n",original_string);
printf("reversed string: ");
reverse_string(original_string);
return 0;
}
