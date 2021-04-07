/*
비행 소요시간을 실수로 입력 받아서 몇 일, 몇 시간, 몇 분인지 출력하기
 비행 총 소요시간을 실수로 입력 받기
 나누기 연산자, 나머지 연산자 등을 이용하여 일, 시간, 분 계산하기 (형 변환 필요)
 조건 연산자를 이용하여 해당 값이 0이면 출력하지 않기
*/
#include <stdio.h>

int main(void){
    float hour;
    printf("몇시간?");
    scanf("%f", &hour);
    int day = (int)hour/24;
    int n_hour = (int)hour%24;
    float min = (int)((hour-((day*24)+n_hour))*60);
    (hour==0 ? printf("") : printf("%d일 %d시간 %.f분", day, n_hour, min));
    return 0;
}