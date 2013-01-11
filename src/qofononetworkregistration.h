/****************************************************************************
**
** Copyright (C) 2013 Jolla Ltd.
** Contact: lorn.potter@gmail.com
**

**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QOFONONETWORKREGISTRATION_H
#define QOFONONETWORKREGISTRATION_H

#include <QObject>
#include "dbustypes.h"

class QOfonoNetworkRegistrationPrivate;

class QOfonoNetworkRegistration : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString mode READ mode NOTIFY modeChanged)
    Q_PROPERTY(QString status READ status NOTIFY statusChanged)
    Q_PROPERTY(uint locationAreaCode READ locationAreaCode NOTIFY locationAreaCodeChanged)
    Q_PROPERTY(uint cellId READ cellId NOTIFY cellIdChanged)
    Q_PROPERTY(QString mcc READ mcc NOTIFY mccChanged)
    Q_PROPERTY(QString mnc READ mnc NOTIFY mncChanged)
    Q_PROPERTY(QString technology READ technology NOTIFY technologyChanged)
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(uint strength READ strength NOTIFY strengthChanged)
    Q_PROPERTY(QString baseStation READ baseStation NOTIFY baseStationChanged)

    Q_PROPERTY(QString modemPath READ modemPath WRITE setModemPath)

public:
    explicit QOfonoNetworkRegistration(QObject *parent = 0);
    ~QOfonoNetworkRegistration();
    
    QString modemPath() const;
    void setModemPath(const QString &path);

    QString mode() const;
    QString status() const;
    uint locationAreaCode() const;
    uint cellId() const;
    QString mcc() const;
    QString mnc() const;
    QString technology() const;
    QString name() const;
    uint strength() const;
    QString baseStation() const;

Q_SIGNALS:
    void modeChanged(const QString &mode);
    void statusChanged(const QString &status);
    void locationAreaCodeChanged(uint locationAreaCode);
    void cellIdChanged(uint cellId);
    void mccChanged(const QString &mcc);
    void mncChanged(const QString &mnc);
    void technologyChanged(const QString &technology);
    void nameChanged(const QString &name);
    void strengthChanged(uint strength);
    void baseStationChanged(const QString &baseStation);

public slots:
    void registration();
    void getOperators();
    void scan();

private:
    QOfonoNetworkRegistrationPrivate *d_ptr;

private slots:
    void propertyChanged(const QString &property,const QDBusVariant &value);
};

#endif // QOFONONETWORKREGISTRATION_H