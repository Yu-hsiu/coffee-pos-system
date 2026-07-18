#pragma once
#include <vector>
#include <string>

// ============================================================
// Order 類別 — v1-oop 啟用
// ============================================================
namespace coffee_pos {

struct OrderItem {
    int         productId;
    std::string productName;
    int         qty;
    double      unitPrice;
};

class Order {
public:
    Order();
    void addItem(int productId, const std::string& name, int qty, double price);
    double getTotal() const;
    void printReceipt() const;

private:
    std::vector<OrderItem> items_;
    double total_;
};

} // namespace coffee_pos
