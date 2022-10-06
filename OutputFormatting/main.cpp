#include <iostream>
#include <ios>
#include <iomanip>
// ios, iomanip library에 output formatting을 위한 다양한 메서드들이 포함되어 있음

int main()
{
    // Output Formatting은 값을 출력할 때, 보기 좋게 출력하는 것을 의미
    // std::endl --> 줄바꿈을 위한 명령어
    // std::flush --> 버퍼에 있는 데이터를 바로 보내도록하는 명령어
    // std::setw(10) --> 특정 영역의 width를 10칸으로 지정한다는 의미
    // std::setw(10) << "Hello" --> 10칸을 마련하고, 오른쪽 정렬로 "Hello" 출력 (기본값이 오른쪽)
    // std::right --> 오른쪽 정렬
    // std::internal --> 부호는 왼쪽 정렬, 값은 오른쪽 정렬
    // std::left --> 왼쪽 정렬
    // std::setfill('-') --> width로 지정된 부분 중 비어있는 부분을 해당 문자로 모두 채움
    // std::boolalpha --> boolean을 true or false로 출력
    // std::noboolalpha --> boolean을 1 or 0으로 출력
    // std::showpos --> 양수도 부호를 표기하도록 하는 설정
    // std::noshowpos --> 양수는 표기 안하도록 하는 설정
    // std::dec, std::hex, std::oct --> 각 값을 10진수, 16진수, 8진수로 표현, 실수는 영향받지 않음
    // std::showbase --> 출력 시, 10진수는 따로 없으며, 16진수는 0x, 8진수는 0이 맨앞에 추가되어서 출력됨
    // std::noshowbase --> 진수 베이스 표시 안함
    // std::uppercase --> 진수 베이스 표시 시, 대문자로 표시해줌 (0X)
    // std::scientific, std::fixed --> 1.34E-10으로 표현하거나, 0.000000과 같이 출력
    // std::cout.unsetf(std::ios::scientific | std::ios::fixed) --> 으로 실수 기본형태로 출력
    // std::setprecision --> 소수점 아래 출력 정확도를 설정
    // std::showpoint --> 소수점 아래에 남는 자리를 0으로 채움 (34.1 --> 34.1000)
    
    return 0;
}