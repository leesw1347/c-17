//
// Created by lsw94 on 22-06-09.
//

#include <iostream>
#include <cstdlib>

/**
 * 포인터는 2가지 기능을 수행하는데, const 지정자의 위치에 따라 포인터가 가리키는 저장소를 상수화 할 것인지 아니면
 * "메모리 주소를 갖고 있는 포인터를 상수화 할 것인지"를 결정한다
 *
 * 포인터의 상수화
 */
char mybuf[100];
const char *yourbuf = "Hello World"; // yourbuf 포인터가 가리키는 변수를 상수로 만든다

// const 지정자는 aptr 포인터가 가리키는 메모리 주소를 고정 시킬 때 사용한다
char *const aptr = mybuf;

int main(int argc, char *argv[]) {
    int *pi = (int *) malloc(sizeof(int));
    *pi = 100;
    std::cout << *pi << " " << pi << " 포인터는 정수의 저장소를 가리킨다." << std::endl;

    *aptr = 'a'; // 포인터가 가리키는 저장소의 값에 대한 수정은 허용
//    aptr = yourbuf; // 포인터의 주소는 변경을 허용하지 않는다 에러 발생

}