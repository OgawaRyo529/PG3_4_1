#include<stdio.h>
#include <iostream>
#include"Enemy.h"



int main() {
    Enemy enemy;
    int input;

    while (true) {
        std::cout << "次の状態に移行するには1を入力してください: ";
        scanf_s("%d", &input);
        if (input == 1) {
            enemy.Update();
        }
        else {
            std::cout << "1を入力してください。" << std::endl;
        }
    }

    return 0;
}
