#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int j;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            printf(" ");
        }
        j--;
        while (j > 0)
        {
            printf("%d", j);
            j--;
        }
        printf("\n");
    }
}
