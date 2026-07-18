// ============================================================
// coffee-pos-system | v0-procedural
// 對應課程：Introduction / Selection & Repetition / Arrays
// ============================================================
#include <iostream>
#include <string>
using namespace std;

// --- 常數定義 ---
const int MAX_ITEMS = 10;
const int MAX_ORDERS = 50;

// --- 菜單資料（陣列版，v0 程序式）---
string itemName[MAX_ITEMS]  = {"拿鐵", "美式", "卡布奇諾", "抹茶拿鐵", "紅茶"};
double itemPrice[MAX_ITEMS] = {120,     90,    130,        140,         60};
int    itemStock[MAX_ITEMS] = {50,      50,    30,         30,          80};
int    itemCount = 5;  // 目前品項數量

// --- 函式宣告 ---
void showMenu();
void processOrder();
void showInventory();
void restockItem();
void showSalesReport();

int main() {
    int choice = 0;
    while (true) {
        cout << "\n========== ☕ 咖啡廳 POS 系統 ==========" << endl;
        cout << "1. 點餐結帳" << endl;
        cout << "2. 查看庫存" << endl;
        cout << "3. 進貨補庫存" << endl;
        cout << "4. 銷售報表" << endl;
        cout << "0. 離開" << endl;
        cout << "請選擇: ";
        cin >> choice;

        switch (choice) {
            case 1: processOrder();   break;
            case 2: showInventory();  break;
            case 3: restockItem();    break;
            case 4: showSalesReport(); break;
            case 0:
                cout << "感謝使用，再見！" << endl;
                return 0;
            default:
                cout << "無效選項，請重新輸入。" << endl;
        }
    }
    return 0;
}

void showMenu() {
    cout << "\n--- 今日菜單 ---" << endl;
    for (int i = 0; i < itemCount; i++) {
        cout << i + 1 << ". " << itemName[i]
             << " | NT$" << itemPrice[i]
             << " | 庫存: " << itemStock[i] << endl;
    }
}

void processOrder() {
    showMenu();
    int idx, qty;
    cout << "選擇品項編號 (1-" << itemCount << "): ";
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= itemCount) { cout << "無效品項" << endl; return; }
    cout << "數量: ";
    cin >> qty;
    if (qty > itemStock[idx]) {
        cout << "庫存不足！目前庫存: " << itemStock[idx] << endl;
        return;
    }
    itemStock[idx] -= qty;
    double total = itemPrice[idx] * qty;
    cout << "訂單完成！品項: " << itemName[idx]
         << " x" << qty << " | 合計: NT$" << total << endl;
}

void showInventory() {
    cout << "\n--- 庫存狀況 ---" << endl;
    for (int i = 0; i < itemCount; i++) {
        cout << itemName[i] << ": " << itemStock[i] << " 杯";
        if (itemStock[i] < 10) cout << " ⚠ 庫存偏低";
        cout << endl;
    }
}

void restockItem() {
    showInventory();
    int idx, qty;
    cout << "選擇補貨品項 (1-" << itemCount << "): ";
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= itemCount) { cout << "無效品項" << endl; return; }
    cout << "補貨數量: ";
    cin >> qty;
    itemStock[idx] += qty;
    cout << itemName[idx] << " 補貨完成，目前庫存: " << itemStock[idx] << endl;
}

void showSalesReport() {
    // TODO: v2-extended 階段從 orders.log 讀取完整報表
    cout << "\n--- 銷售報表（v2 實作中）---" << endl;
    cout << "目前庫存快照：" << endl;
    showInventory();
}
