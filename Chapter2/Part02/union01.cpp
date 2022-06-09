//
// Created by lsw94 on 22-06-07.
//

#include <iostream>
#include <cstring>

union DataValue01 { // 공용체를 만든다
    int v_int; // 4byte
    float v_float; // 4byte
    char v_string[4]; // 4byte
};

struct DataValue02 { // 구조체를 만든다
    int v_int;
    float v_float;
    char v_string[4];
};

/**
int main(int argc, char *argv[]) {
    std::cout << "공용체의 크기 = " << sizeof(DataValue01) << std::endl;
    std::cout << "구조체의 크기 = " << sizeof(DataValue02) << std::endl;
}*/