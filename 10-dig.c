#include<stdio.h>

int main(){
long no;
int dig,count=0;
printf("Enter No : ");
scanf("%ld",&no);
dig=no;
while(dig!=0){
    dig=dig/10;
    ++count;

}

printf("%ld has %d digits",no,count);

return 0;
}
