#include <QCoreApplication>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Variables are something that will change
    bool LightSwitch = false;

    qInfo() << "Is on:" << LightSwitch;

    LightSwitch = true;
    qInfo() << "Is on:" << LightSwitch;

    // Variables
    int age = 44;
    double height = 6.02;

    qInfo() << "Age:"<< age;
    qInfo() << "Height:"<< height;

    // int age2 = 44.9;
    // qInfo() << "Age:"<< age2;

    signed int dogs = -1;
    qInfo() << "Dogs:"<< dogs;
    dogs = 15;
    qInfo() << "Dogs:"<< dogs;

    unsigned int cats = -1;
    qInfo() << "Cats:"<< cats;
    cats = 15;
    qInfo() << "Cats:"<< cats;

    qInfo() << sizeof(dogs);
    qInfo() << sizeof(cats);
    qInfo() << sizeof(height);

    // Constants Never Changes!

    int MyAge = 24;
    const int id = 1;
    // id = 2; you will get an error.
    qInfo() << "Id:"<< id;


    return a.exec();
}
