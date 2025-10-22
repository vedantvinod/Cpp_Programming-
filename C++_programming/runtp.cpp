#include <iostream>
using namespace std;

class base {
        public :
            int a;
            int b;
            void fun (){
            cout<<"inside fun";
        }
        void gun (){
            cout<<"inside gun";
        }
        virtual void sun (){
            cout<<"inside sun";
        }
        virtual void bun (){
            cout<<"inside bun";
        }
};

class derived :public base{
    public:
         int x;
        void gun (){
            cout<<"inside derived gun";
        }
        void sun (){
            cout<<"inside derived sun";
        }
        void run (){
            cout<<"inside derived  run";
        }
        virtual void mun (){
            cout<<"inside mun";
        }

};

int main (){

    base *bp1=new base ();
    derived * dp1= new derived();
    //derived * dp2= new base();
    base * bp2= new derived();

    cout<<sizeof(base);
    cout<<sizeof(derived);

    bp2->fun();
    bp2->gun();
    bp2->sun();
    //bp2->run();
    //bp2->mun();
    bp2->bun();




    return 0;
}