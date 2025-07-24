#include<iostream>
using namespace std;
class OrderBill
{
protected:
    int orderId;
    double totalBill;
public:
    OrderBill (int id, double bill)
    {
        orderId = id;
        totalBill = bill + (bill*0.05);
        cout<<"Processing Order: "<<orderId<<endl;
        cout<<"Total Bill with 5% VAT : "<<totalBill<<endl;
    }
};
class OnlineOrderBill : public OrderBill
{
    string deliveryAddress;
    string promo;
public:
    void promoPrice(string p)
    {
        if(p=="FIRST50")
        {
            totalBill-=50;
            cout<<"Applying "<<p<<"Promo\n";
            cout<<"Total Bill after promo: "<<totalBill<<endl;
        }
        else if(p=="MAD100")
        {
            totalBill-=100;
            cout<<"Applying "<<p<<"Promo\n";
            cout<<"Total Bill after promo: "<<totalBill<<endl;
        }
    }
    OnlineOrderBill(string address, int id, double bill, string promo):OrderBill(id, bill)
    {
        deliveryAddress = address;
        promoPrice(promo);
        cout<<"Delivery address: "<<deliveryAddress<<endl;
    }
};
int main()
{
    OnlineOrderBill ord1("Mirpur", 1001, 600, "MAD100");
    OrderBill ord2(1002, 500);
    OnlineOrderBill ord3("Kuratoli", 1003, 400, "");
    return 0;
}
