#include "Order.h"


Order::Order(int price_in, int amount_in,bool type_in):
    price(price_in), amount(amount_in),type(type_in){}
int Order::get_shares(){
    return amount;
}
int Order::get_price(){
    return price;
}
