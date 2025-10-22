#include <iostream>
using namespace std;
class car {
    public:
    int speed;
    int mileage;
    int model;

    car(int s, int m, int mo) {
        speed = s;
        mileage = m;
        model = mo;


    }
    car (){
        speed = 0;
        mileage = 0;
        model = 0;
    }
    ~car() {
        cout << "Destructor called" << endl;
    }
    
};
car mycar;
car mycar2(100, 20, 2020);


int main(){
    cout << mycar2.speed << endl;
    cout << mycar2.mileage << endl;
    cout << mycar2.model << endl;
    cout << mycar.speed << endl;

    cout << mycar.mileage << endl;

    return 0;
}
