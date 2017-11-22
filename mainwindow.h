#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QCloseEvent>
#include "settings.h"
#include "dialogwindow.h"
#include "gamemap.h"
#include "mainmenu.h"
#include "exitdialog.h"
#include "player.h"


namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    GraphicStates currentState = GraphicStates::MAIN_MENU;
    DialogWindow *dialogWindow;
    GameMap *gameMap;
    MainMenu *mainMenu;
    ExitDialog *exitDialog;
    QStackedWidget *windowHandler;
    Player *mainCharacter;
    void closeEvent(QCloseEvent *event);
public slots:
    void stateChangedSlot(GraphicStates newState);

};

#endif // MAINWINDOW_H
