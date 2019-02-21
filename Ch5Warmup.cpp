//
// Created by T10115885 on 2/21/2019.
//

#include <iostream>
#include <vector>
using namespace std;


int main(){
    const int NUM_WEIGHTS=5;

    vector<double> weights(NUM_WEIGHTS);
    double weight,total,average, max;

    total = 0;
    max = 0;
    for (int i = 0; i < weights.size() ; ++i) {
        cout<<"Enter weight "<<i+1<<":"<<endl;
        cin>>weight;
        weights.at(i) = weight;
        total+=weight;
        if (weight>max){
            max = weight;
        }
    }

    cout<<"You entered: ";
    for (int j = 0; j < weights.size() ; ++j) {
        cout<<weights.at(j)<<" ";
    }

    cout<<endl<<endl;
    cout<<"Total weight: "<<total<<endl;
    cout<<"Average weight: "<<total/NUM_WEIGHTS<<endl;
    cout<<"Max weight: "<<max<<endl;


    return 0;
}