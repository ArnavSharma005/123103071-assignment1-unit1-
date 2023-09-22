#include <stdio.h>
int main(){
    int n;
    printf("Enter the number  ");
    scanf("%d",&n);
int sod=0;int r;
    do{
     r=n%10;
     sod+=r;
     n=n/10;
    }while(n!=0);
    printf("the sum of digits is %d",sod);
}