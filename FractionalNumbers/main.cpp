#include <iostream>
#include <iomanip> // std::setprecision을 사용하기 위한 library

int main()
{
    // float 4Byte 정확도 7
    // double 8Byte 정확도 12 recommended default!
    // long double 12Byte 정확도 12 이상
    // 크기가 늘어날 수록 표현 정확도도 함께 높아짐!

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890}; // 실제 Compiler마다 정확도는 다르며, GCC 기준 17자리
    long double number3 {1.12345678901234567890L}; // Clang ++ 기준 double과 동일
    // float에 초기화시에는 마지막에 f를 꼭 붙여줘야하며,
    // long double을 초기화할 시에는 마지막에 꼭 L을 붙여서 크기를 지정해줘야한다.
    // double은 계산을 위한 기본 값이므로 필요 없음


    std::cout << "float size : " << sizeof(float) << std::endl;
    std::cout << "double size : " << sizeof(double) << std::endl;
    std::cout << "long double size : " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20); // std::cout 의 정확도를 설정
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    float number4 {192400023.0f}; // 7자리 이상이므로, 정확도 문제가 발생함!
    std::cout << number4 << std::endl;
    
    // 과학적 표기법으로도 표기 가능
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};

    double number8 {0.00000000003498};
    double number9 {3.498e-11};

    std::cout << number5 << std::endl;
    std::cout << number6 << std::endl;
    std::cout << number7 << std::endl;
    std::cout << number8 << std::endl;
    std::cout << number9 << std::endl;

    double number10 {5.6};
    double number11 {};
    double number12 {};

    double result {number10 / number11}; // 실수 / 0은 inf
    std::cout << result << std::endl;

    result = number11 / number12; // 0 / 0은 nan
    std::cout << result << std::endl;

    return 0;
}