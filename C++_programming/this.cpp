#include <iostream>
using namespace std;
class arithmatic{
    public:
        int ino1;
        int ino2;
        arithmatic ()
        {
            cout <<"inside default constructor ";

            ino1=0;
            ino2=0;
        }  
         arithmatic (int a, int b){
            cout <<"inside parametrsized constructor ";

            ino1=a;
            ino2=b;
         }
         int addition (){
            int ians =0;
            ians= ino1+ ino2;
            return ians;
         }
        int sub (){
            int ians =0;
            ians= ino1 - ino2;
            return ians;
         }

};

int main()
{
     arithmatic aobj1(11,10);
     arithmatic aobj2(21,20);


    int iret =0;
    iret = aobj1.addition();
    cout<<"addition is :"<<iret<<"\n";
    
    iret = aobj1.sub();
    cout<<"sub is : "<<iret<<"\n";

    iret = aobj2.addition();
    cout<<"addition is :"<<iret<<"\n";
    
    iret = aobj2.sub();
    cout<<"sub is : "<<iret<<"\n";

    
    




    return 0;
}
