//
// Created by lsw94 on 22-06-09.
//

#include <iostream>

//int calcConstant() {
auto calcConstant() {
    int foo = 0;
    std::cout << "초기값을 입력하시기 바랍니다" << std::endl;
    std::cin >> foo;
    return foo;
}

int main(int argc, char *argv[]) {
    // 함수의 반환값으로 상수를 설정한다
    const static int maxarray = calcConstant();
//    char store[maxarray] = {0,}; // C 언어에서는 허용되지 않는다
    char store[50] = {0,};
    std::cout << "문자열을 입력하십시요." << std::endl;
    std::cin >> store;
    
    std::cout << "store " << store << std::endl;
    return 0;
}