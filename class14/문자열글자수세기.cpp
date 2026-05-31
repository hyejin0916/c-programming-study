#include <stdio.h>

int main(void)
{
    char input[1001]; // 1001개만큼의 문자가 들어갈 수 있는 문자열 생성
    fgets(input, sizeof(input), stdin); // input이라는 character 배열안에 그 다음으로 사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는 것을 의미
    int count = 0;
    while(input[count] != '\n' && input[count] != '\0') // \0: null을 의미, input의 남은 공간에 null이 들어감
    {
        count++;
    }
    printf("입력한 문자열의 길이는 %d입니다.\n", count);
    printf("입력한 문자열 : %s", input);
    return 0;
}