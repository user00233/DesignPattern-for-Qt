#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "product.h"
#include <QWidget>

namespace Ui {
class ConcreteProductA;
}

class ConcreteProductA : public QWidget , public Product
{
    Q_OBJECT

public:
    explicit ConcreteProductA(QWidget *parent = 0);
    ~ConcreteProductA();

    void doStuff();

    void setParent(QWidget* parent);

private:
    Ui::ConcreteProductA *ui;
};

#endif // CONCRETEPRODUCTA_H
