#include <stdio.h>

int main(void){
    int a = 10, b = 20, res;

    // ���׿����� = (����) ? ��1 : ��2 
    // => ������  true�� res�ڸ��� ��1 ����, ������ False�� res�ڸ��� ��2
    res = (a > b) ? a : b;
    printf("ū ��: %d\n", res);

}
