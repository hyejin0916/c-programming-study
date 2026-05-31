#include <stdio.h>
#include <string.h> // 문자열 관련 각종 함수 제공 라이브러리

int main(void)
{
    char input[5] = "Love";
    // printf("문자열의 길이 : %d\n", strlen(input));
    printf("문자열의 길이 : %zu\n", strlen(input));
    return 0;
}