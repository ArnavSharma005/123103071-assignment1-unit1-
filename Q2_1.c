#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 2 no.\n");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d",(a+b));
    if (a < b)
        printf("%d",(b-a));
    if (a == b)
        printf("both no. equal");
    return 0;
}