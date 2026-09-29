//초를 시간(분:초)로 표기, 초를 나타내는 한 개의 정수를 입력받아 분:초를 각각 계산하여 표기한다//
#include <stdio.h>

int main(void) {
    int sec, min, remain_sec;

    printf("input the second :");
    scanf("%d", &sec);
    min = sec / 60;
    remain_sec = sec % 60;
    printf("the time is %d : %d\n", min, remain_sec);
    return 0;
}