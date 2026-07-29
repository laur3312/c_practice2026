#include <iostream>

#include <string>

using namespace std;


struct App{
    string name = "Telegram";


    App(){
        cout<<"[Login]"<<" Welcome to "<<name<<endl;
    }
    
    ~App(){
        cout<<"[Logout] "<<"Status: Last seen recently";
    }
};


    int main(void){
        
        cout<<"Phone dispalay turn ON"<<endl;

        App tg{

        };

        cout<<"phone display turn OFF"<<endl;
        return 0;

        
    }
