#include <iostream>

int main()
{
    int number1 = 15; // 10진수
    int number2 = 017; // 8진수
    int number3 = 0x0f; // 16진수
    int number4 = 0b00001111; // 2진수

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;

    /*
    모든 데이터는 메모리 상에 0과 1의 집합으로 표현된다.
    데이터의 양이 증가할 수록, 메모리에서 표현하는 수도 증가한다.
    10진수 시스템은 사람이 0과 1로 이루어진 것들을 다루기 쉽게 만들어준다.
    8진수는 10진수와 동일한 목표를 가지지만, 현재는 거의 사용되지 않습니다.
    */

    return 0;
}