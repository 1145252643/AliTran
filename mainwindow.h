#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "aliapi.h"
#include "readwritefile.h"
#include "apioption.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    apioption *apioption;
private slots:
    void on_apioption_triggered();

    void on_tranButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
