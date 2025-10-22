#include <stdio.h>

int addition (int ino1,int ino2){
    int ians=0;
    ians= ino1+ino2;
    return ians;
}
int sub (int ino1,int ino2){
    
    int ians= ino1-ino2;
    return ians;
}
int main() //call back function
{
    int iret=0;// storage class is  auto for the veriable inside the function 
    iret=addition (11,10);
    printf("addition is :%d\n",iret);

    iret= sub (1626,1000);
    printf("sub is :%d\n",iret);
    
    return 0;
}