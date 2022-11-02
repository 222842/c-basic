#include <stdio.h>

// 1~10까지 값을 보고 짝수면 짝수 출력, 홀수면 홀수 출력
// 짝수 판별: 2로 나눠서 나머지가 0이면 짝수
int main(void){
    
    for(int i = 1; i <= 10; i++){
        // 응용 : if(0) → false
        //       if(1) → true
        // if문에서 조건에 0이 들어오면 false, 1이면 true
        if(i % 2){  // 짝수 판별
            printf("홀수\n");
        } else {
            printf("짝수\n");
        }
    }
}
