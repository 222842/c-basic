#include <stdio.h>

/**
 * 1.while
 *  - dowhile: �ݺ��ϸ鼭 �����ϴ� ���๮�� �ݵ�� ���� 1ȸ�� �����ؾ� �� ��
 * 
 *    : while   �� ù��° �ݺ� ���� X �� ���๮ 0ȸ ����
 *    : dowhile �� ù��° �ݺ� ���� X �� ���๮ 1ȸ ����
 * 2.for
 * 
 * 
*/
int main(void){
    // 1.while��
    // whil(����){
    //     ����;
    // }

    // 2.dowhile��
    int a = 1;
    do {
        a = a*2;
    } while(a < 10);
    printf("a : %d\n", a);
}