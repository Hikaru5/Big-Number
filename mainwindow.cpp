#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int val = 0;
int temp;
QString op;
QTextEdit *text = new QTextEdit();

void MainWindow::on_pushButton_2_clicked()
{
    val = val * 10 + 1;
    *text->setText(val);
}

void MainWindow::on_pushButton_7_clicked()
{
     val = val * 10 + 2;
     *text->setText(val);
}

void MainWindow::on_pushButton_9_clicked()
{
    val = val * 10 + 3;
    *text->setText(val);
}

void MainWindow::on_pushButton_8_clicked()
{
    val = val * 10 + 4;
    *text->setText(val);
}

void MainWindow::on_pushButton_12_clicked()
{
    val = val * 10 + 5;
    *text->setText(val);
}

void MainWindow::on_pushButton_11_clicked()
{
    val = val * 10 + 6;
    *text->setText(val);
}

void MainWindow::on_pushButton_16_clicked()
{
    val = val * 10 + 7;
    *text->setText(val);
}

void MainWindow::on_pushButton_15_clicked()
{
    val = val * 10 + 8;
    *text->setText(val);
}

void MainWindow::on_pushButton_14_clicked()
{
    val = val * 10 + 9;
    *text->setText(val);
}

void MainWindow::on_pushButton_13_clicked()
{
    val = val * 10;
    *text->setText(val);
}

void MainWindow::on_pushButton_10_clicked()
{
    temp = val;
    val = 0;
    op = "+";
    *text->setText("");
}

void MainWindow::on_pushButton_6_clicked()
{
    temp = val;
    val = 0;
    op = "-";
    *text->setText("");
}

void MainWindow::on_pushButton_4_clicked()
{
    temp = val;
    val = 0;
    op = "*";
    *text->setText("");
}

void MainWindow::on_pushButton_5_clicked()
{
    temp = val;
    val = 0;
    op = "/";
    *text->setText("");
}

void MainWindow::on_pushButton_3_clicked()
{
    temp = val;
    val = 0;
    op = "%";
    *text->setText("");
}

void MainWindow::on_pushButton_clicked()
{
    if(op=="+")
        val + temp;
    else if(op=="-")
        val - temp;
    else if(op=="*")
        val * temp;
    else if(op=="/")
        val / temp;
    else if(op=="%")
        val % temp;
    *text->setText(val);
    val = 0;
    temp = 0;
    op = "";
}
