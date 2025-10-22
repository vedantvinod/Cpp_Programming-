#include <iostream>
using namespace std;
class demo{

    public:

        static int no;
        int age;
        char Class;
        string clssteacher;

        demo (){
            age=18;
            Class='a';
        }
        demo(int a,char b, string clsteacher="abhilasha mam"){
            age=a;
            Class=b;
            clssteacher=clsteacher;
        }
        int student (int a ,int b , int c){
            cout<<"age of student is :"<<age<<'\n';
            cout<<"class od student is :"<<Class<<'\n';
            cout<<"class teacher of class is  :"<<clssteacher<<'\n';
            int no2= a;
            int no3= b;
            int no4= c;
            return no2+no3+no3;

        }
        int vedant (){

            cout<<no;

            return 0;
        }
         int student (int a,int b ,float c){

            return 0;
         }
         int student (float a , int b){

            cout<<"jay ganehsh";
            return 0;
 
         }
         int student (int a, float c,int b){
            cout<<"jay baba ki";
            return 0;
         }
};
int demo:: no = 10;
 int main (){
    int ians=0;
    demo obj1;
    demo obj2(18,'a',"aja bhau");
    ians =obj2.student(11,11,11);
    cout<<"the function student will return :"<<ians<<'\n';

    demo obj3(17,'b');
    cout<<"nither is true"<<obj3.student(13,1,1);
    return 0;
 }