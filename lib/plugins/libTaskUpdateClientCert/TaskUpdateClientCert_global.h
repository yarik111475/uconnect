#ifndef UPDATECLIENTCERT_GLOBAL_H
#define UPDATECLIENTCERT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(UPDATECLIENTCERT_LIBRARY)
#  define UPDATECLIENTCERT_EXPORT Q_DECL_EXPORT
#else
#  define UPDATECLIENTCERT_EXPORT Q_DECL_IMPORT
#endif

#endif // UPDATECLIENTCERT_GLOBAL_H
