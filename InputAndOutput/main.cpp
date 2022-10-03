#include <iostream>
#include <string>

int main() {
    // std::cout << "Hello World";
    // 이는 "Hello World"라는 문자열을 std::cout으로 보낸다는 뜻으로 이해하면 좋다.
    // std::cout 자체가 Console에 찍어주는 것 중 하나
    // std::cerr은 Console에 에러를 출력하는 것
    // std::clog는 Console에 로그를 출력하는 것
    // std::cin은 Console에서 데이터를 받아오는 것을 의미
    // std::getline(std::cin, variable_name)
    // 위와 같이 작성하면, 띄워쓰기를 포함한 한 줄 (Enter 입력 전까지)을 모두 variable_name에 받아올 수 있음.

    std::cout << "Hello C++20 " << std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened" << std::endl;

    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;
    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

    // 띄워쓰기를 포함한 데이터를 받을 때
    // std::cin.ignore(); // 맨 앞 문자 1개 만큼의 버퍼를 삭제하는 함수
    // 기존 cin을 통해 데이터를 받으면, age1에 숫자만 저장되고 아직 버퍼에는 \n인 개행문자가 남아있는 상태.
    // 따라서, 단순히 getline을 통해서 받게되면, 아무것도 입력되지 않고 \n이 입력되므로,
    // getline으로 받은 변수에는 아무 것도 입력이 되어있지 않고, 그 다음 cin 또는 getline 입력으로 전달되어버린다.
    // 따라서 꼭 지속해서 getline을 사용한 경우가 아니라 cin과 getline을 섞어쓰는 경우에는 주의해서 버퍼를 비워줘야한다.
    std::string full_name;
    int age2;

    std::cout << "Please type your name and age : " << std::endl;

    std::getline(std::cin, full_name);

    std::cin >> age2;

    std::cout << "Hello " << full_name << " you are " << age2 << " years old!" << std::endl;

    return 0;
}
