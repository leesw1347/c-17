//
// Created by lsw94 on 22-06-08.
//

#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
    // 1) 대입연산자('=') 를 사용하여 상수를 대입하는 방식으로 변수를 초기화 한다
    int a = 10; // C언어에서 사용하는 대표적인 초기화 방식을 의미한다
    std::cout << "a : " << a << std::endl;

    // 2) 객체 지향 언어에서 객체를 생성시킬 때 사용하는 생성자처럼 변수와 '()' 함수 호출 연산자 그리고 리터럴을 인수로 사용하여 변수를 초기화 한다.
    int b(20);
    std::cout << "b : " << b << std::endl;

    // 3) 중괄호를 사용하여 변수를 초기화 한다
    int c{30}; // -std=c+11 이후부터 사용이 가능하다
    std::cout << "c : " << c << std::endl;

    // 4) int 타입의 무명 변수를 생성하고 무명 변수의 값을 변수에 대입시켜 초기화 한다
    // int(40)과 같은 이름이 없는 무명 변수는 문장이 완료되면 자동 삭제된다
    int d = int(40); // int(40)은 변수의 이름이 없는 무명 변수이다.
    std::cout << "d : " << d << std::endl;

    // 5) 변수 생성 시 비어있는 변수로 초기화 한다면, GNU C++ 에서는 에러없이 컴파일되지만 VS에서는 에러가 난다
    int e(); // int()e; 의 초기화 작업은 원칙적으로 허용되지 않는다.
    if (e) std::cout << "e : " << e << std::endl; // 확인하기 위해서 출력한다

    // 6) 무명변수를 선언하고 대입한다면 변수는 0으로 초기화 하게 된다
    // 객체지향 언어에서 유래된 방식임
    int f = int(); // 여기서 int() 함수를 디폴트 생성자라 부른다
    std::cout << "f : " << f << std::endl;

    // 7) 배열의 초기화처럼 중괄호와 함께 리터럴을 만들어 변수에 대입하여 생성한다
    int g = {50};

    // 8) new 연산자를 사용하여 메모리 저장소를 생성하여 변수에 할당한다
    // int *h = (int *)malloc(sizeof(int)); 와 동일한 효과를 냄
    int *h = new int; // new 라는 지시어를 사용한다면, 저장소는 heap 메모리에 저장된다

    // 초기화 없이 생성되면, 생성된 변수는 알 수 없는 값이 들어있게 된다
    // 그러나 최근 들어 리눅스는 0으로 초기화 시킨다
    std::cout << "h : " << *h << std::endl;

    // 9) new 지정자와 () 함수 호출 연산자를 함께 사용한다면 포인터가 저장소는 자동으로 초기화 된다
    int *i = new int();
    std::cout << "i : " << *i << std::endl;

    int *j = new int(60); // i 포인터가 가리키는 저장소는 60으로 초기화하게 된다
    std::cout << "j : " << j << ", " << *j << std::endl;

    // 10) bool 타입의 변수는 true와 false를 사용하여 초기화된다
    bool ok = true; // bool ok(false);

    // std::boolalpha는 화면 출력 시 true와 false로 만들어 주는 기능을 한다
    std::cout << std::boolalpha << ok << std::endl;

    // 화면에 true와 false를 해제하려면 std::noboolalpha를 사용한다
    std::cout << std::noboolalpha << ok << std::endl;

    // 아래와 같이 데이터 타입과 함께 함수 호출 연산자 ()를 사용하면 값 초기화 (value-initilize) 시키는 작업을 동시에 수행하게 된다
    int32_t BUFFER_SIZE = 1024;
    char *pch = new char[BUFFER_SIZE]();
    std::cout << *pch << std::endl;

    // 위의 작업을 이원화하면 아래와 같이 사용할 수 있다
    pch = (char *) malloc(sizeof(BUFFER_SIZE));
    if (pch != nullptr) {
        std::memset(pch, 0, BUFFER_SIZE);
        std::cout << "pch 메모리 memset 실행" << std::endl;
    }
}