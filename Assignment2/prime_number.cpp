#include <stdio.h>

#define is_primeNumber

int main()
{
#ifdef is_primeNumber
    {
        int a, b;

        scanf("%d %d", &a, &b);

        for (int i = a; i <= b; i++)
        {
            int count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
            if (count == 2)
            {
                printf("%d\t", i);
            }
            else
            {
                continue;
            }
        }
    }
#else
    printf("Error.\n");
#endif
    return 0;
}