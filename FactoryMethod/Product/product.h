#ifndef PRODUCT_H
#define PRODUCT_H

class QWidget;
class Product
{
public:
    Product();

    virtual void doStuff() = 0;

    virtual void setParent(QWidget* parent) = 0;
};

#endif // PRODUCT_H
