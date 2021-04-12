#include <stdio.h>
int main(void){
    int width = 0;
    int height = 0;
    printf("가로의 길이?");
    scanf("%d", &width);
    printf("세로의 길이?");
    scanf("%d", &height);
    int area = width * height;
    int perimter = ((width+height)*2);
    printf("직사각형의 넓이 = %d", area);
    printf("직사각형의 둘레 = %d", perimter);
    return 0;
}