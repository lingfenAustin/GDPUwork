#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
