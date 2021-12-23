#include "Order.h"
#include "Book.h"
#include "Limit.h"
#include<algorithm>
void Book::add_Order(Order o){
    if (o.type){
        if (asks.find(o.get_price()) == asks.end()){
            Limit newlimit (o.get_price());
            asks[o.get_price()] = newlimit;
        }
        asks[o.get_price()].add(o);

    }
    else{
        if (bids.find(o.get_price()) == bids.end()){
            Limit newlimit (o.get_price());
            bids[o.get_price()] = newlimit;
        }
        bids[o.get_price()].add(o);

    }
 }

void Book::execute(){
    // auto lowestask = asks.begin();
    // auto highestbid = bids.rbegin();
    // if (lowestask->first>highestbid->first)
    //     return;
    // transactions.push_back(lowestask->first);

    // int counter = 0;
    // auto askorders = *lowestask.orderlist.begin()
    // int maxlen = std::max(lowestask->second.size, highestbid->second.size);
    // int quantity = 0;
    // while(counter<maxlen){
    //     if (!lowestask || !highestbid)
    //         break
        

    // }
    


    
return;
}
