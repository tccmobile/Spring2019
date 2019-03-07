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

    const string &getItemName() const;

    void setItemName(const string &itemName);

    int getItemPrice() const;

    void setItemPrice(int itemPrice);

    int getItemQuantity() const;

    void setItemQuantity(int itemQuantity);

};


#endif //SPRING2019_ITEMTOPURCHASE_H
