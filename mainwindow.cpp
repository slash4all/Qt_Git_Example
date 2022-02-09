#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(0,0, 190, 143);
//    img = new QPixmap(":/ass_img/res/nice_ass.jpg");
    scene->addPixmap(QPixmap(":/ass_img/res/nice_ass.jpg"));

    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

MainWindow::~MainWindow()
{
   delete scene;
   delete ui;
}



void MainWindow::on_kick_btn_clicked()
{
        ui->kicked_lbl->setText(ui->kicked_lbl->text()+" ouch!");
}

void MainWindow::on_kick_btn_toggled(bool checked)
{
    if (checked)
        scene->addPixmap(QPixmap(":/ass_img/res/bad_ass.jpg"));
    else
        scene->addPixmap(QPixmap(":/ass_img/res/nice_ass.jpg"));

}

