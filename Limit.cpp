#include "Limit.h"

Limit::Limit(double price_in): price(price_in), size(0){}

void Limit::add(Order o){
    orderlist.push_back(o);
    size++;
}