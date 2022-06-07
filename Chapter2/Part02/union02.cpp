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
};