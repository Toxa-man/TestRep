#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player {
public:
    Player(int _heatPoints, int _armorPoints);
    int getHeatPoints() const;

    int getArmorPoints() const;

    void setHeatPoints(int value);

    void setArmorPoints(int value);

private:
    int heatPoints;
    int armorPoints;

signals:

public slots:
};

#endif // PLAYER_H
