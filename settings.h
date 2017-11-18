#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>

enum class GraphicStates {MAIN_MENU, GAME_MAP, DIALOG};

class Settings : public QObject
{
    Q_OBJECT
public:
    explicit Settings(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SETTINGS_H
