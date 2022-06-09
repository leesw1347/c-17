//
// Created by lsw94 on 22-06-07.
//

#ifndef UNTITLED1_ENUMERATION_H
#define UNTITLED1_ENUMERATION_H

#include <ostream>

/**
 * 열거형 타입은 별도로 값을 지정하지 않아도 요소별로 대응하는 상수를 입력시켜줄 수 있다.
 * 대응하는 상수를 입력시켜주지 않으면, 컴파일러는 인위적으로 타입에 따라 상수를 만들어 사용한다
 */

enum Days {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum class Months : short {
    Jan = 1,
    Feb,
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

const char *week[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
};

const char *months[] = {
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
};


class enumeration {
public:
// 아래 함수는 열거형 타입의 멤버를 입력하면, 그에 맞는 문자열을 반환하는 역할을 한다
    const char *DayName(Days day);

    friend std::ostream &operator<<(std::ostream &os, const enumeration &enumeration);

    friend Days operator+(Days day1, Days day2);
};


#endif //UNTITLED1_ENUMERATION_H
