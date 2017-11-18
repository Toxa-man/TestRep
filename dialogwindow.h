#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QWidget>
#include <QTextBrowser>
#include "settings.h"

namespace Ui {
class DialogWindow;
}
class DialogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWindow(QWidget *parent = 0);
    ~DialogWindow();
private:
    Ui::DialogWindow *ui;
private slots:
   void goToMenuSlot();
   void goToMapSlot();
signals:
   void stateChanged(GraphicStates newState);
};

#endif // DIALOGWINDOW_H
