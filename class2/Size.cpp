#include <stdio.h>

int main(void)
{
    int x;
    x = 5;
    printf("%d", x);
    // printf("변수 x의 메모리 크리는 %d입니다.", sizeof(x)); // macOS arm64에서 sizeof의 반환 타입은 unsigned long이므로 %lu로 작성
    printf("변수 x의 메모리 크리는 %lu입니다.", sizeof(x));
    return 0;
}