#include <iostream>

int main()
{
    /*
    C++의 3가지 오류
    Compile Error (컴파일 오류)
    - Compile이 진행될 때, 확인할 수 있는 Error, 대체로 문법적인 오류인 경우가 많으며, IDE가 알려주는 경우가 많음
    - Compile 중간에 발견되면, Compile 자체가 완료되지 않고 종료된다.

    Runtime Error (런타임 오류)
    - Compile이 진행될 때는 크게 문제가 되지 않아서, Compile은 정상적으로 종료됨
    - 하지만 실제 구동 중에 문제가 되는 오류
    - 찾아내기 힘든 경우가 많으며, 심한 경우에는 프로그램 자체가 중단되며 종료되는 경우도 있다.

    Warning (경고)
    - Compile이 진행될 때, 현재로서는 크게 문제는 되지 않지만, 추후에 더 큰 문제가 될 수 있으므로, 수정하라는 "경고"
    - Compile 옵션에 따라서, 해당 경고를 무시하도록 할 수도 있음
    */
    
    // Compile Error
    // std::cout << "Hello World!" << std::endl (Compile Error 발생 : ;이 없음)
    
    // Runtime Error & Warnings
    // 노란색 밑줄이 생기면서, 미리 경고를 알려주는 것이 Warning
    // 이를 무시하고, 컴파일한 후, 실행을 했을 때 원하지 않은 결과값이 나오는 것이 Runtime Error
    int value = 7 / 0;
    std::cout << "value : " << value << std::endl; 
    return 0;
}