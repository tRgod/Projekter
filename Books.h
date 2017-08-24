#include <iostream>

using namespace std;

class Books {
    public:


    string writer;
    string title;
    int release;
};

int main () {
    Books book1;
    Books book2;
    Books book3;
    Books book4;

    book1.writer = "Juan Soulié";
    book1.title ="C++ Language Tutorial";
    book1.release= 2007;

    book2.writer= "Stephen Randy Davis";
    book2.title= "c++ for Dummies ";
    book2.release= 2004;

}
