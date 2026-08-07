#include <iostream>

using namespace std;

class Robot{
    public:
    static int Robotcount;


    Robot(){
        Robotcount++;
        cout<<"Robot spawned"<<endl;
        cout<<" Quantiti of Robots: "<<Robotcount<<endl;

    }
};

int Robot::Robotcount = 0;


int main(void)
{
    Robot r1;
    Robot r2;
    Robot r3;
    return 0;
}