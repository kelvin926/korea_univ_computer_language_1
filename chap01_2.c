/**
파일명 : chap01_2.c
작성자 : 장현서
작성일 : 2021.03.,10
**/

#include <stdio.h>
int main(){
    int num;
    float x;
    char ch;

    num = 123;
    x=1.23;
    ch='A';

    printf("%d %x\n", num, num);
    printf("%f %e\n", x, x);
    printf("%c\n", ch);

    printf("%x\n", num);
    printf("%X\n", num);
    printf("%#x\n", num);
    printf("%#X\n", num);

    int number = 999;
    printf("%d\n", number);
    printf("%4d\n", number);
    printf("%5d\n", number);
    printf("%06d\n", number);

    int a = 10;
    int b = 100;
    int c = 1000;
    int d = 10000;
    printf("%5d\n", a);
    printf("%5d\n", b);
    printf("%5d\n", c);
    printf("%5d\n", d);

    float pi = 3.14159265358979323846;
    double pi_2 = 3.14159265358979323846;

    printf("%f\n", pi);
    printf("%.3f\n", pi);
    printf("%.4f\n", pi);
    printf("%.5f\n", pi);
    
    printf("3.14159265358979323846\n");
    printf("%.20f\n", pi);
    printf("%.20f\n", pi_2);

    return 0;
}