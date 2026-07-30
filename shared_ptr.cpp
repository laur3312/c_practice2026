#include <iostream>
#include <memory>


using namespace std;

int main(void)
{
    shared_ptr<int> p1 = make_shared<int>(555);
    {
        shared_ptr<int> p2 = p1;

        cout<<"Количество владельцев в скобках : "<<p1.use_count()<<endl;

        cout<<"Число в p2: "<<*p2<<endl;
    }

    cout<<"Количество владельцев после скобок: "<<p1.use_count()<<endl;
    return 0;


}