#include <iostream>

int main()
{
    // int는 10진수를 저정할 수 있으며, 대부분 메모리 상에 4바이트의 크기를 차지한다.
    // 변수: 특정한 종류의 데이터를 저장하기 위한 이름 지어진 메모리 공간
    // 변수 생성 및 초기화 방법
    // 1. Braced Initialization
    int number1 {30};
    int zero {}; // 0으로 초기화
    
    // 2. Functional Initialization
    int number2 (50);

    // 3. Assignment Initialization
    int number3 = 10;

    int sum {number1 + number2};
    std::cout << "zero is " << zero << std::endl;
    std::cout << "sum is " << sum << std::endl;

    // 정수가 아닌 숫자를 넣으면 경고가 발생한다.(경우에 따라 컴파일 실패할 수도 있음, 컴파일 옵션에 따라 다름)
    // int narrowing_conversion {2.9};
    // std::cout << "narrowing_conversion : " << narrowing_conversion << std::endl;
    // sizeof 를 이용하여, 각 변수의 메모리 상의 할당 크기를 확인할 수 있다.
    std::cout << "size of int : " << sizeof(int) << std::endl;
    std::cout << "size of number1 : " << sizeof(number1) << std::endl;

    return 0;
}