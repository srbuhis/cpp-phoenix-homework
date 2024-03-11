#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

QWidget *widget = new QWidget(this);
widget->setStyleSheet("background-color: grey;");
QVBoxLayout *layout = new QVBoxLayout(widget);

label = new QLabel(this);
label->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
label->setStyleSheet("QLabel {color: while; font:  700 Ubuntu Condensed; font-size: 56px;}");
layout->addWidget(label);

setCentralWidget(widget);

DateTime = new QTimer(this);
connect(DateTime, &QTimer::timeout, this, &MainWindow::QUpdate);
DateTime->start(1000);
DateTimeFormat = "hh:mm:ss AP";

button = new QPushButton("AM/PM", this);

button->setGeometry(0, 0, 80, 50);
button->setStyleSheet("QPushButton {background-color: grey; color: white; font-size: 14px; }"
                            "QPushButton:hover {background-color: blue; color: black}");

layout->addWidget(button, 0, Qt::AlignBottom | Qt::AlignLeft);
connect(button, &QPushButton::clicked, this, &MainWindow::changeTimeFormat);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime() {
    label->clear();
    label->setText(QDateTime::currentDateTime().toString(DateTimeFormat));
    label->setAlignment(Qt::AlignCenter);
}

void MainWindow::QUpdate() {
    updateTime();
}

void MainWindow::changeTimeFormat() {
    if(DateTimeFormat == "hh:mm:ss") {
        DateTimeFormat = "hh:mm:ss AP";
    } else {
        DateTimeFormat = "hh:mm:ss";
    }
    updateTime();
}
