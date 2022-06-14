/****************************************************************************
**
** Copyright (C) 2015 basysKom GmbH, opensource@basyskom.com
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtOpcUa module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QOPCUAQUALIFIEDNAMEDATA_H
#define QOPCUAQUALIFIEDNAMEDATA_H

#include <QtOpcUa/qopcuaglobal.h>

#include <QtCore/qshareddata.h>
#include <QtCore/qvariant.h>

QT_BEGIN_NAMESPACE

class QOpcUaQualifiedNameData;
class Q_OPCUA_EXPORT QOpcUaQualifiedName
{
public:
    QOpcUaQualifiedName();
    QOpcUaQualifiedName(const QOpcUaQualifiedName &);
    QOpcUaQualifiedName(quint16 namespaceIndex, const QString &name);
    QOpcUaQualifiedName &operator=(const QOpcUaQualifiedName &);
    bool operator==(const QOpcUaQualifiedName &rhs) const;
    operator QVariant() const;
    ~QOpcUaQualifiedName();

    QString name() const;
    void setName(const QString &name);

    quint16 namespaceIndex() const;
    void setNamespaceIndex(quint16 namespaceIndex);

private:
    QSharedDataPointer<QOpcUaQualifiedNameData> data;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QOpcUaQualifiedName)

#endif // QOPCUAQUALIFIEDNAMEDATA_H
