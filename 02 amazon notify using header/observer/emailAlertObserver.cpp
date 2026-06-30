#include "emailAlertObserver.h"
#include "../observable/stockObservable.h"
#include <bits/stdc++.h>

using namespace std;

EmailAlertObserver::EmailAlertObserver(string emailid, StockObservable* observer){
    this->emailid = emailid;
    this->observer = observer;
}

void EmailAlertObserver::update(StockObservable* observer){
    cout<<"sms sent to the no."<<emailid<<"for observer "<<observer->name<<endl;
}