#include <iostream>
#include <string>

class CustomString {
private:
    std::string value;

public:
   
    CustomString(std::string val) : value(val) {}

    
    friend CustomString operator+(const CustomString& str1, const CustomString& str2);

    
    friend void print(const CustomString& str);
};