#include <iostream>
#include <fstream>


struct Point{
    int x;
    int y;
};



int main(void)
{
    Point p;

    std::ifstream file("file_1.bin", std::ios::binary);

    if(file.is_open()){
        file.read(reinterpret_cast<char*>(&p), sizeof(p));
        file.close();

    }
    std::cout<<"x:"<<p.x<<"\n"<<"y:"<<p.y<<std::endl;
    return 0;
}