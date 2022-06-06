//
// Created by lsw94 on 22-06-07.
//

#include <iostream>
#include <iomanip>
#include <locale>

// 일자를 xx/xx/xxxx 포맷으로 콘솔 화면에 출력해준다
void showDate(int i, int i1, int i2) {
    // 문자 폭을 채우기 위해서 '0'으로 채운다
    std::cout << std::setfill('0'); // setfill(char_type c) : <iomanip>
    // setw(2)는 데이터 폭을 두 문자를 채울 수 있는 크기로 한다는 의미
    // setw(4)는 데이터 폭을 네 문자를 채울 수 있는 크기로 한다는 의미
    std::cout << std::setw(2) << i << "/" // setw(int n) : <iomanip>
              << std::setw(2) << i1 << "/"
              << std::setw(4) << i2 << std::endl;
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    // 원주율을 std::defaultfloat 타입으로 출력한다
    double f = 3.141592653539;
    std::cout << f << std::endl;

    double x = 800000.0f / 81.0;
    std::cout << x << std::endl;

    // std::fixed는 실수를 출력할 때 고정 소수점 자리를 사용한다
    // std::setprecision(2)은 소수점이하 자리를 2로 한다는 의미로 사용한다
    // fixed : <iomanip>
    std::cout << std::fixed << std::setprecision(2) << x << std::endl;

    // 일자 함수를 호출한다
    showDate(1, 1, 2019);

    unsigned long x0 = 64206;
    // std::showbace는 숫자를 출력할 때 진법을 표시하라는 의미로 사용한다
    std::cout << x0 << std::showbase
              << "8진법은 \"" << std::oct << x0 << "\" "
              << "16진법은 \"" << std::hex << x0 << "\"" << std::endl;
    std::cout << std::endl;
    return 0;
}
