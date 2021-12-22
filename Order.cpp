class Order{
    Order(int price_in):price(price_in){}
    Order(int price_in, int amount_in):price(price_in), amount(amount_in){}
    int get_amount(){
        return amount;
    }
    int get_price(){
        return price;
    }
private:
    int amount;
    int price;


};