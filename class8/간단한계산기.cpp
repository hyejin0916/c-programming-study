#include <stdio.h>

int main(void)
{
    char o;
    int x, y;
    while(1) // 무한 반복
    {
        printf("수식을 입력하세요. : ");
        scanf("%d %c %d", &x, &o, &y);
        if(o == '+')
        {
            printf("%d %c %d = %d\n", x, o, y, x + y);
        }
        else if(o == '-')
        {
            printf("%d %c %d = %d\n", x, o, y, x - y);
        }
        else if(o == '*')
        {
            printf("%d %c %d = %d\n", x, o, y, x * y);
        }
        else if(o == '/')
        {
            printf("%d %c %d = %d\n", x, o, y, x / y);
        }
        else if(o == '%')
        {
            printf("%d %c %d = %d\n", x, o, y, x % y);
        }
        else
        {
            printf("입력이 잘못되었습니다.");
        }
        getchar(); // 단 한 개의 문자를 입력받겠다.
        // 수식을 입력하고 enter를 친 경우 "프로그램 종료" 물음에 엔터로 답한 것으로 간주외어 입력이 잘못되었다는 결과가 나오기때문에 버퍼 처리

        printf("프로그램을 종료하시겠습니다? (y/n)");
        scanf("%c", &o);
        if(o == 'n' || o =='N')
        {
            continue; // while 시작점으로 다시 돌아가서 시작(밑에 다른 코드가 있어도 상관없이 시작점으로 돌아감)
        }
        else if(o == 'y' || o == 'Y')
        {
            break; // while 빠져나감
        }
        else{
            printf("입력이 잘못되었습니다.\n");
        }
    }
    return 0;
}