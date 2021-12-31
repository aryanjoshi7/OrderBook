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
        Limit();
        void add(Order o);
        double get_price();
        void removefront();
        Order* seefront();
};


#endif