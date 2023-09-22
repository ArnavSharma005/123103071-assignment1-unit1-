#include <stdio.h>

int main(){
    int n,f=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    if(n<=0)
    printf("invalid input \n");
    else{
        for(int i=1;i<=n;i++)
        f*=i;
        printf("the factorial of %d is %d \n",n,f);
    }
    return 0;
}