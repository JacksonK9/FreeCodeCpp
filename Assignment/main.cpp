#include <iostream>

int main()
{
    int var {123};
    std::cout << var << std::endl;

    var = 55;
    std::cout << var << std::endl;

    std::cout << std::endl;

    double var2 {44.55};
    std::cout << var2 << std::endl;

    var2 = 99.99;
    std::cout << var2 << std::endl;

    std::cout << std::endl;

    bool state {false};
    std::cout << std::boolalpha; // boolean type cout으로 출력 시, true or false가 나오도록 하는 것
    // 아무 설정도 하지 않았을 경우, boolean type 출력 시 0 or 1이 출력 됨
    std::cout << state << std::endl;

    state = true;

    std::cout << state << std::endl;

    auto var3 {333u};

    var3 = -22; // unsigned int에 음수를 입력했음!
    // 컴파일 오류는 발생하지 않았지만, 원했던 값과 다른 값이 나오므로 주의! (언더플로우 발생)

    std::cout << var3 << std::endl;

    return 0;
}