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
            enemy.execute();
        }
        else {
            std::cout << "無効な入力です。1を入力してください。" << std::endl;
        }
    }

    return 0;
}
