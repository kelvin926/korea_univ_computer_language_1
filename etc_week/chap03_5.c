#include <stdio.h>
int main(void){
    int lb;
    float kg = 0.45359237;
    printf("무게(ld) = ");
    scanf("%d", &lb);
    float real_kg;
    real_kg = kg * lb;
    printf("%.4f kg", real_kg);

}