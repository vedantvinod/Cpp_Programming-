#include <iostream>
using namespace std;

int main()
{   int ilen=0;
    int *arr=NULL;

     cout<<"enter the no of elemenyts";
    cin>>ilen;
    //allocate the memo
    arr=new int[ilen];
    
    if (arr==NULL){

    cout<<"memory is not allocated";

    }
    else{
        cout<<"memory is allocated";
    }

    //use the memory

    //deallocate the memory 

    //delete arr; here by it just the delete the 1st 4byte from the base adress 
    delete [] arr;//it will free all the memory 

    return 0;
}