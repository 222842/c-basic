#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void){
    int sum = 0;  // ���� ����

    // for�� Ȱ��
    // for�� Ȱ���켭 1~10���� ���� �����ϴ� �ڵ� �ۼ�
    
    for(int i = 1; i <=10; i++ ) {
        sum = sum + i;
        //sum += i; �̰͵� ����  
    }
    printf("���� ����: %d\n", sum);
}
// ���� ��°��� sum�� i�� 11�� �� ������
