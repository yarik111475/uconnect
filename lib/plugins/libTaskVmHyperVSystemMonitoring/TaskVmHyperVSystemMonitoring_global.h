#ifndef VMHYPERVSYSTEMMONITORING_GLOBAL_H
#define VMHYPERVSYSTEMMONITORING_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VMHYPERVSYSTEMMONITORING_LIBRARY)
#  define VMHYPERVSYSTEMMONITORING_EXPORT Q_DECL_EXPORT
#else
#  define VMHYPERVSYSTEMMONITORING_EXPORT Q_DECL_IMPORT
#endif

#endif // VMHYPERVSYSTEMMONITORING_GLOBAL_H