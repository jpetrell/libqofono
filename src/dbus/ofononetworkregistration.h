/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoNetworkRegistration -p ofononetworkregistration -N ofono_network_registration.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONONETWORKREGISTRATION_H_1357881754
#define OFONONETWORKREGISTRATION_H_1357881754

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "dbustypes.h"

/*
 * Proxy class for interface org.ofono.NetworkRegistration
 */
class OfonoNetworkRegistration: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.NetworkRegistration"; }

public:
    OfonoNetworkRegistration(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoNetworkRegistration();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Deregister()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Deregister"), argumentList);
    }

    inline QDBusPendingReply<QArrayOfPathProperties> GetOperators()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetOperators"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<> Register()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Register"), argumentList);
    }

    inline QDBusPendingReply<QArrayOfPathProperties> Scan()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Scan"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

#endif
