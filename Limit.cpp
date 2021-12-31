#include "Limit.h"
#include "Order.h"

Limit::Limit(double price_in) : 
    price(price_in), size(0) {}

Limit::Limit() : 
    price(100), size(100) {}

void Limit::add(Order o) {
    orderlist.push_back(o);
    size++;
}

double Limit::get_price()  {
    return price;
}

void Limit::removefront() {
    orderlist.pop_front();
    size--;
}

Order* Limit::seefront(){
    return &(orderlist.front());
}