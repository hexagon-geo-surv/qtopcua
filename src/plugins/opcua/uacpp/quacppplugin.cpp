/******************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
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
******************************************************************************/

#include "quacppplugin.h"
#include "quacppclient.h"

#include <QtCore/QLoggingCategory>

QT_BEGIN_NAMESPACE

Q_LOGGING_CATEGORY(QT_OPCUA_PLUGINS_UACPP, "qt.opcua.plugins.uacpp")

QUACppPlugin::QUACppPlugin(QObject *parent)
    : QOpcUaPlugin(parent)
{
    qRegisterMetaType<UaNodeId>();
}

QUACppPlugin::~QUACppPlugin()
{
}

QOpcUaClient *QUACppPlugin::createClient(const QVariantMap &backendProperties)
{
    return new QOpcUaClient(new QUACppClient(backendProperties));
}

QT_END_NAMESPACE
