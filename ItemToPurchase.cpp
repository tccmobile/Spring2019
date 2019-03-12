//
// Created by T10115885 on 3/7/2019.
//

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
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

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}
