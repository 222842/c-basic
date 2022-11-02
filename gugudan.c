#include <stdio.h>

/**
 * ±¸±¸´Ü 2´Ü Ãâ·Â
 *   2 x 1 = 2
 *   2 x 2 = 4
 *   2 x 3 = 6
 *   ...
 *   2 x 9 = 18
*/

int main(void){
    for(int i = 1; i <= 9; i++) {
        printf("2 x %d = %d\n", i, 2*i);
}
}
// i 값이 10이 될 때까지 하고 i값이 9를 넘겼기 때문에 성립하지 않는다 확인 후 끝
