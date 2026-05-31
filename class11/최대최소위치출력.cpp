#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
    int i, max, min, index;
    int array[NUMBER];
    // array[0] ~ array[4]

    max = 0;
    index = 0;

    // 최대
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);

    min = INT_MAX;
    // 최소
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(min > array[i])
        {
            min = array[i];
            index = i;
        }
    }
    printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);
    return 0;
}