class A {
    public : int a;
};

class B : private A{
    public :
        void show(){
            a = 10;
        }
};

class C : public B{
    public : 
        void show2(){
            a = 20;           //this is inaccessible here
        }
};
