#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

   delete ui;
}



void MainWindow::on_kick_btn_clicked()
{
        ui->kicked_lbl->setText(ui->kicked_lbl->text()+" ouch!");
}

