#include <stdio.h>

/**
 * 포인터(Pointer)와 배열(Array)
 *  - 객관식, 주관식, 빈칸채우기, ox, 서술형(1문제)
 *  - 포인터는 c언어에서 항상 쓰는 것이 아님, 필요할 때만 씀.
 * 
*/
int main(void) {
    int ary[3]; // 배열 선언(3칸) 크기: 12byte 4byte씩 세개이므로 12byte
    int i;     // 4byte

    // 배열 이름 → 배열의 시작 번지 값을 담고있음
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3번째 배열 요소 입력: ");
    scanf("%d", ary +2);

    for(i=0; i<3; i++) {
        printf("%d\n", *(ary+i));
    }
}
