#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
   /* if(a>b && a>c )
        printf("a is greatest\n");
   else if(b>c && b>a )
        printf("b is greatest\n");
   else
        printf("c is greatest\n");*/

        int max=a;
        if(b>max)
        max=b;
        if(c>max)
        max=c;
        printf("%d is maximum",max);
return 0;
}