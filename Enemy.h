#pragma once
#include<stdio.h>
#include <iostream>
class Enemy {
public:
    
    typedef void (Enemy::* Pfunc)();

    
    Enemy() {
        pfunc = &Enemy::come; 
    }

    
    void change(Pfunc newFunc) {
        pfunc = newFunc;
    }

    
    void Update() {
        (this->*pfunc)();
    }

private:
    Pfunc pfunc;

    // Ú‹ßó‘Ô‚ÌŠÖ”
    void come() {
        std::cout << "Ú‹ß’†" << std::endl;
        change(&Enemy::shoot);
    }

    // ËŒ‚ó‘Ô‚ÌŠÖ”
    void shoot() {
        std::cout << "ËŒ‚’†" << std::endl;
        change(&Enemy::retreat);
    }

    // —£’Eó‘Ô‚ÌŠÖ”
    void retreat() {
        std::cout << "—£’E’†" << std::endl;
        change(&Enemy::come);
    }
};