#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // x가 가리키는 값을 temp에 넣음
    *x = *y; // y가 가리키는 값을 x에 넣음
    *y = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}