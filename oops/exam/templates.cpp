#include<iostream>

template <typename T1, typename T2>
auto sum(T1 a, T2 b){
    return a+b;
}

int main(){
    auto ans = sum(2,3);
    std::cout<<ans<<" "<<typeid(ans).name();
    return 0;
}