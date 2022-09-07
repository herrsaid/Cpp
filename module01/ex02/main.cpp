
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "value = " << str << " address = " << &str<< std::endl;
    std::cout << "value = " << *stringPTR <<  " address = " <<  stringPTR << std::endl;
    std::cout << "value = " << stringREF <<   " address = " << &stringREF << std::endl;
}