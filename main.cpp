#include <QCoreApplication>
#include <iostream>
#include <regex>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    regex reg("[a-z]+");
    if (regex_match("helloworld",reg)){
        cout<<"Si"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return a.exec();
}
