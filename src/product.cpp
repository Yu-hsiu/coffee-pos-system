#include "coffee_pos/product.hpp"
#include <iostream>
using namespace std;

namespace coffee_pos {

Product::Product(int id, const string& name, double price, int stock)
    : id_(id), name_(name), price_(price), stock_(stock) {}

int Product::getId() const { return id_; }
string Product::getName() const { return name_; }
double Product::getPrice() const { return price_; }
int Product::getStock() const { return stock_; }

bool Product::deduct(int qty) {
    if (qty > stock_) return false;
    stock_ -= qty;
    return true;
}

void Product::restock(int qty) {
    stock_ += qty;
}

void Product::display() const {
    cout << "[" << id_ << "] " << name_
         << " NT$" << price_
         << " (庫存: " << stock_ << ")" << endl;
}

} // namespace coffee_pos
