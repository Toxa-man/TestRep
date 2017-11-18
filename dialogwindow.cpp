#include "dialogwindow.h"
#include "ui_dialogwindow.h"

DialogWindow::DialogWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogWindow)
{
    ui->setupUi(this);
    connect(ui->toMapBtn, &QPushButton::clicked, this, &DialogWindow::goToMapSlot);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);
}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::goToMenuSlot()
{
    emit stateChanged(GraphicStates::MAIN_MENU);
}

void DialogWindow::goToMapSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP);
}
