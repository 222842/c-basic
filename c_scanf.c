#include <stdio.h>

// scanf() �Լ�
//   + Ű����κ��� ���� �Է�

// ����: 
int main(void){
    int age; 

    // age ȣ�� => 4��
    printf("%d\n", age);  // age 4

    printf("����: ");
    scanf("%d", &age);  // age������ �޸� �ּ�
    
    printf("%d", age);  // age
}
