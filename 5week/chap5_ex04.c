#include <stdio.h>
int main(void) {
    int i, a, b, sum = 0;
    printf("두 숫자 사이의 합을 출력\n");
    printf("숫자 2개 입력 ㄲ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        for (i = a; i <=b; i += 1)
            sum += i;
        printf("%d 부터 %d까지의 함 = %d", a, b, sum);
    }
    else if (a>b){
        for (i = b; i<=a; i+=1)
            sum += i;
        printf("%d 부터 %d까지의 함 = %d", b, a, sum);
        }
    else{
        printf("%d와 %d는 같습니다" ,a, b);
    }
}