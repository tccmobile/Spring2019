//
// Created by T10115885 on 3/28/2019.
//

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    ~MyClass();
    MyClass(const MyClass& origClass);

    // Set member value dataObj
    void SetDataObj(const int setVal) {
        *dataObj = setVal;
    }

    // Return member value dataObj
    int GetDataObj() const {
        return *dataObj;
    }
private:
    int* dataObj;// Data member
};

// Default constructor
MyClass::MyClass() {
    cout << "Constructor called." << endl;
    dataObj = new int; // Allocate mem for data
    *dataObj = -1;
}

// Destructor
MyClass::~MyClass() {
    cout << "Destructor called." << endl;
    delete dataObj;
}

void SomeFunction(MyClass localObj) {
    // Do something with localObj
    localObj.SetDataObj(17);
}


MyClass::MyClass(const MyClass& origClass) {
    cout << "Copy constructor called." << endl;
    dataObj = new int; // Allocate sub-object
    *dataObj = *(origClass.dataObj);
}


int main() {
    MyClass tempClassObj; // Create object of type MyClass

    // Set and print data member value
    tempClassObj.SetDataObj(9);
    cout << "Before: " << tempClassObj.GetDataObj() << endl;

    // Calls SomeFunction(), tempClassObj is passed by value
    SomeFunction(tempClassObj);

    // Print data member value
    cout << "After: " << tempClassObj.GetDataObj() << endl;

    MyClass* ob2 = new MyClass(tempClassObj);

    cout<<ob2->GetDataObj()<<endl;

    delete ob2;

    return 0;
}