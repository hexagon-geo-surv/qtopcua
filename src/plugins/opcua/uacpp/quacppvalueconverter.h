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

#ifndef QUACPPVALUECONVERTER_H
#define QUACPPVALUECONVERTER_H

#include "qopcuanode.h"
#include "qopcuatype.h"
#include "qopcuaargument.h"

#include <QtCore/QVariant>

#include <uanodeid.h>
#include <uaarraytemplates.h> // for UaStringArray

class UaLocalizedText;
class UaArgument;

QT_BEGIN_NAMESPACE

namespace QUACppValueConverter {
    QOpcUa::Types qvariantTypeToQOpcUaType(QVariant::Type type);

    /*constexpr*/ OpcUa_UInt32 toUaAttributeId(QOpcUa::NodeAttribute attr);

    OpcUa_Variant toUACppVariant(const QVariant&, QOpcUa::Types);
    QVariant toQVariant(const OpcUa_Variant&);
    OpcUa_BuiltInType toDataType(QOpcUa::Types valueType);

    template<typename TARGETTYPE, typename UATYPE>
    QVariant scalarToQVariant(UATYPE *data, QMetaType::Type type = QMetaType::UnknownType);

    template<typename TARGETTYPE, typename UATYPE>
    QVariant arrayToQVariant(const OpcUa_Variant &var, QMetaType::Type type = QMetaType::UnknownType);

    template<typename TARGETTYPE, typename QTTYPE>
    void scalarFromQVariant(const QVariant &var, TARGETTYPE *ptr);

    template<typename TARGETTYPE, typename QTTYPE>
    OpcUa_Variant arrayFromQVariant(const QVariant &var, const OpcUa_BuiltInType type);

    QDateTime toQDateTime(const OpcUa_DateTime *dt);
    OpcUa_DateTime toUACppDateTime(const QDateTime &qtDateTime);

    UaStringArray toUaStringArray(const QStringList &value);
    QOpcUaLocalizedText toQOpcUaLocalizedText(UaLocalizedText *data);

    OpcUa_ExpandedNodeId toUACppExpandedNodeId(const QOpcUaExpandedNodeId &qtExpandedNodeId);
    OpcUa_LocalizedText toUACppLocalizedText(const QOpcUaLocalizedText &qtLocalizedText);
    OpcUa_QualifiedName toUACppQualifiedName(const QOpcUaQualifiedName& qtQualifiedName);

    QOpcUaArgument toQArgument(const UaArgument *data);
}

QT_END_NAMESPACE

#endif // QUACPPVALUECONVERTER_H
