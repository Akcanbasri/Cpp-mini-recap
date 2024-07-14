#include <QCoreApplication>
#include <QDebug>
#include <array>
#include <iostream>

using namespace std;

// Enum for colors
enum Colors {black, red, green, blue};

// Struct definition for product
struct product {
    int weight;
    double value;
    Colors color;
};

// Test functions
void test(){
    qInfo() << "Hello From test Function";
}

void test2(){
    qInfo() << "Hello from test2 Function";
    test();
}

// Function overloading examples
void test(QString name) { qInfo() << "Name:" << name; }
void test(int age) { qInfo() << "Age:" << age; }
void test(bool isActive){
    if (isActive) {
        qInfo() << "Yes it is active";
    } else {
        qInfo() << "No it is not active";
    }
}

// Function for flow control in functions
int calc(int offset, int age) {
    if (offset == 0) {
        qFatal("offset can't be zero!");
    } else {
        if (age <= 0 || age > 120) {
            qFatal("Invalid Age!");
        } else {
            int x = offset * age;
            return x;
        }
    }
    return -1; // To handle cases where above conditions are not met
}

// Helper functions using calc
int catYears(int age) { return calc(9, age); }
int dogYears(int age) { return calc(7, age); }

// Passing by Value and Reference example
void testVal(int x, int &y) {
    x = x * 10;
    y = y * 100;
    qInfo() << "test x value:" << x;
    qInfo() << "test y value:" << y;
}

// Struct with functions example
struct laptop {
    int weight;

    double asKg() { return weight * 0.453592; }
};

