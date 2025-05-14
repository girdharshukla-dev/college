#include<iostream>
#include<fstream>

int main(){
    std::ofstream file("example.txt",std::ios::app);
    if(!file){
        std::cout<<"No file created"<<std::endl;
    }
    else{
        std::cout<<"Yes file opened"<<std::endl;
    }

    file<<"This is second line "<<std::endl;

    return 0;
}
