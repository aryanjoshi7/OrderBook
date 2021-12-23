#ifndef BOOK_H
#define BOOK_H


#include<map>
#include<vector>
#include<unordered_set>
#include "Limit.h"

class Book { 
    public:
        
        std::map< double, Limit> bids;
        std::map< double, Limit> asks;
        std::vector<double> transactions;
        //std::unordered_set<double> prices;


        void add_Order(Order o);

        void execute();







};

#endif