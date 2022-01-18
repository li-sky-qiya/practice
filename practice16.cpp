#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void hanoi(int num, char sou, char tar, char aux) {
    //ͳ���ƶ�����
    static int i = 1;
    //���Բ���������� 1 ������ֱ�Ӵ���ʼ���ƶ���Ŀ����
    if (num == 1) {
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
    }
    else {
        //�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
        hanoi(num - 1, sou, aux, tar);
        //����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
        //�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
        hanoi(num - 1, aux, tar, sou);
    }
}

int main()
{
    int n;
    printf("������Բ�̸���n:\n");
    scanf("%d", &n);
    //���ƶ� 3 ��Բ��Ϊ������ʼ����Ŀ�������������ֱ��� A��B��C ��ʾ
    hanoi(n, 'A', 'B', 'C');
    return 0;
}