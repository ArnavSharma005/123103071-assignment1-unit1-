/*#include <stdio.h>
int main(){
     int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         int c=65;
            for(int k=1;k<=n-i;k++)
            printf(" ");
            for(int j=1;j<=2*i-1;j++){
            printf("%c",(char)c++);
            }
            printf("\n");
        }
    return 0;
}*/
                                                       //second part 
int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) 
         printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}