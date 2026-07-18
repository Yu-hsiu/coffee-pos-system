#pragma once
#include <string>

// ============================================================
// Product 類別 — v1-oop 啟用
// 對應課程：Classes 單元
// ============================================================
namespace coffee_pos {

class Product {
public:
    // 建構子
    Product(int id, const std::string& name, double price, int stock);

    // Getters
    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;

    // 庫存操作
    bool deduct(int qty);    // 銷售扣庫存
    void restock(int qty);   // 進貨增加庫存

    void display() const;

private:
    int         id_;
    std::string name_;
    double      price_;
    int         stock_;
};

} // namespace coffee_pos
