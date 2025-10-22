#include <iostream>
using namespace std;

class base {
    public:
        int  a;
        int  b;
        
        void fun (){
            cout<<"insider base fun\n";
        }

};

class derived:public base{
    public: 
    int x;

    void gun (){
        cout<<"inside derived gun\n";
    }

};

int main (){
    base obj ;
    derived dobj;
    cout<<"size of base "<<sizeof(obj);
    cout<<"size of derived clas object "<<sizeof(dobj);



    return 0;
}