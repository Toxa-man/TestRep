#include "dialogwindow.h"
#include "ui_dialogwindow.h"

DialogWindow::DialogWindow(QWidget *parent, Player* _character) :
    QWidget(parent),
    ui(new Ui::DialogWindow),
    mainCharater(_character)
{
    ui->setupUi(this);
    connect(ui->toMapBtn, &QPushButton::clicked, this, &DialogWindow::goToMapSlot);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);
}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::paintEvent(QPaintEvent *event)
{
    ui->heatPointsLbl->setText(QString::number(mainCharater->getHeatPoints()));
    ui->armorLbl->setText(QString::number(mainCharater->getArmorPoints()));
//    DialogWindow::paintEvent()
}

void DialogWindow::goToMenuSlot()
{
    emit stateChanged(GraphicStates::MAIN_MENU);
}

void DialogWindow::goToMapSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP);
}
