#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[15] = "I Love You";
    char result[5] = "Love";

    strcpy(result, input); // result에 input 문자열 복사
    printf("문자열 복사 : %s\n", result); 
    // result는 총 5개만 들어갈 수 있는 배열이지만, strcpy는 포인터를 다루는 함수라고 할 수 있어 더 긴 글자의 복사를 가능하게 해줌

    return 0;
}