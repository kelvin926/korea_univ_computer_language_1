/**
파일명 : ex1.c
작성자 : 장현서
작성일 : 2021.03.10
목적 : print 출력 및 줄 바꿈 문자 ("\n") 사용
내용 : 줄 바꿈 문자 없이 이름 2번 출력 및 줄 바꿈 문자 사용하여 이름 2번 출력
**/

#include <stdio.h>
int main(void){ //main 호출

    printf("장현서"); // 줄 바꿈 없음
    printf("장현서");
    printf("\n"); // 줄 바꿈
    printf("장현서\n"); // 줄 바꿈
    printf("장현서");

    return 0; //리턴 0
}