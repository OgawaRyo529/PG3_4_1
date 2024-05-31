#include<stdio.h>
#include <iostream>
#include"Enemy.h"



int main() {
    Enemy enemy;
    int input;

    while (true) {
        std::cout << "ŽŸ‚Ìó‘Ô‚ÉˆÚs‚·‚é‚É‚Í1‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ";
        scanf_s("%d", &input);
        if (input == 1) {
            enemy.execute();
        }
        else {
            std::cout << "–³Œø‚È“ü—Í‚Å‚·B1‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
        }
    }

    return 0;
}
