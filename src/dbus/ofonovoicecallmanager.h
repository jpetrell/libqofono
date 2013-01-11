/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoVoiceCallManager -p ofonovoicecallmanager -N ofono_voicecallmanager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOVOICECALLMANAGER_H_1357881777
#define OFONOVOICECALLMANAGER_H_1357881777

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
 * Proxy class for interface org.ofono.VoiceCallManager
 */
class OfonoVoiceCallManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.VoiceCallManager"; }

public:
    OfonoVoiceCallManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoVoiceCallManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QList<QDBusObjectPath> > CreateMultiparty()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CreateMultiparty"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> Dial(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("Dial"), argumentList);
    }

    inline QDBusPendingReply<QArrayOfPathProperties> GetCalls()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCalls"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<> HangupAll()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("HangupAll"), argumentList);
    }

    inline QDBusPendingReply<> HangupMultiparty()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("HangupMultiparty"), argumentList);
    }

    inline QDBusPendingReply<> HoldAndAnswer()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("HoldAndAnswer"), argumentList);
    }

    inline QDBusPendingReply<QList<QDBusObjectPath> > PrivateChat(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("PrivateChat"), argumentList);
    }

    inline QDBusPendingReply<> ReleaseAndAnswer()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ReleaseAndAnswer"), argumentList);
    }

    inline QDBusPendingReply<> SendTones(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("SendTones"), argumentList);
    }

    inline QDBusPendingReply<> SwapCalls()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("SwapCalls"), argumentList);
    }

    inline QDBusPendingReply<> Transfer()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Transfer"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CallAdded(const QDBusObjectPath &in0, const QVariantMap &in1);
    void CallRemoved(const QDBusObjectPath &in0);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

#endif
