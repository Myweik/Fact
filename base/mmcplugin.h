#ifndef MMCPLUGIN_H
#define MMCPLUGIN_H

#include "qtavplayer/src/QmlVideoPlayer.h"
#include "transceiver/transceivermanager.h"
#include "MMCMount/mmcmountmanagers.h"
#include "mmctools.h"

static void mmcRegisterPlugin(){
    VlcQmlVideoPlayer::registerPlugin();
    MMCMountManagers::registerPlugin();
}

#endif // MMCPLUGIN_H
