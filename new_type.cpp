#include <iostream>
#include <cstdint>


int main(void)
{
    using std::cout;
    using std::endl;


    int32_t some_number = 777;

    void* ptr = &some_number;

    int32_t* ptr_2= reinterpret_cast<int32_t*>(ptr);

    cout<<"Number:"<<*ptr_2<<endl;
    return 0;

}