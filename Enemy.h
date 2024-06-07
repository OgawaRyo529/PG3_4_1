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

    // �ڋߏ�Ԃ̊֐�
    void come() {
        std::cout << "�ڋߒ�" << std::endl;
        change(&Enemy::shoot);
    }

    // �ˌ���Ԃ̊֐�
    void shoot() {
        std::cout << "�ˌ���" << std::endl;
        change(&Enemy::retreat);
    }

    // ���E��Ԃ̊֐�
    void retreat() {
        std::cout << "���E��" << std::endl;
        change(&Enemy::come);
    }
};