/**
 * -�������: ���� �ý��� X
 *           �ܹ��� 1��, ���̵�1��, ����1��
 * -��� ����
 *  1. �޴� ��� ���
 *  2. �Һ��� �޴� ����
 *  3. ������ �޴� ����
 *  4. �ֹ� �� ���� ��� ���(�Ѿ�, �޴� ���)
 *  5. validation check (�� �ùٸ��� üũ)
 *   - 1~5��, 7�� üũ�� ���
*/
#include <stdio.h>
#include <string.h>

// �޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"}; 
char *side_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ����(����)
char menu_save[3] = {};  // �ֹ� �޴�
int price_save[3] = {};   // �ֹ� ����

int main(void) {
    // 1.���� �޴� ���
    print_main_menu();

    // 2. ����� ���θ޴� ����
    int menu_num = 0;  // ����ڰ� ������ �޴���ȣ ����
    puts("�� ���Ͻô� �޴� ��ȣ�� �������ּ���. ");
    while(1) {   // 1:True, 0:False
        printf(">> ��ȣ: ");
        if(menu_num < 1 && menu_num > 4) {  // 1~4 out
            break;
        } else {
            puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
        }
    }

    // 3. ���θ޴� ��� (1~4 in)
    if(menu_num == 1) {  // �ܹ��� ��Ʈ

    } else if(menu_num == 2) {  // �ܹ���

    } else if(menu_num == 3) {  // ���̵�       
    
    } else if(menu_num == 4) {  // �帵ũ

    }

    printf(" >> ��ȣ: ");
    scanf("%d", &menu_num);
    // 1~4 ������ ���� ������ �׳� �Ѿ
    // 1~4 �̿��� ���� ������  "�ùٸ� ���� �Է����ּ���" ���
    if(menu_num >= 1 && menu_num <=) {
    } else {
        puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
    }

    if(menu_num < 1 || menu_num > 4) {   // 1~4 out
        puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
    }
    
    printf("�Է�: %d", menu_num);
}

// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    puts("�����������������������������");
    puts("�� cnu ���� 2022");
    puts("�� - version 1.0");
    puts("�� - develop by cholong02");
    puts("�� - date 2022.12.07");
    puts("�����������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���. ");
    puts("�����������������������������");
    puts("�� ");
    puts("�� 1. �ܹ��� ��Ʈ");  // �ܹ���, ���̵�, ����
    puts("�� 2. �ܹ��� �޴�");  // �ܹ���
    puts("�� 3. ���̵� �޴�");  // ���̵�
    puts("�� 4. �帵ũ �޴�");  // �帵ũ
    puts("�����������������������������");

    //1. �ܹ��� �ֹ�
    int choice_burger(void) {

    }
    //2. ���̵� �ֹ�
    int choice_side(void) {
        return choice_num // ���̽����� int��
    }
    //3. �帵ũ �ֹ�
    int choice_drink(void)
    //�迭���� �������
    int menu_len = sizeof(menu_save) / sizeof(menu_sqve[0]);

    for(int i=0; i<3; I++) {
        printf("�ֹ�[%d]: %s\n", i, menu_save_{i});
    }
}