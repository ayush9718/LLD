#include "iphoneObservable.h"
#include <bits/stdc++.h>
#include <algorithm>
#include "../observer/notifyAlertObserver.h"
using namespace std;


IphoneObservable::IphoneObservable(string name){
    this->name = name;
}

void IphoneObservable::add(NotificationAlertObserver* observer){
    observerlist.push_back(observer);
}

void IphoneObservable::remove(NotificationAlertObserver* observer){
        observerlist.erase(
    std::remove(observerlist.begin(),
                observerlist.end(),
                observer),
    observerlist.end());
}

void IphoneObservable::notify(){
    for(auto & observer : observerlist){
        observer->update(this);
    }
}

void IphoneObservable::setStockCount(int newstock){
    bool wasOutOfStock = (stockCount == 0);

    stockCount += newstock;

    if(wasOutOfStock){
        notify();
    }
}

int IphoneObservable::getStockCount(){
    return this->stockCount;
}