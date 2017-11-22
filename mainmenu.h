#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "settings.h"
#include "player.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0, Player* _character = 0);
    ~MainMenu();

private:
    Ui::MainMenu *ui;
    Player* mainCharacter;
private slots:
    void startNewGameSlot();
signals:
    void stateChanged(GraphicStates newState);
    void closeApp();
};

#endif // MAINMENU_H
