#include <iostream>
#include <string>

class CustomString {
private:
    std::string value;

public:
   
    CustomString(std::string val) {
        this->value = val;
    }
    
    friend CustomString operator*(const CustomString& str1, const CustomString& str2);

    friend void print(const CustomString& str);
};

// Overloading 
CustomString operator*(const CustomString& str1, const CustomString& str2) {
    return CustomString(str1.value + str2.value);
}

// Friend 
void print(const CustomString& str) {
    std::cout << str.value;
}

int main() {
    CustomString str1("Hello, ");
    CustomString str2("World!");

    CustomString result = str1 * str2;  // Using overloaded + operator
    print(result);  // Output: Hello, World!

    return 0;
}
