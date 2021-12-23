#ifndef ORDER_H
#define ORDER_H

#include "Limit.h"

class Order {

    public:
        int amount;
        int price;
        bool type;
        // Limit *parent;
        Order(int price_in, int amount_in,bool type_in);

        int get_shares();
        int get_price();
};
#endif