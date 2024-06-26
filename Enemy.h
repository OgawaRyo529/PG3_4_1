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

    // 接近状態の関数
    void come() {
        std::cout << "接近中" << std::endl;
        change(&Enemy::shoot);
    }

    // 射撃状態の関数
    void shoot() {
        std::cout << "射撃中" << std::endl;
        change(&Enemy::retreat);
    }

    // 離脱状態の関数
    void retreat() {
        std::cout << "離脱中" << std::endl;
        change(&Enemy::come);
    }
};