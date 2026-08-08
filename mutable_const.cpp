#include <iostream>


using namespace std;


class CounterBox{
private:
    int value;
    mutable int CounterOperation = 0;

public:
    CounterBox(int CounterValue){
        value = CounterValue;

    };

    int getvalue() const{
        return value;
    }

    int getoperation() const{
        return CounterOperation;
    }

    CounterBox operator+(const CounterBox& otherBox) const{
        this->CounterOperation = this->CounterOperation +1;
        return CounterBox(this->value + otherBox.value);
    }


};

int main(void)
{
    CounterBox FirstBox(10);
    CounterBox SecondBox(20);
    CounterBox ThirdBox = FirstBox + SecondBox;

    cout<<"Sum: "<<ThirdBox.getvalue()<<endl;
    cout<<"Operations: "<<FirstBox.getoperation()<<endl;
    return 0;
}