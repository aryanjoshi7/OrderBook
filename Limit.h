#ifndef LIMIT_H
#define LIMIT_H

#include "Order.h"
#include <list>
class Limit {

    public: 
        std::list<Order> orderlist;
        double price;
        int size;
        Limit(double price_in);

        void add(Order o);
};


#endif