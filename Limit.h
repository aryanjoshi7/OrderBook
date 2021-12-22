#ifndef LIMIT_H
#define LIMIT_H

#include "Order.h"
#include <list>

class Limit {

    public: 
        std::list<Order> orderlist;
        int price;

        Limit(int price_in);
};


#endif