//
// Created by T10115885 on 3/7/2019.
//

#ifndef SPRING2019_ITEMTOPURCHASE_H
#define SPRING2019_ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;
public:
    ItemToPurchase();

    ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice=0, int itemQuantity=0);

    const string &GetName() const;

    void SetName(const string &itemName);

    const string &GetDescription() const;

    void SetDescription(const string &itemDescription);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

    void PrintItemCost();

    void PrintItemDescription();


};


#endif //SPRING2019_ITEMTOPURCHASE_H
