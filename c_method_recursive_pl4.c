#include <stdio.h>

int main(void) {
    int n = recursion(16);
    printf("%d", n);
}

int recursion(int n) {
    // if�� {���๮} �� ������ ���� ��� ����
    // ���๮�� 1���� {} ����
    // if(n<5) {
    //    return 1;
    // }
    // if(n<5)
    //    return 
    // if(n<5)return 1;
    // ��� ���� �ڵ���
    
    if(n<5) return 1;
    else if(n%5 == 1) return n+recursion(n-1); // 5�� ����� �ƴ� ���
    else recursion(n-1);
}
