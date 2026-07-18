#pragma once
#include "coffee_pos/product.hpp"
#include <vector>

// ============================================================
// Inventory 類別 — v1-oop 啟用
// ============================================================
namespace coffee_pos {

class Inventory {
public:
    Inventory();
    void loadDefaults();                // 載入預設菜單
    void addProduct(const Product& p);
    Product* findById(int id);          // 搜尋品項
    void displayAll() const;            // 列出所有品項
    void checkLowStock(int threshold = 10) const;
    void sortBySalesDesc();             // 熱銷排序（v2 擴充）

private:
    std::vector<Product> products_;
};

} // namespace coffee_pos
