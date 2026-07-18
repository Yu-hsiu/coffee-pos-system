# 學習筆記 — 課程進度對應

## 對應課程
[台大孔令傑「程式設計 C++」完整課程](https://www.youtube.com/playlist?list=PLMHSr8fseBzUvwjKtR6pX0Vv9Q9H-V3lY)

---

## v0-procedural 對應講次

| Commit | 對應影片章節 | 實作內容 |
|---|---|---|
| init | 01. Introduction | 建立 main.cpp，cin/cout 選單 |
| feat: order | 02. Selection & Repetition | switch-case 點餐、for 迴圈菜單 |
| feat: inventory | 03. Variables & Arrays | 陣列儲存菜單與庫存 |

## v1-oop 對應講次

| Commit | 對應影片章節 | 實作內容 |
|---|---|---|
| refactor: Product class | 11. Classes | 封裝屬性、建構子/解構子 |
| refactor: Order class | 11. Classes | addItem、getTotal 方法 |
| refactor: Inventory class | 11. Classes | findById、checkLowStock |

## v2-extended（計畫中）

- 導入 `vector` 取代固定陣列
- 加入 file I/O：從 `data/menu.csv` 讀取，寫入 `data/orders.log`
- 熱銷品項統計與排序
