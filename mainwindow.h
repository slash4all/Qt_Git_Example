#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_kick_btn_clicked();

    void on_kick_btn_toggled(bool checked);

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;

    QPixmap *img;

};
#endif // MAINWINDOW_H
