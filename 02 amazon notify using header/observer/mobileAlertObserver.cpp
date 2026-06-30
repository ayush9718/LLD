#include "mobileAlertObserver.h"
#include "../observable/stockObservable.h"
#include <bits/stdc++.h>

using namespace std;

MobileAlertObserver::MobileAlertObserver(int mobileNo, StockObservable* observer){
    this->mobileNo = mobileNo;
    this->observer = observer;
}

void MobileAlertObserver::update(StockObservable* observer){
    cout<<"sms sent to the no."<<mobileNo<<"for observer "<<observer->name<<endl;
}