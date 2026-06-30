#ifndef Mobile_Alert_Observer
#define Mobile_Alert_Observer


#include "notifyAlertObserver.h"


class MobileAlertObserver : public NotificationAlertObserver{
    public:
    int mobileNo;

    MobileAlertObserver(int mobileNo, StockObservable* observer);

    void update(StockObservable* observer) override;
};
#endif