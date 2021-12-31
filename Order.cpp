#include "Order.h"


Order::Order(double price_in, int amount_in,bool type_in, bool isLimitin):
    price(price_in), amount(amount_in),type(type_in), is_Limit(isLimitin){}
int Order::get_shares(){
    return amount;
}
double Order::get_price(){
    return price;
}
void Order::modify(Order &a){
    amount = a.amount;
    price = a.price;
}
