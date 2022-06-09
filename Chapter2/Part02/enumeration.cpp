//
// Created by lsw94 on 22-06-07.
//

#include <iostream>
#include "enumeration.h"

const char *enumeration::DayName(Days day) {
    // 열거형 타입은 정수로 암시적 변환이 가능하다
    if (day < Sunday || day > Saturday) {
        return "알수없는 주 입니다";
    }
    return week[day];
}

std::ostream &operator<<(std::ostream &os, const enumeration &enumeration) {
    return os;
}

Days operator+(Days day1, Days day2) {
//    return <#initializer#>;
    // 열거형 타입을 정수 타입으로 변환하여 연산 작업을 수행한다
    int c = (int) day1 + (int) day2;
    while (c > 7) {
        c -= 7;
    }
    return (Days) c;
}

/**
int main(int argc, char *argv[]) {
    enumeration *enum1 = new enumeration;
    std::cout << enum1 << std::endl;
    Days today = Thursday;

    // 열거형 타입의 연산은 기본적으로 열거형 타입이 정수로 반환하고 정수에 관한 연산 작업이 이루어진다
    // 따라서 작업결과는 정수가 된다.
    Days tomorrow = (Days) (Thursday + 1); // 연산 작업 결과를 열거형 타입으로 변환한다

    // 열거형 타입의 변수가 저장한 데이터는 정수로 변환이 가능하다
    std::cout << enum1->DayName(today) << "은 " << today + 1 << "번째 요일이다." << std::endl;

    today = (Days) (Saturday + Friday); // Friday를 의미한다
    std::cout << enum1->DayName(today) << "는 " << (int) today << "번째 요일이다." << std::endl;

    // 현재 월은 12월이다. 범위가 있는 열거형 타입은
    // 다음 페이지와 같이 범위 확인 연산자를 사용하여 열거형 타입과 멤버로 상수를 표시한다
    Months thisMonth = Months::Dec;
    Months nextMonth = (Months) ((thisMonth == Months::Dec) ? 1 : (short) thisMonth + 1);
    short monthNumber = (short) thisMonth; // 숫자로 변환이 가능하다

    std::cout << months[monthNumber - 1] << "월은 " << (int) nextMonth << "번째 월이다." << std::endl;
    std::cout << months[(short) nextMonth - 1] << "월은" << (int) nextMonth << "번째 월이다. " << std::endl;

    // 위의 + 연산자 오버로딩이 호출되어 아래 작업이 이루어진다
    today = (Days) (Saturday + Friday);
    Days mDay = today + Monday;
    std::cout << enum1->DayName(mDay) << "주는 " << (int) mDay + 1 << "번째 요일이다." << std::endl;
}*/