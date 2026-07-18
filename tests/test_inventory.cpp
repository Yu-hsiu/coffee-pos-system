#include "coffee_pos/inventory.hpp"
#include <cassert>
#include <iostream>
using namespace std;
using namespace coffee_pos;

void test_findById_found() {
    Inventory inv;
    inv.loadDefaults();
    Product* p = inv.findById(1);
    assert(p != nullptr);
    assert(p->getName() == "拿鐵");
    cout << "[PASS] test_findById_found" << endl;
}

void test_findById_not_found() {
    Inventory inv;
    inv.loadDefaults();
    Product* p = inv.findById(999);
    assert(p == nullptr);
    cout << "[PASS] test_findById_not_found" << endl;
}

int main() {
    test_findById_found();
    test_findById_not_found();
    cout << "\n所有 Inventory 測試通過！" << endl;
    return 0;
}
