#include <iostream>



void getvol(int vol = 50)
{
    std::cout<<"Volume: "<<vol<<std::endl;

}


int main(void)
{
    getvol();
    getvol(56);
    return 0;
}