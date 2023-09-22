#include <stdio.h>
int main()
{
    float ans = 0;
    char opr;
    float n;
    while (1)
    {
        printf("Current ans: %f\n", ans);
        printf("Enter operator, number, or 'C' to clear, 'E' to exit: \n");
        scanf(" %c", &opr);

        if (opr== 'E')
        {
            break;
        }

        if (opr== 'C')
        {
            ans = 0;
        }
        else
        {
            scanf("%f", &n);

            switch (opr)
            {
            case '+':
                ans += n;
                break;
            case '-':
                ans -= n;
                break;
            case '*':
                ans *= n;
                break;
            case '/':
                if (n != 0)
                {
                    ans /= n;
                }
                else
                {
                    printf("error\n");
                }
                break;
            default:
                printf("please enter correct operator \n");
                break;
            }
        }
    }
    printf("Final ans: %f\n", ans);
    return 0;
}