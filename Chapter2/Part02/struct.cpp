//
// Created by lsw94 on 22-06-07.
//

#include <iostream>

/**
 * 구조체는 내부에서 함수의 선언과 정의가 가능함
 * 구조체 내부에서 선언된 변수는 멤버변수(Member Variables)라 하며, 멤버 함수라 부른다
 */
template<typename T>
class allocator {
//public:
//     아래 선언된 데이터 타입은 내부와 외부에서 함께 사용할 수 있다.
private :
    // 아래 선언된 private 레벨 데이터들은 외부에서 해당 데이터 타입을 사용할 수 없게 된다
    typedef T value_type;
    typedef value_type *pointer;
    typedef const value_type *const_pointer;

public:
    template<typename U>
    struct rebind {
        typedef allocator<U> other; // other 타입은 외부에서 호출이 가능하다
    };
};

// 구조체는 다음과 같이 static 지정자로 선언된 정적 멤버와 일반 멤버 모두를 가질 수 있다.
struct X {
    static void f();

    static int n;
    int m;
};

void X::f() {
    std::cout << "안녕하세요! n 변수는 " << n << std::endl;
}

int X::n = 10; // 함수 안에서는 값을 할당할 수 없다

/**
int main(int argc, char *argv[]) {
    // 구조체 타입 변수를 선언 (구조체는 변수를 선언 시 객체로 생성된다)
    // 아래와 같이 선언된 변수와 멤버 선택 연산자 ('.') 또는 포인터 멤버 선택 연산자(->)
    X y = {100,};
    X::n = 100;
    y.f();
    std::cout << "안녕하세요! m 변수는 " << y.m << std::endl;
}
 */














