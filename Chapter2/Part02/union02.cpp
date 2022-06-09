//
// Created by lsw94 on 22-06-07.
//

#include <iostream>
#include <cstring>

// 데이터 타입별 상수를 선언한다
#define None 1
#define Integer 2
#define Float 3
#define String 4

// 같은 메모리 영역을 정수와 실수 그리고 문자열로 공유한다
union DataValue {
    int v_int;
    float v_float;
    char *v_string;
};

struct DataNode {
    // 콘솔 화면에서 받는 문자의 데이터 타입을 넣는 변수이다.
    int type;
    DataValue value;

    void read_some_input() {
        char *p = nullptr;

        // 입력문자를 받는데 있어 최대 크기를 100으로 잡는다
        char s[100] = {0,};
        std::cout << "문자나 정수 그리고 실수 입력을 부탁드립니다. ";
        std::cin >> s;

        // 입력된 문자가 정수인지 확인한다
        /* Convert a string to a long integer.  */
        long l = strtol(s, &p, 10);
        if (*p == 0) { // 반환하는 char 타입의 위치가 null이면 입력된 문자가 정수임을 나타낸다
            type = Integer;
            value.v_float = l;
            return;
        }

        // 입력된 문자가 실수인지 확인한다
        float f = strtof(s, &p);
        if (*p == 0) {
            type = Float;
            value.v_float = f;
            return;
        }

        // 이도저도 아니라면 문자열로 처리한다
        type = String;

        // \0를 추가하기 위해 한 바이트를 늘린다
        size_t len = strlen(s) + 1;
        value.v_string = (char *) malloc(len);
        strncpy(value.v_string, s, len);
    }

    // 문자열은 malloc() 함수를 호출하여 힙 메모리를 할당받았기 때문에 필요하다면, 다음과 같이 삭제시켜줘야 한다
    void free_string() {
        if (type == String) {
            free(value.v_string);
        }
    }
};
/**
int main(int argc, char *argv[]) {
    DataNode inputData; // DataNode 공유체 타입의 변수를 선언한다
    inputData.read_some_input();
    // 타입에 따라 선택하여 데이터를 출력한다
    switch (inputData.type) {
        case Integer:
            std::cout << "Integer : " << inputData.value.v_int << std::endl;
            break;
        case Float:
            std::cout << "Float : " << inputData.value.v_float << std::endl;
            break;
        case String:
            std::cout << "String : " << inputData.value.v_string << std::endl;
            break;
    }

    // 작업 완료 후에는 만약 문자열을 할당 받았다면, 다음과 같이 해제해주어야 한다
    inputData.free_string();
}*/