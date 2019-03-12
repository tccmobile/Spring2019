//
// Created by T10115885 on 3/7/2019.
//

#include "ItemToPurchase.h"
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemQuantity = 0;
    itemPrice = 0;
}

const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

void ItemToPurchase:: PrintItemCost(){
    cout<<this->GetName()<<" "<<this->GetQuantity()<<" @ $"<<this->GetPrice()
        <<" = $"<<(GetQuantity()*GetPrice())<<endl;
}

void ItemToPurchase::PrintItemDescription(){
    cout<<GetName()<<": "<<GetDescription()<<endl;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}

const string &ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::SetDescription(const string &itemDescription) {
    ItemToPurchase::itemDescription = itemDescription;
}

ItemToPurchase::ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity)
        : itemName(itemName), itemDescription(itemDescription), itemPrice(itemPrice), itemQuantity(itemQuantity) {}
