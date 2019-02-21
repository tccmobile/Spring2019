#include <iostream>
#include <vector>
using namespace std;

int main() {
    int maxVal;
    int NUM_POINTS;
    unsigned int i;
    cin >> maxVal;
    cin >> NUM_POINTS;
    vector<int> dataPoints(NUM_POINTS);

    for (i = 0; i < dataPoints.size(); ++i) {
        cin >> dataPoints.at(i);
    }

    /* Your solution goes here  */
    for ( i = 0; i < dataPoints.size() ; ++i) {
        if (dataPoints.at(i)>maxVal){
            dataPoints.at(i) = dataPoints.at(i)-4;
        }
    }

    for (i = 0; i < dataPoints.size(); ++i) {
        cout << dataPoints.at(i) << " " ;
    }
    cout << endl;

    return 0;
}