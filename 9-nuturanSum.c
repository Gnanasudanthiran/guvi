#include<stdio.h>

int main(){
int no,sum=0,i;

printf("Enter Number N:");
scanf("%d",&no);
no=abs(no);

for(i=1;i<=no;i++)
    sum=sum+i;

printf("Sum = %d",sum);



return 0;
}
