#include "concreteproducta.h"
#include "ui_concreteproducta.h"
#include <QDebug>

ConcreteProductA::ConcreteProductA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConcreteProductA)
{
    ui->setupUi(this);
}

ConcreteProductA::~ConcreteProductA()
{
    delete ui;
}

void ConcreteProductA::doStuff()
{
    show();
}

void ConcreteProductA::setParent(QWidget* parent)
{
    qDebug() << parent << "1";
    this->setParent(parent);

}
