//년도를 정수로 입력받아 윤년인지 여부를 0과 1로 출력하는 프로그램 만들기//
#include <stdio.h>

int main(void) {
    int year, leap;

    printf("input the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100!= 0) || (year % 400 == 0))
        leap = 1;
    else
        leap = 0;
    printf("is the year %d the leap year? : %d\n", year, leap);
    return 0;
}