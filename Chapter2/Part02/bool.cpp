//
// Created by lsw94 on 22-06-07.
//

#include <iostream>

void Print_int(int x) {
    printf("%d 인수는 %s입니다.\n", x, (x) ? "참" : "거짓");
}

// bool 타입의 인수를 사용한다
void Print_bool(bool x) {
    std::cout << x << " 인수는 " << (x ? "참" : " 거짓") << "입니다" << std::endl;
    std::cout << "bool 타입의 데이터는 " << std::boolalpha << x << "와" << !x << "로 표시할 수 있습니다" << std::endl;
}

int main(int argc, char *argv[]) {
    bool ok = true;
    bool notok = false;

    Print_int(100);
    Print_bool(ok);

    // 화면에 true와 false를 해제 하려면 다음과 같이 std::noboolalpha를 사용해야 한다
    std::cout << std::noboolalpha << notok << " " << std::endl;

    // std::boolapha 상수를 대신해서 std::boolalpha() 함수를 사용할 수 있다
    std::boolalpha(std::cout);
    std::cout << notok << std::endl;

    // 입력 스트림을 통해 입력된 문자열(true, false)를 변수에 bool 타입의 데이터로 입력하고 자 한다면 아래와 같이 작업이 가능
    bool isture;
    std::cin >> std::boolalpha >> isture;
    std::cout << isture << " = " << (isture == true) << std::endl;
}




