// Function returning pointer
QObject* get_ptr(QString name){
    QObject *o = new QObject(); // on heap we will manage this!
    o->setObjectName(name);
    return o; // Will Not be Deleted
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    qInfo() << "*****************************";

    // Variables
    bool LightSwitch = false;
    qInfo() << "Is on:" << LightSwitch;
    LightSwitch = true;
    qInfo() << "Is on:" << LightSwitch;

    int age = 44;
    double height = 6.02;
    qInfo() << "Age:" << age;
    qInfo() << "Height:" << height;

    signed int dogs = -1;
    qInfo() << "Dogs:" << dogs;
    dogs = 15;
    qInfo() << "Dogs:" << dogs;

    unsigned int cats = -1;
    qInfo() << "Cats:" << cats;
    cats = 15;
    qInfo() << "Cats:" << cats;

    qInfo() << "Size of dogs:" << sizeof(dogs);
    qInfo() << "Size of cats:" << sizeof(cats);
    qInfo() << "Size of height:" << sizeof(height);

    // Constants
    const int id = 1;
    qInfo() << "Id:" << id;

    qInfo() << "*****************************";

    // Enum
    enum Color {red = 0, green = 1, blue = 256};
    Color MyColor = Color::blue;
    qInfo() << "Color:" << MyColor;

    qInfo() << "*****************************";

    // Structs
    struct product laptop;
    qInfo() << "Size of laptop struct:" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo() << "Laptop Weight:" << laptop.weight;
    qInfo() << "Laptop Value:" << laptop.value;
    qInfo() << "Laptop Color:" << laptop.color;

    qInfo() << "*****************************";

    // Arrays
    int ages[4] = {12, 14, 15, 51};
    ages[2] = 99;

    qInfo() << "***** Ages *****";
    for(int i = 0; i < 4; i++) {
        qInfo() << ages[i];
    }

    array<int, 5> cars = {5, 65, 98, 14, 1};
    qInfo() << "***** Cars *****";
    for(int i = 0; i < cars.size(); i++) {
        qInfo() << cars[i];
    }

    qInfo() << "Array size is" << cars.size();
    qInfo() << "Size of cars array:" << sizeof(cars);
    qInfo() << "Last element of cars:" << cars[cars.size() - 1];

    qInfo() << "*****************************";

    // Arithmetic Operators
    int herAge = 31;
    qInfo() << "Her Age is" << herAge;
    herAge++; // increment the age +1
    qInfo() << "Her Age is" << herAge;
    herAge--; // decrement the age -1
    qInfo() << "Her Age is" << herAge;

    int older = herAge * 5;
    qInfo() << "Older one's age is" << older;

    float younger = herAge / 3.0;
    qInfo() << "Younger one's age is" << younger;

    qInfo() << "*****************************";

    // Assignment Operators
    int value = 15;
    qInfo() << "Value:" << value;

    value += 5;
    qInfo() << "Value:" << value;

    value -= 3;
    qInfo() << "Value:" << value;

    value *= 3;
    qInfo() << "Value:" << value;

    value /= 3;
    qInfo() << "Value:" << value;

    qInfo() << "*****************************";

    // Comparison Operators
    int x1 = 10;
    int y1 = 15;

    qInfo() << "x1 == y1:" << (x1 == y1);
    qInfo() << "x1 != y1:" << (x1 != y1);
    qInfo() << "x1 <= y1:" << (x1 <= y1);
    qInfo() << "x1 >= y1:" << (x1 >= y1);
    qInfo() << "x1 < y1:" << (x1 < y1);
    qInfo() << "x1 > y1:" << (x1 > y1);

    qInfo() << "*****************************";

    // Logical Operators
    int i = 10;

    qInfo() << "i between 5 and 20:" << (i < 20 && i > 5);
    qInfo() << "i greater than 20 or greater than 8:" << (i < 20 || i > 8);
    qInfo() << "i is 10:" << !(i != 10);
    qInfo() << "Complex condition:" << ((i > 11 && i < 20) || x1 == 10);

    qInfo() << "*****************************";

    // Input and Output
    // Output
    cout << "Hello" << endl;
    qInfo() << "Hello";

    int hasanAge = 24;
    cout << hasanAge << endl << flush;

    // Input
    int age2 = 0;
    qInfo() << "Please Enter Your Age:";
    cin >> age2;
    if (age2 <= 100 && age2 >= 18) {
        qInfo() << "Your Age is" << age2;
    } else {
        qInfo() << "This is not a valid age";
    }

    qInfo() << "*****************************";

    // cerr
    cout << "Standard output" << endl;
    cerr << "Standard error" << endl;

    qInfo() << "*****************************";

    // QDebug
    int age3 = 0;
    qInfo() << "Enter Your Age:";
    cin >> age3;
    qInfo() << "You are" << age3 << "years old.";

    qInfo() << "Information";
    qWarning() << "Warning";
    qDebug() << "Debug";
    qCritical() << "Critical";
    // qFatal("Test Crash!!!!");

    qInfo() << "*****************************";

    // Flow Control
    int age4 = 0;
    qInfo() << "Enter Your Age:";
    cin >> age4;

    if (age4 != 0) {
        if (age4 < 18) {
            qInfo() << "You are younger than 18";
        } else if (age4 >= 18) {
            qInfo() << "You are 18 or older";
        }
    } else {
        qFatal("Not a valid age");
    }

    qInfo() << "*****************************";

    // Ternary Syntax
    int age5 = 0;
    qInfo() << "Enter your age:";
    cin >> age5;

    age5 > 0 && age5 < 100 ? qInfo("You entered a valid age")
                           : qFatal("Not a valid age");

    qInfo() << "*****************************";

    // Switch Case Statement
    int age6 = 0;
    qInfo() << "Enter your age:";
    cin >> age6;

    switch (age6) {
    case 0:
        qFatal("Invalid age");
        break;
    case 16:
        qInfo() << "You can drive";
        break;
    case 18:
        qInfo() << "You can vote";
        break;
    case 21:
        qInfo() << "You can drink";
        break;
    case 67:
        qInfo() << "You can retire";
        break;
    default:
        qInfo() << "The Default:";
        break;
    }

    qInfo() << "*****************************";

    // Loops
    int start = 80;
    int max = 100;

    // While loop
    while (start <= max) {
        qInfo() << "While =" << start;
        start++;
    }

    qInfo();

    // Do While Loop
    int doStart = 1000;
    do {
        qInfo() << "Do =" << doStart;
        doStart++;
    } while (doStart <= max);

    // For Loop
    int userMax = 0;
    qInfo() << "Enter a number for loop";
    cin >> userMax;

    if(userMax <= 0){
        qFatal("invalid number for loop");
    } else {
        for (int var = 0; var <= userMax; ++var) {
            qInfo() << "your number= " << var;
        }
    }

    // for loop with array
    array<int, 4> ages2 = {44, 31, 24, 22};

    for (int var = 0; var < ages2.size(); ++var) {
        qInfo() << var << "th index is " << ages2.at(var);
    }

    qInfo() << "*****************************";

    // Functions
    test2();

    qInfo("********************");

    int yourAge = 0;
    qInfo() << "Enter your age:";
    cin >> yourAge;

    int funcValue = calc(2, yourAge);
    qInfo() << "Double of age:" << funcValue;

    qInfo("********************");

    // Cat year
    qInfo() << "your age according cat years is" << catYears(yourAge);

    qInfo("********************");

    // Dog year
    qInfo() << "your age according dog years is" << dogYears(yourAge);

    qInfo("********************");

    // We can call one of the test() functions with overloading.
    test();   // first test function
    test(24); // int function
    test(QString("hasan")); // QString function
    test(true); // bool function

    qInfo("********************");

    // Passing by Value and Reference
    int x2 = 5;
    int y2 = 10;

    qInfo() << "Main x2:" << x2;  // 5
    qInfo() << "Main y2:" << y2; // 10
    qInfo("********************");
    testVal(x2, y2);
    qInfo("********************");
    qInfo() << "Main x2:" << x2; // 5
    qInfo() << "Main y2:" << y2; // 1000

    // Structs with Functions
    struct laptop lenovo;
    lenovo.weight = 5;
    qInfo() << "Pounds:" << lenovo.weight;
    qInfo() << "Kilograms:" << lenovo.asKg();

    // QObject o1 = get_object("ByValue");
    // QObject o2 = get_ref("ByReference");
    QObject *o3 = get_ptr("ByPointer");
    qInfo() << o3->objectName();

    return a.exec();
}
