#include <iostream>

int main()
{
    // int는 양수, 음수를 모두 저장할 수 있음!
    // 사실 (signed) int이기 때문, unsigned int는 양수만 저장 가능
    int value1 {10}; // signed int value1 {10};
    int value2 {-300}; // signed int value2 {-300};

    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << sizeof(value1) << std::endl;
    std::cout << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    // unsigned int value4 {-5}; // compile error, unsigned는 양수만 저장 가능!

    // short and long
    short short_var {-32768}; // 2 Bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55}; // 4 Bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888}; // 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << unsigned_long_long_int << " " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}