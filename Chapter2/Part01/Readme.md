2.01 변수 (Variables)
---

    지정자 (specifiers)
        선언 지정자(declaration specifier) : const나 constexpr와 같은 지정자는 이 변수가 상수임을 선언하는데 사용한다.
        const int a(상수) = 14(리터럴)

        저장 지정자(storage class specifier)
        volatile 변수로부터 데이터를 읽고 쓸 때 변수가 가리키는 메인 메모리 영역 내 데이터를 사용한다
        static 함수나 클래스 내부에 존재하더라도 지역 변수가 아닌 전역 변수처럼 사용이 가능한 변수를 의미함 정적변수(static variables)라고 함

        extern 지정자
        외부 프로그램에 의해 제작되고 컴파일 된 실행 모듈이나 라이브러리 내 존재하는 전역 변수를 말한다
