//
// Created by lsw94 on 22-06-08.
//


#include <iostream>

/**
* 비트 플래그 (Bit Flags) 열거형 타입
* 첫 번째 비트는 요일의 시작을 알리는 일요일을 나타낸다
 *두 번째 비트는 월요일을 나타낸다.
*/

enum Days {
    None = 0x00, // 0000 0000
    Sunday = 1 << 0, // 0000 0001
    Monday = 1 << 1, // 0000 0010
    Tuesday = 1 << 2, // 0000 0100
    Wednesday = 1 << 3, // 0000 1000
    Thursday = 1 << 4, // 0001 0000
    Friday = 1 << 5, // 0010 0000
    Saturday = 1 << 6 // 0100 0000
};

const char *week[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
};

void DayName(int d) {
    std::cout << d << ", ";
    for (int i = 0; i < 7; i++) {
        // 비트 이동을 통해 표시된 비트를 찾는다
        if ((1 << i) & d) {
            std::cout << week[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    DayName(Sunday);
    // 아래와 같이 열거형 타입의 요소를 정수로 변환하여 비트 OR 연산을 수행한다
    Days meeting = Days((int) Thursday | (int) Monday);
    DayName(meeting);
}