/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "SettingsManager.h"
#include "../../tools/tool.h"
#include <QQmlEngine>
#include <QtQml>

SettingsManager::SettingsManager(QObject *parent)
    : QObject(parent)
    , _unitsSettings                (nullptr)

{
    _unitsSettings =                new UnitsSettings           (this);        // Must be first since AppSettings references it

    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
    qmlRegisterUncreatableType<SettingsManager>("QGroundControl.SettingsManager", 1, 0, "SettingsManager", "Reference only");
}

