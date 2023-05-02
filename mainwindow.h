#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_button_res_clicked();

    void on_button_C_clicked();

    void appendNumber();

    void mathOperation();

private:
    Ui::MainWindow *ui;
    double _currentNumber;
    double _previousNumber;
    void setupConnect();
};

#endif // MAINWINDOW_H
