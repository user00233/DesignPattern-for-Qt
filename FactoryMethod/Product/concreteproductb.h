#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "product.h"
#include <QWidget>

namespace Ui {
class ConcreteProductB;
}

class ConcreteProductB : public QWidget , public Product
{
    Q_OBJECT

public:
    explicit ConcreteProductB(QWidget *parent = 0);
    ~ConcreteProductB();

    void doStuff();

    void setParent(QWidget* parent);

private:
    Ui::ConcreteProductB *ui;
};

#endif // CONCRETEPRODUCTB_H
