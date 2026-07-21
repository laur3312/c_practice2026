#include <iostream>
#include <vector>


using Numbers = std::vector<int>;


int main(void)
{
    using std::endl;
    using std::cout;


    Numbers my_list = {314,454,566};

    cout<<"Second element in my list: "<<my_list[1]<<endl;
    return 0;
}