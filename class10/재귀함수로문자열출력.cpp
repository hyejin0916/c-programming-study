#include <stdio.h>

// 재귀함수(Recursive Function)
void print(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("문자열을 출력합니다.\n");
        print(count - 1);
    }
}

int main(void)
{
    int count;
    printf("문자열을 몇 번 출력할까요? ");
    scanf("%d", &count);
    print(count);
    return 0;
}