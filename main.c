//두 개의 정수를 입력받고 5개의 산술연산자로 연산한 결과 출력//

#include <stdio.h>

int main(void) {
    int n1, n2;

    scanf("%i %i", &n1, &n2);
    printf("+ result is %d\n", n1 + n2);
    printf("- result is %d\n", n1 - n2);
    printf("* result is %d\n", n1 * n2);
    printf("/ result is %f\n", (float)n1 / n2);
    printf("%% result is %d\n", n1 % n2);
}