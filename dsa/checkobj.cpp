#include<iostream>
#include <string>
using namespace std;

class Person{
	string name;
	
	public:
	  void setName(string name){
		this->name = name;
	  }
	  string getName(){
		return this->name;
	  }
		
};

int main(){
	string myName = "Check Jarvis";
	Person* objch = new Person;
	Person& obj = *objch;
	obj.setName(myName);
	std::cout<<obj.getName();
	return 0;
}
