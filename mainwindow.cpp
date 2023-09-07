#include "mainwindow.h"
#include "./ui_mainwindow.h"
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


void MainWindow::on_pushButton_clicked()
{
    int elapsedTime = myTimer.elapsed();
    myTimer.start();
    QMessageBox::information(this, "Clicked", "Time: " + QString::number(elapsedTime), QMessageBox::Ok, QMessageBox::Cancel);
    ui->listWidget->addItem(QString::number(elapsedTime));

    scores.append(elapsedTime);
    int sum = 0;
    for(int i : scores)
    {
        sum += i;
    }
    float avg = sum / scores.size();
    ui->label_2->setText(QString::number(avg));
}

void MainWindow::showInfo()
{
    ui->pushButton->setText("Click");
    myTimer.start();
    ui->frame->setStyleSheet("background-color: green");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->frame->setStyleSheet("background-color: red");
    ui->pushButton->setText("");
    QTimer::singleShot(2000, this, &MainWindow::showInfo);


}

