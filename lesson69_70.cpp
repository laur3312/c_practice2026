#include <iostream>

using std::cout;
using std::endl;



int main(void)
{
    int val = 30;

    int& ref = val;

    ref = 40;
    cout<<val<<endl;

    auto& x = ref;
    x= 30;
    cout<<ref<<endl;
    return 0;
}