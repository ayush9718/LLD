import observer;
import observable;

int main() {

    IphoneObservable* iphone =
        new IphoneObservable("Iphone 16");

    NotificationAlertObserver* observer1 =
        new MobileAlertObserver(123456789);

    NotificationAlertObserver* observer2 =
        new MobileAlertObserver(987654321);

    NotificationAlertObserver* observer3 =
        new EmailAlertObserver("ayush@gmail.com");


    iphone->add(observer1);
    iphone->add(observer2);
    iphone->add(observer3);


    iphone->setStockCount(10);

    delete observer1;
    delete observer2;
    delete observer3;
    delete iphone;

    return 0;
}