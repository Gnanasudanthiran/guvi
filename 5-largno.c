#include<stdio.h>

int main(){
int no[3];
int i,max;

printf("Enter 3 numbe :\n");
for(i=0;i<3;i++){
        scanf("%d",&no[i]);

}
max=no[0];
for(i=0;i<3;i++){
    if(max < no[i])
        max=no[i];

    }
printf("Max no is : %d ",max);
return 0;
}
