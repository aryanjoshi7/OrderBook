#ifndef ORDER_H
#define ORDER_H


class Order {

    public:
        int amount;
        int price;
        bool type;
        bool is_Limit;
        // Limit *parent;
        Order(double price_in, int amount_in,bool type_in, bool isLimitin);

        int get_shares();
        double get_price();
        void modify(Order &o);
};
#endif