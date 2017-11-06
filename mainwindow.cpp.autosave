#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    obj = new TestClass;
    connect(ui->btn, SIGNAL(clicked(bool)), this, SLOT(btnClicked()) );
    connect(ui->btn, SIGNAL(clicked(bool)), obj, SLOT(recieved()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnClicked()
{
    counter++;
    ui->label->setText(QString::number(counter));
}
