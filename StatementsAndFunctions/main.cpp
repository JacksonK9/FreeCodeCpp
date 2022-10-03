#include <iostream>

int addNumbers(int first_number, int second_number);
// 이와 같이 실행 전에 꼭 선언이 되어야함.
// 선언문에는 함수의 이름, 함수의 반환형 (결과값의 자료형), 함수의 입력형 (입력값의 자료형) 이 포함된다.

int main()
{
    // Statement : C++ 프로그램에서 계산의 기본 단위
    // 모든 C++ 프로그램은 이러한 Statement들의 집합으로 구성되어 목표를 달성
    // Statement는 세미콜론(;)으로 종료

    // Statement들은 위에서 아래로 순서대로 실행
    // 실행은 프로그램을 종료시키는 Statement가 있거나 다른 Statement들을 실행시키는 Statement가 있을 때까지 계속됨

    // 함수는 꼭 실행 전에 선언되어야한다. (정의는 이후에 되어도 상관 없음)
    // 함수는 코드의 재사용성을 높일 수 있다.
    int firstNumber = 12;
    int secondNumber = 9;

    int first_number {3}; // int first_number = 3;
    int second_number (7); // int second_number = 7;

    std::cout << "First Number : " << first_number << std::endl;
    std::cout << "Second Number : " << second_number << std::endl;
    
    int sum = firstNumber + secondNumber;

    sum = addNumbers(firstNumber, secondNumber);

    sum = addNumbers(34, 7);

    std::cout << "The sum of the two numbers is : " << sum << std::endl;
    std::cout << "The sum of the two numbers is : " << addNumbers(23, 8) << std::endl;

    return 0;
}

int addNumbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}