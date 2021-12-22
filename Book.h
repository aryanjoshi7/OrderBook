#include<map>
#include "Limit.h"

class Book { 
    public:
        
        std::map< int, Limit> bids;
        std::map< int, Limit> asks;

        Book();

        void add_Order(Order o);

        void execute();

        





};