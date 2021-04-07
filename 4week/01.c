#include <stdio.h>

int main(void){
    double hwa;
    double sup;
    printf("화씨온도?");
    scanf("%lf", &hwa);
    printf("섭씨온도?");
    scanf("%lf", &sup);
    printf("화씨온도: %.2lf , 섭씨온도: %.2lf\n", hwa, (5*(hwa-32)/9));
    printf("섭씨온도: %.2lf , 화씨온도: %.2lf", sup, (((sup*9)/5)+32));
    return 0;
}