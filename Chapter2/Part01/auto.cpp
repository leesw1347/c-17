//
// Created by lsw94 on 22-06-07.
//

// 만약 데이터의 타입을 예측할 수 있다면 -> 람다(lambda) 형식으로 데이터 타입을 넣어줘야 한다
auto foo(int x) -> int {
    return -1;
}

// 템플릿을 사용할 때 간혹 필요한 방법이기도 함
template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    // auto, decltype 반복자나 stl에서 제공하는 컨테이너 클래스가 제공하는
    // 길고 복잡한 데이터 타입을 간단하게 명시할 때 주로 사용한다
}
/**
int main(int argc, char *argv[]) {
    // name은 문자열을 저장, 초기화 하는 과정에서 const char * 타입으로 인식
    auto name = "Seoul";
    int foo = 0;
    auto bar = foo;
    decltype(foo) bar2; // bar2 변수는 위의 foo 변수의 타입과 같은 정수 타입으로 인식한다
}
 */