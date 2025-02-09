#include<iostream>
#include<vector>
using namespace std;

class University{
    public: string name;
    public: string location;
    public: vector<string> department;

    public: void getData();
    public: void addData();
    public: void changeDepartment();
};
  

void University::addData(){
    
    cout<<"Enter name of institute"<<endl;
    cin>> University::name;
    cout<<"Enter location"<<endl;
    cin>>University::location;
    cout<<"Enter departments, enter 0 to quit "<<endl;
    string dep;
    while(true){
        cin>>dep;
        if(dep[0]=='0') break;
        University::department.push_back(dep);
    }
}


void University::getData(){
    cout<<"name of university: "<<University::name<<endl;
    cout<<"location of unviersity: "<<University::location<<endl;
    cout<<"departments: "<<endl;
    for(int i=0;i<University::department.size();i++){
        cout<<University::department[i]<<",";
    }
}

int main(){
    University university1;
    university1.addData();

    cout<<"\n";

    University university2;
    university2.addData();

    cout<<"\n";

    university1.getData();
    cout<<"\n";
    university2.getData();
    
    return 0;
}
