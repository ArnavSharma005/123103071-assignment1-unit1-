#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max, min;
    max =min=a;
    if (b > max)
        max= b;
    else if (b < min)
        min = b;
    if (c > max) 
        max = c;
    else if (c < min)
        min = c;
    if (d > max)
        max = d;
    else if (d < min)
        min = d;
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}
