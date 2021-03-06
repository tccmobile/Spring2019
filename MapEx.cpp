//
// Created by T10115885 on 4/30/2019.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename MapType>
MapType GetMapping(MapType mapMe, vector<MapType> mappings){
    MapType result = mapMe;
    unsigned int i;
    bool keepLooking;

    keepLooking = true;

    cout << endl;
    cout << "Mapping range: ";
    for (i = 0; i < mappings.size(); ++i) {
        cout << mappings.at(i) << " ";
    }
    cout << endl;

    i = 0;       // Restart counting
    while ((i < mappings.size()) && keepLooking) {
        if(mapMe <= mappings.at(i)) {
            result = mappings.at(i);
            keepLooking = false;
        }
        else {
            ++i;
        }
    }

    cout << mapMe << " is mapped to " << result << endl;

    return result;
}

// ***********************************************************************

int main() {
    vector<int> mapIntMappings;
    vector<double> mapDoubleMappings;
    vector<string> mapStringMappings;
    int mapInt;
    int mapIntResult;
    double mapDouble;
    double mapDoubleResult;
    string mapString;
    string mapStringResult;

    // Initialize mapping entries
    mapIntMappings.push_back(100);
    mapIntMappings.push_back(200);
    mapIntMappings.push_back(300);
    mapIntMappings.push_back(400);
    mapIntMappings.push_back(500);
    mapIntMappings.push_back(600);

    // Initialize mapping entries for doubles
    mapDoubleMappings.push_back(-12.0);
    mapDoubleMappings.push_back(-6.0);
    mapDoubleMappings.push_back(0.0);
    mapDoubleMappings.push_back(6.0);
    mapDoubleMappings.push_back(12.0);

    // Initialize mapping entries for strings
    mapStringMappings.push_back("A");
    mapStringMappings.push_back("E");
    mapStringMappings.push_back("M");
    mapStringMappings.push_back("S");
    mapStringMappings.push_back("W");
    mapStringMappings.push_back("Z");

    cout << endl << "Enter an integer value to map: ";
    cin >> mapInt;
    mapIntResult = GetMapping(mapInt, mapIntMappings);

    // FIXME: Add code similar to the integer processing to process
    //        a double and a string

    cout << endl << "Enter a double value to map: ";
    cin >> mapDouble;
    mapDoubleResult = GetMapping(mapDouble, mapDoubleMappings);


    cout << endl << "Enter string value to map: ";
    cin >> mapString;
    mapStringResult = GetMapping(mapString, mapStringMappings);

    return 0;
}
