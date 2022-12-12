/**
 * -기능제한: 결제 시스템 X
 *           햄버거 1개, 사이드1개, 음료1개
 * -기능 정의
 *  1. 메뉴 출력 기능
 *  2. 소비자 메뉴 선택
 *  3. 선택한 메뉴 저장
 *  4. 주문 → 현재 결과 출력(총액, 메뉴 출력)
 *  5. validation check (값 올바르게 체크)
 *   - 1~5번, 7번 체크한 경우
*/
#include <stdio.h>
#include <string.h>

// 메뉴표 생성(전역)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"}; 
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3] = {"코카콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// 고객 주문 기록 저장(전역)
char menu_save[3] = {};  // 주문 메뉴
int price_save[3] = {};   // 주문 가격

int main(void) {
    // 1.메인 메뉴 출력
    print_main_menu();

    // 2. 사용자 메인메뉴 선택
    int menu_num = 0;  // 사용자가 선택한 메뉴번호 저장
    puts("■ 원하시는 메뉴 번호를 선택해주세요. ");
    while(1) {   // 1:True, 0:False
        printf(">> 번호: ");
        if(menu_num < 1 && menu_num > 4) {  // 1~4 out
            break;
        } else {
            puts("Warning: 1~4의 번호를 입력해주세요.");
        }
    }

    // 3. 세부메뉴 출력 (1~4 in)
    if(menu_num == 1) {  // 햄버거 세트

    } else if(menu_num == 2) {  // 햄버거

    } else if(menu_num == 3) {  // 사이드       
    
    } else if(menu_num == 4) {  // 드링크

    }

    printf(" >> 번호: ");
    scanf("%d", &menu_num);
    // 1~4 사이의 값이 들어오면 그냥 넘어감
    // 1~4 이외의 값이 들어오면  "올바른 값을 입력해주세요" 출력
    if(menu_num >= 1 && menu_num <=) {
    } else {
        puts("Warning: 1~4의 번호를 입력해주세요.");
    }

    if(menu_num < 1 || menu_num > 4) {   // 1~4 out
        puts("Warning: 1~4의 번호를 입력해주세요.");
    }
    
    printf("입력: %d", menu_num);
}

// 메인 메뉴를 출력하는 함수
void print_main_menu(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ cnu 버거 2022");
    puts("■ - version 1.0");
    puts("■ - develop by cholong02");
    puts("■ - date 2022.12.07");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 저희 매장을 찾아주셔서 감사합니다.");
    puts("■ 원하시는 메뉴를 선택해주세요. ");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ ");
    puts("■ 1. 햄버거 세트");  // 햄버거, 사이드, 음료
    puts("■ 2. 햄버거 메뉴");  // 햄버거
    puts("■ 3. 사이드 메뉴");  // 사이드
    puts("■ 4. 드링크 메뉴");  // 드링크
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");

    //1. 햄버거 주문
    int choice_burger(void) {

    }
    //2. 사이드 주문
    int choice_side(void) {
        return choice_num // 초이스넘은 int형
    }
    //3. 드링크 주문
    int choice_drink(void)
    //배열길이 동적계산
    int menu_len = sizeof(menu_save) / sizeof(menu_sqve[0]);

    for(int i=0; i<3; I++) {
        printf("주문[%d]: %s\n", i, menu_save_{i});
    }
}