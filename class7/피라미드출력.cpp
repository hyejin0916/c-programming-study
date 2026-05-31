#include <stdio.h>
#define N 20

int main(void)
{
    int i, j;
    for(i = 0; i < N; i++) // for(int i = 0)처럼 i의 타입을 지정하면서 초기화하면 안됨
    {
        for(j = N - i - 1; j > 0; j--)
        {
            printf("  ");
        }
        for(j = 0; j < i; j++)
        {
            printf("* ");
        }
        for(j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}