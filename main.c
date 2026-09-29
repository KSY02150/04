//입력받은 초(정수)를 (시:분:초)로 변환해 표기하는 프로그램//

#include <stdio.h>

int main(void) {
    int sec, hour, min;

    printf("input the second : ");
    scanf("%d", &sec);

    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;

    printf("The time for %d second is %d : %d : %d\n", sec, hour, min, sec);
    return 0;
}