#ifndef Stock_Observable
#define Stock_Observable

#include<string>

class NotificationAlertObserver; //forward declaration

class StockObservable{
    public:
    std::string name;
    virtual void add(NotificationAlertObserver* observer) =0;
    virtual void remove (NotificationAlertObserver* observer) = 0;
    virtual void notify() = 0;
    virtual void setStockCount(int newstock) = 0;
    virtual int getStockCount() = 0;

};

#endif 