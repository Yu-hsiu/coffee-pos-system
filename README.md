# ☕ 咖啡廳 POS 進銷存系統

> 台大孔令傑「程式設計 C++」課程實作專案  
> 從程序式 C++ 到物件導向的漸進式演進

## 專案簡介

本專案模擬一間咖啡廳的日常營運，包含商品管理、點餐銷售、庫存扣減與報表統計，  
對應台大資管系「程式設計（C++）」課程的學習脈絡。

## 課程對應

| 課程單元 | 對應模組 | 實作重點 |
|---|---|---|
| Introduction / 基本語法 | POS 主選單 | cin/cout、if/while 控制點餐流程 |
| Selection & Repetition | 會員折扣、批次進貨 | switch-case 折扣判斷、for/while 迴圈 |
| Digital Systems | 商品條碼工具 | 位元運算模擬簡易條碼編碼 |
| Variables & Arrays | 菜單、庫存陣列 | 一維/二維陣列儲存品項、排序熱銷商品 |
| Classes（OOP） | Product / Order / Inventory | 封裝屬性與方法，建構子/解構子 |

## 版本演進

| 分支 / Tag | 說明 |
|---|---|
| `v0-procedural` | 純陣列＋函式，單一 main.cpp，對應課程前半段 |
| `v1-oop` | 拆分成 Product / Order / Inventory 三個 class |
| `v2-extended` | 導入 vector + 檔案讀寫，資料持久化至 data/ |

## 資料夾結構

```
coffee-pos-system/
├── README.md
├── LICENSE
├── .gitignore
├── CMakeLists.txt
├── Makefile
├── include/
│   └── coffee_pos/
│       ├── product.hpp
│       ├── order.hpp
│       └── inventory.hpp
├── src/
│   ├── main.cpp
│   ├── product.cpp
│   ├── order.cpp
│   └── inventory.cpp
├── data/
│   ├── menu.csv
│   └── orders.log
├── tests/
│   ├── test_product.cpp
│   └── test_inventory.cpp
├── docs/
│   └── learning_notes.md
└── build/   ← 由 CMake 自動產生，已加入 .gitignore
```

## 編譯與執行

### 使用 CMake（v1-oop 以後推薦）
```bash
mkdir build && cd build
cmake ..
make
./coffee_pos
```

### 使用 Makefile（v0-procedural 適用）
```bash
make
./coffee_pos
```

## 開發環境
- C++17
- GCC / Clang
- CMake 3.15+

## 學習資源
- [台大孔令傑「程式設計 C++」完整課程 (YouTube)](https://www.youtube.com/playlist?list=PLMHSr8fseBzUvwjKtR6pX0Vv9Q9H-V3lY)
