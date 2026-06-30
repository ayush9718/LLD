#include<bits/stdc++.h>
#include "observable/iphoneObservable.h"
#include "observable/stockObservable.h"
#include "observer/emailAlertObserver.h"
#include "observer/mobileAlertObserver.h"
#include "observer/notifyAlertObserver.h"


using namespace std;


int main(){
    IphoneObservable * iphone = new IphoneObservable("Iphone");
    MobileAlertObserver * observer1 = new MobileAlertObserver(124233,iphone);
    MobileAlertObserver * observer2 = new MobileAlertObserver(1242233,iphone);
    EmailAlertObserver * observer3 = new EmailAlertObserver("aiuyaaia", iphone);

    iphone->observerlist.push_back(observer1);
    iphone->observerlist.push_back(observer2);
    iphone->observerlist.push_back(observer3);


    iphone->setStockCount(10);

    return 0;
}