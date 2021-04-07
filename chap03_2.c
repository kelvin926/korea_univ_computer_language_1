#include <stdio.h>
int main(void){
    int v = 0;
    double height = 0;
    printf("질량 입력하셈:");
    scanf("%d", &v);
    printf("높이 입력하셈:");
    scanf("%lf", &height);
    float energy;
    energy = 9.8 * v * height;
    printf("위치에너지 : %f J", energy);
}