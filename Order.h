#ifndef ORDER_H
#define ORDER_H

#include "Limit.h"

class Order {

    public:
        Order *next;
        Order *prev;
        int amount;
        int price;
        Limit *parent;
        Order(int price_in, int amount_in);

        int get_amount();
        int get_price();
};
#endif