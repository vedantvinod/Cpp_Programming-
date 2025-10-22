#include <iostream>
using namespace std;

class car {
    public :
    int price;
    string colour;
    string model;
    int milage;
    int average;
    car()
    {
        cout<<"inside constructor\n";
        price=100000;
        colour="red";
        model="honda";
        milage=20;
        average=15;
    }
    car(int p,string c,string m,int mi,int a)
    {
        cout<<"inside parameterised constructor\n";
        price=p;
        colour=c;
        model=m;
        milage=mi;
        average=a;
    }



};

//here the cout and cin is internally calling printf and scanf coz c++is intrernally calling  c++ 
int main (){
    car obj1;
    car obj2;
    car obj3(90,"black","BMW",10,8);
    cout<<obj1.price<<"\n"<<obj1.colour<<'\n'<<obj1.model<<'\n'<<obj2.model<<endl;
    obj2.model="audi_changed";
    cout<<obj2.model<<endl;
    cout<<sizeof(obj1)<<endl;
    


    
 



    return 0;
}