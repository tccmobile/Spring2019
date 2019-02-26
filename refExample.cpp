//
// Created by T10115885 on 2/26/2019.
//

#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int& usrHr, int& usrMin) {
    usrHr = timeVal / 60;
    usrMin = timeVal % 60;

   // timeVal = 0;
   // cout<<"inside function:"<<timeVal<<endl;
}

int main() {
    int totTime;
    int usrHr;
    int usrMin;

    totTime = 0;
    usrHr = 0;
    usrMin = 0;

    cout << "Enter total minutes: ";
    cin >> totTime;

    ConvHrMin(totTime, usrHr, usrMin);

    cout << "Equals: ";
    cout << usrHr << " hrs ";
    cout << usrMin << " min" << endl;

    cout<<"TimeVal: "<<totTime;

    return 0;
}