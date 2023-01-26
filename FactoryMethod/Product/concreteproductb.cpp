#include "concreteproductb.h"
#include "ui_concreteproductb.h"

ConcreteProductB::ConcreteProductB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConcreteProductB)
{
    ui->setupUi(this);
}

ConcreteProductB::~ConcreteProductB()
{
    delete ui;
}

void ConcreteProductB::doStuff()
{
    show();
}

void ConcreteProductB::setParent(QWidget* parent)
{
    this->setParent(parent);
}
