#include <iostream>
using namespace std;

class base {
    public:
    int i;
    private :
    int j;
    protected :
    int k;

    public:
    base(){
        i=10;
        j=20;≠
        k=30;
    }
    void fun(){
            cout<<i<<"\n";//allowed
        
         
            cout<<j<<"\n";//allowed
        
        
            cout<<k<<"\n";//allowed
        }
};

class derived:public base{
    public:
        void display(){
            cout<<i<<"\n";//allowed
        
         
            cout<<j<<"\n";//error 
        
        
            cout<<k<<"\n";//allowed
        }
};

class second_derived:protected derived{
    public:
        void display(){
            cout<<i<<"\n";//allowed
        
         
            cout<<j<<"\n";//error 
        
        
            cout<<k<<"\n";//allowed
        }
};
int main (){
    base obj ;
    derived dobj;
    cout<<dobj.i<<"\n";//allowed
    cout<<dobj.j<<"\n";//error 
    cout<<dobj.k<<"\n";//error

    cout<<obj.i<<"\n";//allowed
    cout<<obj.j<<"\n";//error
    cout<<obj.k<<"\n";//error

    dobj.fun();//allowed
    dobj.display();//allowed

    return 0;
}