#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "QPushButton"
#include "QMessageBox"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(button_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear(){
    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
    symbol = "X";
}

void MainWindow::button_clicked() {
    QPushButton *button = dynamic_cast<QPushButton *>(sender());
    QString str = button->objectName();
    if (button->text().isEmpty()) {
        button->setText(symbol);

        if (symbol == "X")
            symbol = "O";
        else
            symbol = "X";
    }

    if ((ui->pushButton_1->text() == ui->pushButton_2->text()) && (ui->pushButton_2->text() == ui->pushButton_3->text()) && ((ui->pushButton_1->text() == "X") || (ui->pushButton_1->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_1->text());
            clear();
    }
    else if ((ui->pushButton_4->text() == ui->pushButton_5->text()) && (ui->pushButton_5->text() == ui->pushButton_6->text()) && ((ui->pushButton_4->text() == "X") || (ui->pushButton_4->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_4->text());
            clear();
    }
    else if ((ui->pushButton_7->text() == ui->pushButton_8->text()) && (ui->pushButton_8->text() == ui->pushButton_9->text()) && ((ui->pushButton_7->text() == "X") || (ui->pushButton_7->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_7->text());
            clear();
    }
    else if ((ui->pushButton_1->text() == ui->pushButton_4->text()) && (ui->pushButton_4->text() == ui->pushButton_7->text()) && ((ui->pushButton_1->text() == "X") || (ui->pushButton_1->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_1->text());
            clear();
    }
    else if ((ui->pushButton_2->text() == ui->pushButton_5->text()) && (ui->pushButton_5->text() == ui->pushButton_8->text()) && ((ui->pushButton_2->text() == "X") || (ui->pushButton_2->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_2->text());
            clear();
    }
    else if ((ui->pushButton_3->text() == ui->pushButton_6->text()) && (ui->pushButton_6->text() == ui->pushButton_9->text()) && ((ui->pushButton_3->text() == "X") || (ui->pushButton_3->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_3->text());
            clear();
    }
    else if ((ui->pushButton_1->text() == ui->pushButton_5->text()) && (ui->pushButton_5->text() == ui->pushButton_9->text()) && ((ui->pushButton_1->text() == "X") || (ui->pushButton_1->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_1->text());
            clear();
    }
    else if ((ui->pushButton_3->text() == ui->pushButton_5->text()) && (ui->pushButton_5->text() == ui->pushButton_7->text()) && ((ui->pushButton_3->text() == "X") || (ui->pushButton_3->text() == "O"))){
            QMessageBox::information(this, "information", "vicotory of " + ui->pushButton_3->text());
            clear();
    }

    if ((ui->pushButton_1->text() != "") && (ui->pushButton_2->text() != "") && (ui->pushButton_3->text() != "") && (ui->pushButton_4->text() != "") && (ui->pushButton_5->text() != "") && (ui->pushButton_6->text() != "") && (ui->pushButton_7->text() != "") && (ui->pushButton_8->text() != "") && (ui->pushButton_9->text() != "")) {
        QMessageBox::information(this, "RESULT", "GAME OVER");
        clear();
    }
}
