#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "eth/eth_ipc_types.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    t_SocketConnector m_connector;
};
#endif // MAINWINDOW_H
