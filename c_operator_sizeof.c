#include <stdio.h>

int main(void){
    int a = 10;
    double b = 3.4;

    // sizeof() �Լ�: ���� ���� ���� ũ�⸦ byte ������ ��� (int: 4 byte, double: 8 byte)
    printf("int�� ������ ũ�� : %d\n", sizeof(a));
    printf("double�� ������ ũ�� : %d\n", sizeof(b));
    printf("������ ����� ũ�� : %d\n", sizeof(10));
    printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
    printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
}