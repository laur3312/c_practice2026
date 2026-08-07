#include <iostream>
using namespace std;

class Singleton{
    private:
    Singleton(){
        cout<<"Obkect spawned"<<endl;

    };
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton& getInstance(){
        static Singleton instance;
        return instance;
    };



};

int main(void){

    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    return 0;
}
