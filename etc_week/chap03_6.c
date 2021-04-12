#include <stdio.h>
int main(void){
    int KRW;
    double dollor;
    double won;
    printf("KRW = ");
    scanf("%d", &KRW);
    printf("원 달러 환율?");
    scanf("%lf", &won);
    dollor = KRW / won;
    printf("USD %.2f",dollor);
}