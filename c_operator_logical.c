/**
 * 논리연산자
 * 1.AND(&&)
 *  - 두 조건이 모두 참인 경우에만 참!
 * 조건1   | 조건2  |  결과
 * False  | False  | False
 * True   | False  | False
 * False  | True   | false
 * True   | Ture   | True
 *  
 * 2.OR(||)
 *  - 조건 중에 1개라도 참이면 참!
 * 조건1   | 조건2  |  결과
 * False  | False  | False
 * True   | False  | True
 * False  | True   | True
 * True   | True   | True
 * 
*/
#include <stdio.h>

int main(void){
    int a = 30;
    int res;

    res = ( a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10 ) || (a > 20);
    printf("(a < 10) || ( a > 20) : %d\n", res);
    res = !(a >= 30);
    printf("!(a >= 30) : %d\n", res); 
 }
