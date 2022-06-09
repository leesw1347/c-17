//
// Created by lsw94 on 22-06-09.
//

#include <iostream>

class MyClass {
private:
public:
};

int main(int argc, char *argv[]) {
    const int answer = 42; // 정수(42)를 answer라는 상수에 입력하여 초기화한다
    bool b = true; // true는 boolean literal
    unsigned int val1 = 328u; // unsigned int 타입의 리터럴을 val1에 입력시킨다
    long val2 = 0x7fffffL; // long 타입의 리터럴을 val2에 입력 시킨다
    unsigned long val3 = 0776745ul; // unsigned long 타입의 리터럴
    auto val4 = 108LL; // signed long long 타입의 리터럴
    val4 = 0x8000ULL << 16; // unsigned long long 타입의 리터럴
    MyClass *mc = nullptr; // nullptr은 포인트 리터럴
    char a = '\x30'; // char 타입의 헥사값 문자 리터럴
    wchar_t bb = L'\xFFEF'; // wchar_t 타입의 와이드 문자 리터럴
    char16_t cc = u'\u00f6'; // utf-16 문자 리터럴
    char32_t dd = U'\U0010FFFF'; // utf-32 또는 (ucs-4) 문자 리터럴
    char A[] = "Hello\x0A"; // 문자열 리터럴, 배열의 크기는 자동으로 설정된다
    wchar_t B[] = L"Hello\xF6\x0A";

    const char *oldPath = "C:\\Program Files\\Microsoft Visual Studio";

}