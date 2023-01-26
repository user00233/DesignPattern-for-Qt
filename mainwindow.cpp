#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "FactoryMethod/factoryclient.h"
#include "FactoryMethod/Factory/conretefactorya.h"
#include "FactoryMethod/Factory/conretefactoryb.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    factoryClient = new FactoryClient(new ConreteFactoryA);

    factoryClient->showButton();
}

void MainWindow::on_pushButton_2_clicked()
{
    factoryClient = new FactoryClient(new ConreteFactoryB);

    factoryClient->showButton();
}
