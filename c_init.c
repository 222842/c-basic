#include <stdio.h>
/**
 * 배열 초기화(선언 + 초기화) 
 *   - 배열 초기화는 선언 시 최초 한번만 가능
 *     int ary[2] = {5, 10};
 *   - 그 이후로는 배열요소에 일일이 값을 대입
 *     ary[2] = {100, 200}; (X)
 *     ary[0] = 100; (O)
 *     ary[1] = 200; (O)
 *   - {} 사용해서 한번에 대입 불가능 ({}로는 최초 1회만) 
*/

int main(void) {
    // 1. 기본적인 초기화 
    int ary[5] = {1, 2, 3,4 , 5};

    // 2. 초기값이 배열개수보다 적은 경우
    int ary1[5] = {1, 2, 3}; // 나머지 0으로 채움

    // 3. 모든 요소 0으로 처리
    int ary2[100] = {0};

    // 4. 배열 개수가 생략된 경우
    int ary3[] = {1, 2, 3}; // 초기값 개수만큼 배열 생성
}
