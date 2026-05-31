#include <stdio.h>

int main(void)
{
    FILE *fp = NULL; // 포인터 변수 fp 생성
    fp = fopen("output.txt", "w"); //fopen 파일을 열어라
    // w: 쓰기 모드(Write), r: 읽기 모드(Read)

    if(fp == NULL) // 파일을 열지 못했다면,
    {
        printf("파일 열기에 실패했습니다.\n");
    }
    else{
        printf("파일 열기에 성공했습니다.\n");
    }

    fputc('H', fp); // 한글자씩 출력
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    fclose(fp); // 해당 파링 ㄹ포인터 변수 닫기
    return 0;
}