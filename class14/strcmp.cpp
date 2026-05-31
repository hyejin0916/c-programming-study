#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputOne[5] = "C";
    char inputTwo[5] = "B";
    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
    // 두 문자가 사전적으로 동일하면 0
    // 앞 문자가 사전적으로 앞에 있다면 -1
    // 앞 문자가 사전적으로 뒤에 있다면 1
    return 0;
}