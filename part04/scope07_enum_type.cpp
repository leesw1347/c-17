//
// Created by lsw94 on 22-06-13.
//

#include <iostream>

/**
 * 범위가 없는 열거형 타입 내 요소는 파일 범위와 동일하게 적용된다
 *
 */
enum Days {
    Sunday = 0,
    Monday = Sunday + 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Satuerday = Sunday + 6;
};

enum class Months : short {
    Jan = 1,
    Feb = Jan + 1,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main(int argc, char *argv[]) {
    Days today = Days::Thursday; // 열거형 타입의 데이터는 정수로 변환이 가능하다
    std::cout << today << std::endl;
}