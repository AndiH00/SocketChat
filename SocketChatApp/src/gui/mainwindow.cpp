#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
#ifdef BUILD_ETH_CLIENT
    ui->menuSocket_Chat_Application->setTitle("ETH CLIENT");
    this->setWindowTitle("ETH CLIENT APP");
#elif BUILD_ETH_SERVER
    ui->menuSocket_Chat_Application->setTitle("ETH SERVER");
    this->setWindowTitle("ETH SERVER APP");
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

