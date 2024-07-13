#include <QCoreApplication>
#include <QDebug>
#include <array>

using namespace std;


enum Colors {black, red, green, blue};

// Precursor to classes
struct product
{
    int weight;
    double value;
    Colors color;
};

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

    //enum
    // int red = 0;
    // int green= 1;
    // int blue = 2;

    enum Color {red =0 , green = 1, blue=256};
    Color MyColor = Color::blue;
    qInfo() << "Color" << blue;

    // Structs
    product laptop; // no assignment
    qInfo()<< "Size" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo() << "Laptop Weight:"<<laptop.weight;
    qInfo() << "Laptop Value:"<<laptop.value;
    qInfo() << "Laptop Color:"<<laptop.color;

    // Arrays
    // zero based index array
    int ages[4] = {12, 14, 15, 51};
    ages[2] = 99;

    qInfo()<< "*****Ages*****";
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];
    qInfo()<< ages;

    array<int, 5> cars;
    cars[0] = 5;
    cars[1] = 65;
    cars[2] = 98;
    cars[3] = 14;
    cars[4] = 1;
    qInfo()<< "*****Cars*****";
    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3];
    qInfo() << cars[4];
    // qInfo()<< cars;

    qInfo()<< "Array size is"<< cars.size();
    qInfo()<< "Size of is"<< sizeof(cars);
    qInfo()<< "last"<< cars[cars.size() - 1];

    // Arithmetic Operators
    int herAge;
    herAge = 31;
    qInfo() << "Her Age is" <<herAge;
    herAge++; //increment the age +1
    qInfo() << "Her Age is" <<herAge;
    herAge--; //Decerese the age -1
    qInfo() << "Her Age is" <<herAge;

    int older = herAge * 5;
    qInfo() << "Older ones age is" << older;

    float younger = herAge / 3;
    qInfo() << "Younger ones age is" << younger;

    // Assigment Operators
    int value = 15;
    qInfo() << "value" << value;

    value += 5;
    qInfo() << "value" << value;

    value -= 3;
    qInfo() << "value" << value;

    value *= 3;
    qInfo() << "value" << value;

    value /= 3;
    qInfo() << "value" << value;

    // Comparision Operators
    int x = 10;
    int y = 15;

    qInfo()<<"x == y"<< (x == y);
    qInfo()<<"x != y"<< (x != y);
    qInfo()<<"x <= y"<< (x <= y);
    qInfo()<<"x >= y"<< (x >= y);
    qInfo()<<"x < y"<< (x < y);
    qInfo()<<"x > y"<< (x > y);

    //Logical Operators &&(Both True), ||(One of them true) !(Reverse the result)
    int i = 10;

    qInfo() << "i between 5 and 20"<< (i < 20 && i > 5);
    qInfo() << "i greater than 20, greater than 8"<< (i < 20 || i > 8);
    qInfo() << "i not equal 10 "<< !(i != 10);
    qInfo() << "Complex:"<< ((i > 11 && i <20) || x == 10);


    return a.exec();
}
