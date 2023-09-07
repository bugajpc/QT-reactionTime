#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QTimer>
#include <QList>
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
    void on_pushButton_clicked();
    void showInfo();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QElapsedTimer myTimer;
    QList<int> scores;
};
#endif // MAINWINDOW_H
