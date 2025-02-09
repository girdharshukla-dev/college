#include<iostream>
using namespace std;
int main(){
	int arr[10];
    int i;
    cout<<"enter 10 elements in the array"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"enter element to be searched : ";
    int num;
    cin>>num;
    
    bool check = false;
    for(i=0;i<10;i++){
        if(arr[i]==num){
            check = true;
            break;
        }
    }

    if(check) cout<<"Element found at "<<i<<" index"<<endl;
    else cout<<"Element not found";
    return 0;
}
