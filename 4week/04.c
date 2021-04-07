/*제품의 가격(원)과 할인율(%)을 입력 받아서 할인가과 에누리 금액을 출력하기
 제품의 가격(원)과 할인율(%)을 위한 정수형 변수 선언 및 초기화
 제품의 가격(원)과 할인율(%)을 정수로 입력 받기
 할인가와 에누리를 위한 정수형 변수 선언 및 초기화
*/
#include <stdio.h>

int main(void){
    int price;
    int discount;
    printf("가격? ");
    scanf("%d", &price);
    printf("할인율?");
    scanf("%d", &discount);
    int total = (price-(price*(discount*0.01)));
    printf("총 금액: %d 원 (%d 원 할인) ",total, (int)(price*(discount*0.01)));
    return 0;
}