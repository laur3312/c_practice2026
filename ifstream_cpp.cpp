#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(void)
{
    ifstream file("My_file.txt");

    string word1;
    string word2;

    std::getline(file, word1);
    std::getline(file, word2);

    file.close();

    cout << "first line on file: " << word1 << "\n" << endl;
    cout << "second line on file :" << word2 << "\n" << endl;

    return 0;
}
