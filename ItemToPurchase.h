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
    int itemPrice;
    int itemQuantity;
public:
    ItemToPurchase();

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

};


#endif //SPRING2019_ITEMTOPURCHASE_H
