#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;

int main(void)
{

    std::string name;

    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
    cout<<"Your name have a "<<name.length()<<" letter"<<endl;
    return 0;
}

