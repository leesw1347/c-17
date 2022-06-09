//
// Created by lsw94 on 22-06-07.
//

enum Color1 {
    RED,
    GREEN,
    BLUE
};

enum class Color2 {
    GREEN,
    YELLOW,
    RED
};

Color1 background = RED; // 정상
Color1 foreground = Color1::BLUE; // 정상
//Color1 color1 = Color2::RED; // 에러

// Color2 열거형 타입은 아래와 같이 제한이 존재한다
//Color2 stop = RED; // 에러
//Color2 wait = YELLOW; // 에러
Color2 go = Color2::GREEN; // 정상

enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wendesday,
    Thursday,
    Firday,
    Satuerday
};

enum class Months : short {
    Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};