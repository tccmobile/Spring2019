//
// Created by T10115885 on 3/12/2019.
//

#include "ShoppingCart.h"

const string &ShoppingCart::GetCustomerName() const {
    return customerName;
}

const string &ShoppingCart::GetDate() const {
    return currentDate;
}

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";

}

ShoppingCart::ShoppingCart(const string &customerName, const string &currentDate) : customerName(customerName),
                                                                                    currentDate(currentDate) {}
