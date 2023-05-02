#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupConnect();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_C_clicked()
{
    ui->display->clear();
}

void MainWindow::appendNumber()
{
    QPushButton* button = dynamic_cast<QPushButton*>(sender());
    QString currentText = ui->display->text();
    ui->display->setText(currentText + button->text());
}

void MainWindow::mathOperation()
{
    QPushButton* button = dynamic_cast<QPushButton*>(sender());
    _previousNumber = ui->display->text().toDouble();
    ui->display->setText("");
    button->setChecked(true);
}

void MainWindow::setupConnect()
{
    connect(ui->button_1, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_2, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_3, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_4, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_5, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_6, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_7, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_8, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_9, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_null, SIGNAL(clicked()),this, SLOT(appendNumber()));
    connect(ui->button_mult, SIGNAL(clicked()),this, SLOT(mathOperation()));
    connect(ui->button_plus, SIGNAL(clicked()),this, SLOT(mathOperation()));
    connect(ui->button_divis, SIGNAL(clicked()),this, SLOT(mathOperation()));
    connect(ui->button_minus, SIGNAL(clicked()),this, SLOT(mathOperation()));
}


void MainWindow::on_button_res_clicked()
{
    _currentNumber = ui->display->text().toDouble();
    if(ui->button_plus->isChecked())
    {
        ui->display->setText(QString::number(_currentNumber+_previousNumber));
    }
    else if (ui->button_minus->isChecked())
    {
        ui->display->setText(QString::number(_previousNumber-_currentNumber));
    }
    else if (ui->button_mult->isChecked())
    {
        ui->display->setText(QString::number(_currentNumber*_previousNumber));
    }
    else if (ui->button_divis->isChecked())
    {
        ui->display->setText(QString::number(_previousNumber/_currentNumber));
    }
}


