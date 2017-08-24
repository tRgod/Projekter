#include <iostream>
#include <chrono>
#include <thread>



using namespace std;
int main() {
    using namespace std::this_thread;
    using namespace std::chrono;
    cout << "Hello and welcome" << endl;
    sleep_for(seconds(2));

    cout << "What is youre name ?" << endl;
    string mystring;
    cin >> mystring;
    cout << "Welcome to the libary " << mystring << endl;
    enum commands_t {
        Time, Books, Video, Storage, Exit
    };

    commands_t command;
    time_t now = time(0);
    char *dt;
    bool z=1;
    while (z) {
        for (int y = 0; 3 > y; y++) {
            cout << "The Following Commands are avalibale\nTime = 0\nBooks = 1\nVideo = 2 \nStorage =3, \nExit =4 " << endl;
            int x;
            cout << "Please inter an integer from 0 to 3, to select what you want\n";
            cin >> x;
            switch (x) {
                case Time:
                    dt = ctime(&now);
                    cout << "The local date and time is:" << dt << endl;
                    sleep_for(seconds(3));
                    y = 4;
                    break;
                case Books:
                    cout << "we got lots of books" << endl;
                    sleep_for(seconds(3));
                    y = 4;
                    break;
                case Video:
                    cout << " you think thiis it is a mother fucking game ?" << endl;
                    sleep_for(seconds(3));
                    y = 4;
                    break;
                case Storage:
                    cout << " Show you the hdd storage" << endl;
                    sleep_for(seconds(3));
                    y = 4;
                    break;
                case Exit:
                    cout<<"Have a nice day "<< mystring << endl;
                    sleep_for(seconds(3));
                    z = 0;
                    y = 4;
                    break;
                default:
                    cout << " This is not a valid number, please try agine\n" << endl;
                    break;
            }
        }
    }
}