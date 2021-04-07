// 용매의 질량과 용질의 질량을 정수로 입력 받아 용액의 농도 구하기
//  용매와 용질의 질량은 g 단위로 정수로 입력 받기
//  농도 계산시 double형으로 명시적인 형 변환하기
//  농도는 소수점 이하 2자리까지 출력하기
//  농도 출력시 % 문자와 함께 출력하기

#include <stdio.h>

int main(void){
    int yongmae, yonggil;
    printf("용매?:");
    scanf("%d", &yongmae);
    printf("용질?:");
    scanf("%d", &yonggil);
    printf("%.2lf %%", ((double)yongmae/yonggil));
    return 0;
}