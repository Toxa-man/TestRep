#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QWidget>
#include <QTextBrowser>
#include "settings.h"
#include "player.h"

namespace Ui {
class DialogWindow;
}
class DialogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWindow(QWidget *parent = 0, Player *_character = 0);
    ~DialogWindow();
private:
    Ui::DialogWindow *ui;
    Player *mainCharater;
    void paintEvent(QPaintEvent *event);
private slots:
   void goToMenuSlot();
   void goToMapSlot();
signals:
   void stateChanged(GraphicStates newState);
};

#endif // DIALOGWINDOW_H
