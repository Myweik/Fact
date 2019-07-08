#ifndef SINGLETONMOUDLE_H
#define SINGLETONMOUDLE_H

#include <QObject>
#include "settings/settings.h"

class SettingsManager;

class SingletonMoudle : public QObject
{
    Q_OBJECT
public:
    static SingletonMoudle* create();
    static void SingletonMoudleDelete();

    Q_PROPERTY(QObject* settingsManager                   READ settingsManager                  CONSTANT)

    SettingsManager*                  settingsManager               (void) { return _settingsManager; }
signals:

public slots:

private:
    explicit SingletonMoudle(QObject *parent = nullptr);
    ~SingletonMoudle();
private:
    SettingsManager*                  _settingsManager;
};

#endif // SINGLETONMOUDLE_H
