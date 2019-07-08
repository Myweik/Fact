#include "singletonmoudle.h"

#include "settings/settings.h"

SingletonMoudle *singletonMoudle = nullptr;

SingletonMoudle *SingletonMoudle::create()
{
    if(!singletonMoudle){
        singletonMoudle = new SingletonMoudle();
    }
    return singletonMoudle;
}

void SingletonMoudle::SingletonMoudleDelete()
{
    delete singletonMoudle;
}

SingletonMoudle::SingletonMoudle(QObject *parent)
    : QObject(parent)
    , _settingsManager(nullptr)
{
    _settingsManager = new SettingsManager(this);
}

SingletonMoudle::~SingletonMoudle()
{
    singletonMoudle = nullptr;
}
