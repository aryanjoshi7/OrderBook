#include "Order.h"


Order::Order(int price_in, int amount_in):price(price_in), amount(amount_in){}
int Order::get_amount(){
    return amount;
}
int Order::get_price(){
    return price;
}
