#include <stdio.h>

// 배열은 값을 여러개 담음 → 전체 출력 → 반복문(for)
//
int main(void) {
    int score[5];   // index : 0~4
    int total = 0;
    double avg;

    // 배열 길이(len, size, lenth) 계산
    // sizeof() → ()안의 값의 메모리 크기(Byte 단위)
    // int → 4 Byte
    // score → 20 Byte, score[0] → 4 Byte
    // 20 / 4 = 5 → 배열의 길이 또는 갯수
    int array_count = sizeof(score) / sizeof(score[0]);
    for(int i=0; i<5; i++) {  // 직접 값을 넣는 것; 하드코딩
        printf("%d: ", i);
        scanf("%d", &score[i]);
    }
    for(int i = 0; i<5; i++) {
        total += score[i];
    }
    avg = total / 5.0;
    printf("평균 점수: %.1lf", avg);
}