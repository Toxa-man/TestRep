#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainCharacter = new Player(100, 20);

    dialogWindow = new DialogWindow(this, mainCharacter);
    gameMap = new GameMap(this);
    mainMenu = new MainMenu(this, mainCharacter);
    windowHandler = new QStackedWidget(this);
    windowHandler->addWidget(mainMenu);
    windowHandler->addWidget(gameMap);
    windowHandler->addWidget(dialogWindow);
    this->setCentralWidget(windowHandler);
    exitDialog = new ExitDialog(this);
    connect(dialogWindow, &DialogWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(gameMap, &GameMap::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(mainMenu, &MainMenu::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(mainMenu, &MainMenu::closeApp, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (exitDialog->exec() == QDialog::Accepted){
        event->accept();
    } else {
        event->ignore();
    }

}

void MainWindow::stateChangedSlot(GraphicStates newState)
{
    currentState = newState;
    switch(currentState){
    case GraphicStates::MAIN_MENU: {
        windowHandler->setCurrentWidget(mainMenu);
        break;
    }
    case GraphicStates::GAME_MAP: {
        windowHandler->setCurrentWidget(gameMap);
        break;
    }
    case GraphicStates::DIALOG: {
        windowHandler->setCurrentWidget(dialogWindow);
        break;
    }
    }

}

