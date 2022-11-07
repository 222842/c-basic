#include <stdio.h>
/**
 *  Break & Continue 문
 *    - 반복문에서 주로 사용
 *   
 *    - break: 즉시 반복문을 빠져나가라
 *             → 이후로 반복문 실행 X
 *    
 *    - continue: 즉시 다음 반복으로 넘어가라
 *                → 이후로 반복문 실행 O
*/

int main(void){
    for(int i=1; i <=10; i++){
        if(i % 2 == 0) {
            continue; // 이후의 실행문 실행하지 않고 다음 반복으로 넘어감
        }
        if(i == 7){
            break; // 반복문 빠져나감 i=8,9,10은 실행하지 않음, 7 출력 안됨
        }
        printf("%d\n", i);
    }
}
