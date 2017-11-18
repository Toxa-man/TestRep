#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    connect(ui->newGameBtn, &QPushButton::clicked, this, &MainMenu::startNewGameSlot);
    connect(ui->exitBtn, &QPushButton::clicked, this, [=](){emit closeApp();});
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::startNewGameSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP);
}
