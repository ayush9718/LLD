export module observable;

import <iostream>;
import <vector>;
import <string>;
import <algorithm>;

import observer;


// ==========================
// Observable Interface
// ==========================

export class StockObservable {
public:

    std::string name;

    virtual void add(NotificationAlertObserver* observer) = 0;
    virtual void remove(NotificationAlertObserver* observer) = 0;
    virtual void notify() = 0;
    virtual void setStockCount(int newStock) = 0;
    virtual int getStockCount() = 0;

    virtual ~StockObservable() = default;
};


// ==========================
// Iphone Observable
// ==========================

export class IphoneObservable :
    public StockObservable {

private:
    std::vector<NotificationAlertObserver*> observerList;
    int stockCount = 0;

public:

    IphoneObservable(std::string name) {
        this->name = name;
    }

    void add(NotificationAlertObserver* observer) override {
        observerList.push_back(observer);
    }

    void remove(NotificationAlertObserver* observer) override {

        observerList.erase(
            std::remove(observerList.begin(),
                        observerList.end(),
                        observer),
            observerList.end());
    }

    void notify() override {

        for (auto observer : observerList) {
            observer->update(this);
        }
    }

    void setStockCount(int newStock) override {

        bool wasOutOfStock = (stockCount == 0);

        stockCount += newStock;

        if (wasOutOfStock) {
            notify();
        }
    }

    int getStockCount() override {
        return stockCount;
    }
};


// // =====================================
// // Observer Method Implementations
// // =====================================

// void MobileAlertObserver::update(
//         StockObservable* observable) {

//     std::cout
//         << "SMS sent to "
//         << mobileNo
//         << " for "
//         << observable->name
//         << '\n';
// }

// void EmailAlertObserver::update(
//         StockObservable* observable) {

//     std::cout
//         << "Email sent to "
//         << emailId
//         << " for "
//         << observable->name
//         << '\n';
// }