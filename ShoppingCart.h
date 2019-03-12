//
// Created by T10115885 on 3/12/2019.
//

#ifndef SPRING2019_SHOPPINGCART_H
#define SPRING2019_SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;


class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;

public:

    ShoppingCart();

    ShoppingCart(const string &customerName, const string &currentDate);

    const string &GetCustomerName() const;

    const string &GetDate() const;

    void AddItem(ItemToPurchase one);

    void RemoveItem(string itemName);

    void ModifyItem(ItemToPurchase one);

    int GetNumItemsInCart();

    int GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();

};


#endif //SPRING2019_SHOPPINGCART_H
