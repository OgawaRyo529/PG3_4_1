#pragma once
#include<stdio.h>
#include <iostream>
class Enemy {
public:
    // �����o�֐��|�C���^�̌^��`
    typedef void (Enemy::* State)();

    // �R���X�g���N�^
    Enemy() {
        state = &Enemy::come; // ������Ԃ�ڋ߂ɐݒ�
    }

    // ��ԑJ�ڊ֐�
    void change(State newState) {
        state = newState;
    }

    // ��Ԃ����s����֐�
    void execute() {
        (this->*state)();
    }

private:
    State state;

    // �ڋߏ�Ԃ̊֐�
    void come() {
        std::cout << "�ڋߒ�..." << std::endl;
        change(&Enemy::shoot);
    }

    // �ˌ���Ԃ̊֐�
    void shoot() {
        std::cout << "�ˌ���..." << std::endl;
        change(&Enemy::retreat);
    }

    // ���E��Ԃ̊֐�
    void retreat() {
        std::cout << "���E��..." << std::endl;
        change(&Enemy::come);
    }
};