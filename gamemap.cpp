#include "gamemap.h"
#include "ui_gamemap.h"

GameMap::GameMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameMap)
{
    ui->setupUi(this);
    QRegion *region = new QRegion(QRect(10, 1, 20, 20), QRegion::Ellipse);
    ui->point_1_btn->setMask(*region);
    ui->point_2_btn->setMask(*region);
    ui->point_3_btn->setMask(*region);
    connect(ui->point_1_btn, &QPushButton::clicked, this, &GameMap::btn_1_clicked);
    connect(ui->point_2_btn, &QPushButton::clicked, this, &GameMap::btn_2_clicked);
    connect(ui->point_3_btn, &QPushButton::clicked, this, &GameMap::btn_3_clicked);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &GameMap::goTuMenuClicked);
}

GameMap::~GameMap()
{
    delete ui;
}

void GameMap::btn_1_clicked()
{
    emit stateChanged(GraphicStates::DIALOG);
}

void GameMap::btn_2_clicked()
{
    emit stateChanged(GraphicStates::DIALOG);
}

void GameMap::btn_3_clicked()
{
    emit stateChanged(GraphicStates::DIALOG);
}

void GameMap::goTuMenuClicked()
{
    emit stateChanged(GraphicStates::MAIN_MENU);
}
