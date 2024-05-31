#pragma once
#include<stdio.h>
#include <iostream>
class Enemy {
public:
    // メンバ関数ポインタの型定義
    typedef void (Enemy::* State)();

    // コンストラクタ
    Enemy() {
        state = &Enemy::come; // 初期状態を接近に設定
    }

    // 状態遷移関数
    void change(State newState) {
        state = newState;
    }

    // 状態を実行する関数
    void execute() {
        (this->*state)();
    }

private:
    State state;

    // 接近状態の関数
    void come() {
        std::cout << "接近中..." << std::endl;
        change(&Enemy::shoot);
    }

    // 射撃状態の関数
    void shoot() {
        std::cout << "射撃中..." << std::endl;
        change(&Enemy::retreat);
    }

    // 離脱状態の関数
    void retreat() {
        std::cout << "離脱中..." << std::endl;
        change(&Enemy::come);
    }
};