#include <stdio.h>
main(){ 
    int s=1;
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    s+=(5*i);
    printf("sum is %d \n",s);
// third part
    int sum=1,N;
        printf("sum upto?\n");
        scanf("%d",&N);
        for(int n=5; n<=N; n=n+5){
            sum =sum +n;
        }
        printf("sum of series=%d",sum);
    }