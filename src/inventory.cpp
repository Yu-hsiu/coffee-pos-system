#include "coffee_pos/inventory.hpp"
#include <iostream>
using namespace std;

namespace coffee_pos {

Inventory::Inventory() {}

void Inventory::loadDefaults() {
    products_ = {
        Product(1, "拿鐵",     120, 50),
        Product(2, "美式",      90, 50),
        Product(3, "卡布奇諾", 130, 30),
        Product(4, "抹茶拿鐵", 140, 30),
        Product(5, "紅茶",      60, 80),
    };
}

void Inventory::addProduct(const Product& p) {
    products_.push_back(p);
}

Product* Inventory::findById(int id) {
    for (auto& p : products_)
        if (p.getId() == id) return &p;
    return nullptr;
}

void Inventory::displayAll() const {
    cout << "\n--- 庫存清單 ---" << endl;
    for (const auto& p : products_) p.display();
}

void Inventory::checkLowStock(int threshold) const {
    cout << "\n--- 庫存警示（< " << threshold << "）---" << endl;
    for (const auto& p : products_)
        if (p.getStock() < threshold)
            cout << "⚠ " << p.getName() << " 庫存僅剩 " << p.getStock() << endl;
}

void Inventory::sortBySalesDesc() {
    // TODO: v2-extended 實作
}

} // namespace coffee_pos
