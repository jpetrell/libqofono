/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoManager -p ofonomanager -N ofono_manager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOMANAGER_H_1357936120
#define OFONOMANAGER_H_1357936120

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.ofono.Manager
 */
class OfonoManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.Manager"; }

public:
    OfonoManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QVariantMap> GetModems()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetModems"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ModemAdded(const QDBusObjectPath &in0, const QDBusVariant &in1);
    void ModemRemoved(const QDBusObjectPath &in0);
};

#endif
