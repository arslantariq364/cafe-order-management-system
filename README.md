# C++ Queue-Based Cafe Order Management

A console learning project that adds, lists and processes cafe orders using a custom linked-list FIFO queue.

## Implemented
- Order nodes contain item, customer, ID and price.
- Front/rear pointers support adding an order and processing the oldest order.
- Pending orders can be listed from the console menu.

## Run

```bash
git clone https://github.com/arslantariq364/cafe-order-management-system.git
cd cafe-order-management-system
g++ -std=c++17 -Wall -Wextra 'Cafe Management System.cpp' -o cafe
./cafe
```

State exists only in memory. There is no SQL database, inventory synchronization or transaction audit log. Input handling and queue cleanup need more work; no performance or memory-safety benchmark is provided.
