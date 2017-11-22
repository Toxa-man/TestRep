#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent, Player *_character) :
    QWidget(parent),
    ui(new Ui::MainMenu),
    mainCharacter(_character)

{
    ui->setupUi(this);
    connect(ui->newGameBtn, &QPushButton::clicked, this, &MainMenu::startNewGameSlot);
    connect(ui->exitBtn, &QPushButton::clicked, this, [=](){emit closeApp();});
    connect(ui->incHPBtn, &QPushButton::clicked, this, [ = ](){
        mainCharacter->setHeatPoints(mainCharacter->getHeatPoints() + 1);
    });
    connect(ui->incArmorBtn, &QPushButton::clicked, this, [ = ](){
        mainCharacter->setArmorPoints(mainCharacter->getArmorPoints() + 1);
    });
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::startNewGameSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP);
}
