#include <stdio.h>

/**
 * �ּҿ� ������
 *  - �ּ�: �޸𸮹����� �ּ�(��: 21����, 99����)
 *  - �ּ� �� ���
 *  - ������ �� ����(�ּ�)
 * 
 *  int a, b;     #a(100����), b(200����)
 *  int *p;
 *  p = &a;       #p(100����)
 *  p = &b;       #p(200����)
 *  �� p�� 100����, 200���� : ����
 *  �� &a, &b�� �ּ� : ���
 * 
 *  - �� �����Ͱ� ���� �ּ� ����
 *    (�ϳ��� ������ ���ÿ� ����Ű�� �͵� ����)
 *  int a;      #99����
 *  int *pa, *pb;
 *  pa = pb = &a;
 *  *pa = 10;
 *  printf("%d", *pb);
 * 
 *  - �ּҴ� ����̱� ������ ���Կ����� ���ʿ� ��� �Ұ�
 *  &a = &b; (X) # a(100����), b(200����)
 * const int num = 4;
 *  num = 10; (X)
*/
int main(void) {


}