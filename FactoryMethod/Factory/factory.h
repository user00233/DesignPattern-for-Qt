#ifndef FACTORY_H
#define FACTORY_H

class Product;
class QWidget;
class Factory
{
public:
    Factory();

    virtual Product* createProduct() = 0;
};

#endif // FACTORY_H
