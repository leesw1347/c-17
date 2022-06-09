//
// Created by lsw94 on 22-06-08.
//

/**
* 묶음 타입의 초기화 시 주의 사항
 * 구조체나 클래스처럼 묶음 타입의 변수를 생성하고, 초기화 시키는 방법을 알아본다
*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Data {
    // 멤버 변수 선언
    int age; // 나이
    char name[100]; // 이름
    int balance; // 지갑속의 용돈

    // 구조체 내 생성자를 만들어주면 해결된다
    Data(int a, const char *n, int b) {
        age = a;
        strcpy(name, n);
        balance = b;
    }

    // 컴파일러는 생성자가 없으면 디폴트 생성자를 생성한다
    Data() {
        age = 0;
        memset(name, 0, 100); // 또는 name[0] = '\0';
    }

    // 컴파일러에 디폴트 생성자 제작을 요청한다
//    Data() = default;

    // 비어 있는 디폴트 생성자를 생성한다
//    Data{};

};

void Print(Data user) {
    std::cout << user.age << ", " << user.name << ", " << user.balance << std::endl;
}

int main(int argc, char *argv[]) {
    // 단순 대입연산자로는 Data 구조체에 값을 할당할 수 없다
//     Data user01 = 21; (error)

    // 2) 구조체 내 순서에 맞추어 리터럴을 함수의 인수로 사용하여 변수를 초기화 한다면 아래와 같이 에러가 발생한다.
    Data user02(33, "이순신", 20000);

    // 3) 중괄호를 사용한다면, 초기화가 허용된다
    Data user03{53, "강감찬", 450000}; // -std=c++11 이후부터 사용이 가능하다
    Print(user03);

    // 4) 무명변수를 만들어 무명 변수의 값을 변수에 대입 시켜 초기화 한다
//    Data user4 = Data(45, "이성계", 60000);

    // 5) 아래와 같이 함수 호출 연산자를 함께 변수를 생성한다면 버그가 난다
    Data *user05 = new Data(60, "연개소문", 50000);

// 6) Data 타입의 무명 변수에 대입한다면, 변수가 생성되는 동시에 모든 멤버 변수는 타입에 따라 초기화 된다
    Data user06 = Data();
    Print(user06);

    // 7) 구조체와 클래스는 다음과 같이 나열된 값으로, 변수에 순서대로 할당하여 초기화 시킬 수 있다
    Data user07 = {21, "홍길동", 10000};
    Print(user07);

    // 8) 초기화 없이 구조체의 변수를 선언한다면 멤버 변수에 알 수 없는 값이 들어간다
    Data user08;
    Print(user08);

    // new 라는 키워드를 사용하여 메모리 저장소를 생성하여 변수에 할당한다
    // 멤버 변수에 알 수 없는 값이 들어간다
    Data *user_08 = new Data;
    Print(*user_08);

    // 9. new 지정자와 함께 아래처럼 변수를 생성하면 모두 자동으로 초기화 된다
    Data *user_09 = new Data();
    Print(*user_09);

    Print(user02);
//    Print();
    Print(*user05);
    Print(user08);
    Print(*user_08);

}

















