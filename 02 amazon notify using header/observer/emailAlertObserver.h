#ifndef Email_Alert_Observer
#define Email_Alert_Observer

#include "notifyAlertObserver.h"
#include<string>


class EmailAlertObserver : public NotificationAlertObserver{
    public:
    std::string emailid;

    EmailAlertObserver(std::string eamild, StockObservable* observer);

    void update(StockObservable* observer) override;
};
#endif