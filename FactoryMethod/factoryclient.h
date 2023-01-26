#ifndef FACTORYCLIENT_H
#define FACTORYCLIENT_H

class Product;
class Factory;
class FactoryClient
{
public:
    FactoryClient(Factory *concretefactory);

    void showButton();

private:
//    Factory* factory;
    Product* product;
};

#endif // FACTORYCLIENT_H
