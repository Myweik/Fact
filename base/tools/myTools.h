#ifndef MYTOOLS_H
#define MYTOOLS_H
#include <QObject>

namespace CHECK
{
    unsigned char _crc8(unsigned char *ptr, unsigned char len);
    quint32 _crc32(const quint8 *src, unsigned len, unsigned state);
    unsigned char _xor8(unsigned char *ptr, unsigned char len);

}

#endif // MYTOOLS_H
