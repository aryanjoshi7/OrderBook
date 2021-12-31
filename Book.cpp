#include "Order.h"
#include "Book.h"
#include "Limit.h"
#include <map>
#include<algorithm>
#include<iostream>


void Book::add_Order(Order &o){
    if (!o.is_Limit)
        return executeMarketOrder(o);
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

void Book::print_Book(){
    std::cout<<"Asks"<<"\n";
    for( auto it = asks.rbegin(); it != asks.rend(); ++it){
        std::cout<<"At"<<" "<<it->second.price<<" ";
        for ( const auto &orders : it->second.orderlist ){
            std::cout<<orders.amount<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"Bids"<<"\n";
    for( auto it = bids.rbegin(); it != bids.rend(); ++it){
        std::cout<<"At"<<" "<<it->second.price<<" ";
        for ( const auto &orders : it->second.orderlist ){
            std::cout<<orders.amount<<" ";
        }
        std::cout<<"\n";
    }

}
void Book::executeMarketOrder(Order &o){
    if (o.type){
        int quantity = o.amount;
        for( auto it = asks.begin(); it != asks.end(); ++it){
            if (!(it->second.size))  continue;
            bool fulfilled = false;
            while(it->second.size) {
                Order *currO = it->second.seefront();
                if (quantity<currO->amount){
                        currO->amount -=quantity;
                        print_Transaction(currO->price, quantity);
                        return;
                }
                print_Transaction(currO->price, quantity);
                it->second.removefront();
                }   
            }
    }
    else{
        int quantity = o.amount;
        for( auto it = bids.rbegin(); it != bids.rend(); ++it){
            if (!(it->second.size))  continue;
            bool fulfilled = false;
            while(it->second.size) {
                Order *currO = it->second.seefront();
                if (quantity<currO->amount){
                        currO->amount -=quantity;
                        print_Transaction(currO->price, quantity);
                        return;
                }
                print_Transaction(currO->price, quantity);
                it->second.removefront();
                
                }  
            }
        }
    }

void Book::print_Transaction(const double &price, const int &amount){
    std::cout<<amount<<" for "<<price<<"\n";
}

