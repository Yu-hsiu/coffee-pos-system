#include "coffee_pos/product.hpp"
#include <cassert>
#include <iostream>
using namespace std;
using namespace coffee_pos;

void test_deduct_success() {
    Product p(1, "拿鐵", 120, 10);
    bool result = p.deduct(3);
    assert(result == true);
    assert(p.getStock() == 7);
    cout << "[PASS] test_deduct_success" << endl;
}

void test_deduct_insufficient() {
    Product p(1, "拿鐵", 120, 2);
    bool result = p.deduct(5);
    assert(result == false);
    assert(p.getStock() == 2);
    cout << "[PASS] test_deduct_insufficient" << endl;
}

void test_restock() {
    Product p(1, "拿鐵", 120, 10);
    p.restock(20);
    assert(p.getStock() == 30);
    cout << "[PASS] test_restock" << endl;
}

int main() {
    test_deduct_success();
    test_deduct_insufficient();
    test_restock();
    cout << "\n所有 Product 測試通過！" << endl;
    return 0;
}
