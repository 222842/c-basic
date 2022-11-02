#include <stdio.h>

// 1~10의 값의 총합 계산
int main(void){
    int sum = 0;  // 총합 누적

    // for문 활용
    // for문 활용헤서 1~10까지 값을 덧셈하는 코드 작성
    
    for(int i = 1; i <=10; i++ ) {
        sum = sum + i;
        //sum += i; 이것도 가능  
    }
    printf("누적 총합: %d\n", sum);
}
// 최종 출력값은 sum은 i가 11이 될 때까지
