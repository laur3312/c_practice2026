#include <iostream>
#include <vector>
#include <algorithm>






int main(void)
{
    std::vector<int> numbers = {3141,313,42,553,131,644,13,4,12,45};


    std::sort(numbers.begin(), numbers.end(), [](int a, int b){
        return a < b;
    });


    for(size_t i = 0; i <numbers.size(); i++){
        std::cout<<numbers[i]<<" ";
    }
    return 0;
}