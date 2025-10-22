#include <iostream>
using namespace std;

class hackthon{
        public:
            string member_name;
            inline static const int maximum_number = 4;
            static int membercount;

            hackthon(string a){
                member_name=a;
                membercount++;
            }
            void function (){
                if (membercount<=maximum_number)
                    cout<<"your team invloves:"<<member_name<<'\n';
                else
                    cout<<"your team is full",'\n';

            }
};
int hackthon :: membercount=0;
int main(){
            hackthon obj1("krish ");
            hackthon obj2("tushar ");
            hackthon obj3("apurva ");
            hackthon obj4("adi ");
            hackthon obj5("shivendra");
            

            obj1.function();
            obj2.function();
            obj3.function();
            obj4.function();
            obj5.function();



    return 0;
}