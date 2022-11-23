#include <stdio.h>

/**
 * 일반 변수 vs 포인터 변수
 * 
 * int a;    #  21번지~24번지
 * int *pa;
 * pa = &a;
 * *pa = 55;
 * 
 * a: 실제 값
 * &a:
 * pa:주소값
 * *pa:포인트번지에 있는 주소 찾아가 번지 찾기
*/

int main(void) {
    int a= 10, b=15, total;  // 31, 32, 33번지
    double avg;              // 34번지
    int *pa, *pb;           
    int *pt = &total;  // pt(33번지)
    double *pg= &avg;  // pg(34번지)
    
    pa = &a;   // pa(31번지)
    pb = &b;   // pb(32번지)

    *pt = *pa + *pb; // total = 10 + 15 = 25
    *pg = *pt / 2.0; // avg = 25 / 2.0 = 12.5

    printf("두 정수의 값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균: %.1lf\n", *pg);
}