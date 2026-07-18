#include "coffee_pos/order.hpp"
#include <iostream>
using namespace std;

namespace coffee_pos {

Order::Order() : total_(0) {}

void Order::addItem(int productId, const string& name, int qty, double price) {
    items_.push_back({productId, name, qty, price});
    total_ += qty * price;
}

double Order::getTotal() const { return total_; }

void Order::printReceipt() const {
    cout << "\n========== 收據 =========" << endl;
    for (const auto& item : items_) {
        cout << item.productName << " x" << item.qty
             << " = NT$" << item.qty * item.unitPrice << endl;
    }
    cout << "-------------------------" << endl;
    cout << "合計: NT$" << total_ << endl;
    cout << "=========================" << endl;
}

} // namespace coffee_pos
