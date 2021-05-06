//8번
int Perimeter(int garo, int sero) {
    int perimeter = 2*(garo + sero);
    return perimeter;
}

//9번
double Area(double length) {
    double area = length*length;
    return area;
}

//10번
void Gongbeak(char isNull) {
    if isNull == NULL {
        return 1; // 공백이면 1값 출력
    }
    else {
        return 0; // 공백이 아닐 경우
    }
}

//15번
void Operator(char op) {
    if (op == '+') {
        return int(a+b);
    }
    else if (op == '-') {
        return int(a-b);
    }
    else if (op == '*') {
        return int(a*b);
    }
    else if (op == '/') {
        if (b == 0){
            printf("0으로 나눌 수 없습니당");
        }
        else {
            return int(a/b);
        }
    }
    else {
        printf("잘못된 수식입니다.")
    }
}

//17번
// 직사각형을 그리는 부분.
void draw (int width, int height, char ch) {
    for (i = 0; i < height; i++) {
        for (j=0; j<width; j++){
            printf(%c, ch);
        }
        printf("\n")
    }
}

//19번
int get_seconds(int hours, int minutes, int seconds);