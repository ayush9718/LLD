export module observer;

import <iostream>;
import <string>;

export class StockObservable;

// ==========================
// Observer Interface
// ==========================

export class NotificationAlertObserver {
public:
    virtual void update(StockObservable* observable) = 0;

    virtual ~NotificationAlertObserver() = default;
};

// ==========================
// Mobile Observer
// ==========================

export class MobileAlertObserver :
    public NotificationAlertObserver {

private:
    int mobileNo;

public:
    MobileAlertObserver(int mobileNo)
        : mobileNo(mobileNo) {}

    void update(StockObservable* observable) override;
};

// ==========================
// Email Observer
// ==========================

export class EmailAlertObserver :
    public NotificationAlertObserver {

private:
    std::string emailId;

public:
    EmailAlertObserver(std::string emailId)
        : emailId(emailId) {}

    void update(StockObservable* observable) override;
};