#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
int main(){
    using namespace std::this_thread;
    using namespace std:: chrono;
    cout<<"Hello World"<< endl;
    sleep_for(seconds(3));

    cout<<"What is youre name ?"<< endl;
    string mystring;
    cin>>mystring;
    cout<<"Wlcome to the libary "<<mystring<< endl;
    enum commands_t {Time, Books, Video, Storage};
    commands_t command; 
    cout<<"The Following Commands are avalibale\nTIme\nBooks\nVideo\nStorage"<<endl;
    cin>>command; 
    
}