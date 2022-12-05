#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];   // char 배열 → 문자열(string)
    int age;         // 나이
    double height;   // 신장(키)
    char *intro;     // 자기소개 → 포인터(주소를 담을 수 있음)
};           // 여기까진 설계도, 이제 선언을 해야 함

int main(void) {
    struct profile yuni;  // 선언을 해야 구조체 생성 

    strcpy(yuni.name,"신정민");  // <stfing.h>
    yuni.age = 8;               
    yuni.height = 50.8;

    // malloc() 함수
    //  - 메모리 동적 할당
    //  - ()안에 값은 Byte의미
    //  - 반드시 free()로 해제
    // 메모리 동적 할당 함수를 이용할 땐 반드시 포인터 사용

    // 동적 할당
    //  - 필요할 때 동적으로 메모리를 사용!
    yuni.intro = (char*)malloc(80);  // intro 포인터에 80Byte 할당 메모리의 시작 주소 저장
    printf("자기소개: ");
    gets(yuni.intro);  

    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);  // 동적 할당 메모리 해제

}