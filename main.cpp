#include<stdio.h>
#include <iostream>
#include"Enemy.h"



int main() {
    Enemy enemy;
    int input;

    while (true) {
        std::cout << "���̏�ԂɈڍs����ɂ�1����͂��Ă�������: ";
        scanf_s("%d", &input);
        if (input == 1) {
            enemy.execute();
        }
        else {
            std::cout << "�����ȓ��͂ł��B1����͂��Ă��������B" << std::endl;
        }
    }

    return 0;
}
