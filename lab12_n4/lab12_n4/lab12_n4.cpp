#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("chcp 1251");
    int x;
    printf("�����:");
    scanf_s("%i", &x);
    switch (x / 100) {
    case 1:
        printf("��� ");
        break;
    case 2:
        printf("������ ");
        break;
    case 3:
        printf("������ ");
        break;
    case 4:
        printf("��������� ");
        break;
    case 5:
        printf("������� ");
        break;
    case 6:
        printf("�������� ");
        break;
    case 7:
        printf("������� ");
        break;
    case 8:
        printf("���������  ");
        break;
    case 9:
        printf("���������  ");
        break;
    }
    if ((x % 100) / 10 == 1)
        switch (x % 100) {
        case 10:
            printf("������\n");
            break;
        case 11:
            printf("����������\n");
            break;
        case 12:
            printf("����������\n");
            break;
        case 13:
            printf("����������\n");
            break;
        case 14:
            printf("������������\n");
            break;
        case 15:
            printf("����������\n");
            break;
        case 16:
            printf("�����������\n");
            break;
        case 17:
            printf("����������\n");
            break;
        case 18:
            printf("������������\n");
            break;
        case 19:
            printf("������������\n");
            break;
        }
    else {
        switch ((x % 100) / 10) {
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        case 4:
            printf("����� ");
            break;
        case 5:
            printf("��������� ");
            break;
        case 6:
            printf("���������� ");
            break;
        case 7:
            printf("��������� ");
            break;
        case 8:
            printf("����������� ");
            break;
        case 9:
            printf("��������� ");
            break;
        }

        switch (x % 10) {
        case 1:
            printf("����\n");
            break;
        case 2:
            printf("���\n");
            break;
        case 3:
            printf("���\n");
            break;
        case 4:
            printf("������\n");
            break;
        case 5:
            printf("����\n");
            break;
        case 6:
            printf("�����\n");
            break;
        case 7:
            printf("����\n");
            break;
        case 8:
            printf("������\n");
            break;
        case 9:
            printf("������\n");
            break;
        }
    }
    return 0;
}