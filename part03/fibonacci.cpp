//
// Created by lsw94 on 22-06-09.
//

#include <iostream>

// constexpr(상수표현식) generalized constant expression
// 상수표현식은 컴파일러가 컴파일 시점에 상수로 인식함
constexpr unsigned long fibonacci(unsigned long l) {
    return (l <= 1ul) ? l : (fibonacci(l - 1) + fibonacci(l - 2));// ul (unsigned long)
}

int main(int argc, char **argv) {
    item i = 10;

    unsigned long li = fibonacci(15);
    std::cout << li << " = fibonacci(15)" << std::endl;

    // 상수 표현식은 일반적으로 특성상 함수나 식 그리고 상수에 적용된다
    constexpr double pi = 3.14159;
}