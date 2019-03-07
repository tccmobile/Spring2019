//
// Created by T10115885 on 3/7/2019.
//

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemQuantity = 0;
    itemPrice = 0;
}

const string &ItemToPurchase::getItemName() const {
    return itemName;
}

void ItemToPurchase::setItemName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::getItemPrice() const {
    return itemPrice;
}

void ItemToPurchase::setItemPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

int ItemToPurchase::getItemQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::setItemQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}
