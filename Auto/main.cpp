#include <iostream>

int main()
{
    // auto는 Compiler가 자동으로 해당 변수의 타입을 예측하도록 하는 키워드
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123ll};

    std::cout << "var1 size : " << sizeof(var1) << std::endl;
    std::cout << "var2 size : " << sizeof(var2) << std::endl;
    std::cout << "var3 size : " << sizeof(var3) << std::endl;
    std::cout << "var4 size : " << sizeof(var4) << std::endl;
    std::cout << "var5 size : " << sizeof(var5) << std::endl;
    std::cout << "var6 size : " << sizeof(var6) << std::endl;
    std::cout << "var7 size : " << sizeof(var7) << std::endl;
    std::cout << "var8 size : " << sizeof(var8) << std::endl;

    return 0;
}