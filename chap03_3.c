#include <stdio.h>
#define SQUARE_METER_TO_PYEONG 0.3025
int main(void){
    int a;
    printf("아파트의 면적 (제곱미터)");
    scanf("%d", &a);
    float b = a * SQUARE_METER_TO_PYEONG;
    printf("%d 제곱 미터 = %f 평",a, b);
}