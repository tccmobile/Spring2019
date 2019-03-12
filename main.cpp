#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

int main() {

    string itemName, tempPrice,tempQuantity;
    int itemPrice, itemQuantity;
    ItemToPurchase item1, item2;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    //cin>>itemPrice;
    getline(cin,tempPrice);
    cout<<"Enter the item quantity:"<<endl;
    //cin>>itemQuantity;
    getline(cin,tempQuantity);

    itemPrice = stoi(tempPrice);
    itemQuantity = stoi(tempQuantity);

    item1.SetName(itemName);
    item1.SetPrice(itemPrice);
    item1.SetQuantity(itemQuantity);

    //cin.ignore();


    cout<<"\nItem 2"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    getline(cin,tempPrice);
    cout<<"Enter the item quantity:"<<endl;
    getline(cin,tempQuantity);

    itemPrice = stoi(tempPrice);
    itemQuantity = stoi(tempQuantity);

    item2.SetName(itemName);
    item2.SetPrice(itemPrice);
    item2.SetQuantity(itemQuantity);

    cout<<"\nTOTAL COST"<<endl;
    cout<<item1.GetName()<<" "<<item1.GetQuantity()<<" @ $"<<item1.GetPrice()
        <<" = $"<<(item1.GetQuantity()*item1.GetPrice())<<endl;
    cout<<item2.GetName()<<" "<<item2.GetQuantity()<<" @ $"<<item2.GetPrice()
        <<" = $"<<(item2.GetQuantity()*item2.GetPrice())<<endl;

    cout<<"\nTotal: $"<<((item1.GetQuantity()*item1.GetPrice())+
                        (item2.GetQuantity()*item2.GetPrice()))<<endl;

    return 0;
}