/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#ifndef SettingsManager_H
#define SettingsManager_H

#include "UnitsSettings.h"

#include <QVariantList>

/// Provides access to all app settings
class SettingsManager : public QObject
{
    Q_OBJECT
    
public:
    SettingsManager(QObject* parent = nullptr);

    Q_PROPERTY(QObject* unitsSettings                   READ unitsSettings                  CONSTANT)

    UnitsSettings*                  unitsSettings               (void) { return _unitsSettings; }

private:
    UnitsSettings*                  _unitsSettings;

};

#endif
