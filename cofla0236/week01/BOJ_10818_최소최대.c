#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int min, max;

    // 첫 번째 값 입력 → 기준값 설정
    scanf("%d", &num);
    min = num;
    max = num;

    // 나머지 숫자 처리
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}