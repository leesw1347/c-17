//
// Created by lsw94 on 22-06-09.
//

#include <iostream>
#include <cstddef>

void f(int *pi) {
    std::cout << "정수를 가리킨다" << std::endl;
}

void f(double *pd) {
    std::cout << "실수를 가리킨다" << std::endl;
}

void f(std::nullptr_t aNullptr) {
    std::cout << "nullptr 포인터이다" << std::endl;
}

int main(int argc, char *argv[]) {
    int *pi = new int();
    double *pd = new double;

    // 아래 3개는 함수 오버로딩을 통해서 작업을 수행한다
    f(pi);
    f(pd);
    f(nullptr);

    // 아래 delete라는 연산자를 사용하여 앞에서 new 연산자로 할받은 메모리를 운영체제에 반환하는 기능을 제공한다
    delete pi;
    delete pd;
}