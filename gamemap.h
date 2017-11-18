#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QWidget>
#include "settings.h"

namespace Ui {
class GameMap;
}

class GameMap : public QWidget
{
    Q_OBJECT

public:
    explicit GameMap(QWidget *parent = 0);
    ~GameMap();

private:
    Ui::GameMap *ui;
private slots:
    void btn_1_clicked();
    void btn_2_clicked();
    void btn_3_clicked();
    void goTuMenuClicked();
signals:
    void stateChanged(GraphicStates newState);
};

#endif // GAMEMAP_H
