#ifndef Notification_Alert_Observer
#define Notification_Alert_Observer

class StockObservable;  // forward declaration 

class NotificationAlertObserver {
public:
    StockObservable* observer;
    virtual void update(StockObservable* observer) = 0;

    virtual ~NotificationAlertObserver() {}
};

#endif