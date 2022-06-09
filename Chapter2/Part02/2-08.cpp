//
// Created by lsw94 on 22-06-07.
//

#include <iostream>

enum Color1 { // 범위가 없는 열거형 연산자
    RED,
    GREEN,
    BLUE
};

enum class Color2 { // 범위가 있는 열거형 연산자
    GREEN,
    YELLOW,
    RED
};

/**
int main(int argc, char *argv[]) {
    Color1 color1 = RED;
//    std::cout << color1 << std::endl;

    Color2 *others = new Color2(); // 클래스처럼 디폴트 생성자를 호출할 수 있다.
    *others = Color2::YELLOW;
//    std::cout << Color2::YELLOW << std::endl;
//    std::cout << others << std::endl;

    switch (*others) {
        case Color2::GREEN:
            std::cout << "초록색" << std::endl;
            break;
        case Color2::RED:
            std::cout << "붉은색" << std::endl;
            break;
        case Color2::YELLOW:
            std::cout << "노란색" << std::endl;
            break;
        default:
            std::cout << "color1 = " << color1 << std::endl;
    }
    std::cout << std::endl;
}*/