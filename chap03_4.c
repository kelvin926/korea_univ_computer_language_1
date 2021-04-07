#include <stdio.h>
int main(void){
    const float YARD_TO_METER = 0.9144;
    int yard = 0;
    printf("길이 yd");
    scanf("%d", &yard);
    float meter;
    meter = YARD_TO_METER * yard;
    printf("%.3f m", meter);

}