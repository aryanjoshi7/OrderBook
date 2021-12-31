#include<iostream>
#include "Order.h"
#include "Book.h"
#include "Limit.h"
int main(){

    std::cout<<"Hello";
    Book orderbook;
    Order a (199.1,100,true,true);
    Order b (190.0,100,true,true);
    Order c (189.1,100,false,true);
    Order d (188.0,100,false,true);
    orderbook.add_Order(a);
    orderbook.add_Order(b);
    orderbook.add_Order(c);
    orderbook.add_Order(d);
    orderbook.print_Book();
    return 1;
}