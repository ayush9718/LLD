#ifndef IPHONE_OBSERVABLE_H
#define IPHONE_OBSERVABLE_H

#include <vector>
#include <string>
#include "stockObservable.h"

using namespace std;

class IphoneObservable : public StockObservable {

public:
    //this class knows about NotificationAlertObserver because of the StockObservable class have forward declaration it only knows the name not its complete architecture
    vector<NotificationAlertObserver*> observerlist;

    int stockCount = 0;

    IphoneObservable(std::string name);

    void add(NotificationAlertObserver* observer) override;
    void remove(NotificationAlertObserver* observer) override;
    void notify() override;
    void setStockCount(int newstock) override;
    int getStockCount() override;
};

#endif