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

#include "qopcuarelativepathelement.h"
#include "qopcuaqualifiedname.h"

QT_BEGIN_NAMESPACE

/*!
    \class QOpcUaRelativePathElement
    \inmodule QtOpcUa
    \brief The OPC UA RelativePathElement.

    QOpcUaRelativePathElement defines an element of a relative path on an OPC UA server.
    This is needed for resolution of browse paths to node ids in \l QOpcUaNode::resolveBrowsePath().
*/

class QOpcUaRelativePathElementData : public QSharedData
{
public:
    QString referenceTypeId;
    bool isInverse{false};
    bool includeSubtypes{false};
    QOpcUaQualifiedName targetName;
};

/*!
    Constructs a relative path element with both flags set to \c false.
*/
QOpcUaRelativePathElement::QOpcUaRelativePathElement()
    : data(new QOpcUaRelativePathElementData())
{
}

/*!
    Constructs a relative path element with targetName \a target, reference type node id \a refType and both flags set to \c false.
*/
QOpcUaRelativePathElement::QOpcUaRelativePathElement(const QOpcUaQualifiedName &target, const QString &refType)
    : data(new QOpcUaRelativePathElementData())
{
    data->referenceTypeId = refType;
    data->targetName = target;
}

/*!
    Constructs a relative path element with targetName \a target, \l QOpcUa::ReferenceTypeId \a refType and both flags set to \c false.
*/
QOpcUaRelativePathElement::QOpcUaRelativePathElement(const QOpcUaQualifiedName &target, QOpcUa::ReferenceTypeId refType)
    : data(new QOpcUaRelativePathElementData())
{
    data->referenceTypeId = QOpcUa::nodeIdFromReferenceType(refType);
    data->targetName = target;
}

/*!
    Constructs a relative path element from \a rhs.
*/
QOpcUaRelativePathElement::QOpcUaRelativePathElement(const QOpcUaRelativePathElement &rhs)
    : data(rhs.data)
{
}

/*!
    Sets the values of \a rhs in this relative path element.
*/
QOpcUaRelativePathElement &QOpcUaRelativePathElement::operator=(const QOpcUaRelativePathElement &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

/*!
    Returns \c true if this relative path element has the same value as \a rhs.
*/
bool QOpcUaRelativePathElement::operator==(const QOpcUaRelativePathElement &rhs) const
{
    return data->includeSubtypes == rhs.includeSubtypes() &&
            data->isInverse == rhs.isInverse() &&
            data->referenceTypeId == rhs.referenceTypeId() &&
            data->targetName == rhs.targetName();
}

QOpcUaRelativePathElement::~QOpcUaRelativePathElement()
{
}

/*!
    Returns the qualified name of the reference's target.
*/
QOpcUaQualifiedName QOpcUaRelativePathElement::targetName() const
{
    return data->targetName;
}

/*!
    Sets the target name to \a targetName, for example QOpcUaQualifiedName(0, "DataTypes").
*/
void QOpcUaRelativePathElement::setTargetName(const QOpcUaQualifiedName &targetName)
{
    data->targetName = targetName;
}

/*!
    Returns the value of the includeSubtypes flag.
*/
bool QOpcUaRelativePathElement::includeSubtypes() const
{
    return data->includeSubtypes;
}

/*!
    Sets the includeSubtypes flag to \a includeSubtypes.
    If the flag is \c true, the lookup also follows references with subtypes of \l referenceTypeId().
*/
void QOpcUaRelativePathElement::setIncludeSubtypes(bool includeSubtypes)
{
    data->includeSubtypes = includeSubtypes;
}

/*!
    Returns the value of the isInverse flag.
*/
bool QOpcUaRelativePathElement::isInverse() const
{
    return data->isInverse;
}

/*!
    Sets the isInverse flag to \a isInverse.
    If the flag is \c true, the lookup follows the reverse reference.
*/
void QOpcUaRelativePathElement::setIsInverse(bool isInverse)
{
    data->isInverse = isInverse;
}

/*!
    Returns the type id of the reference connecting this node to the previous node.
*/
QString QOpcUaRelativePathElement::referenceTypeId() const
{
    return data->referenceTypeId;
}

/*!
    Sets the reference type id to \a referenceTypeId.
*/
void QOpcUaRelativePathElement::setReferenceTypeId(const QString &referenceTypeId)
{
    data->referenceTypeId = referenceTypeId;
}

/*!
    Sets the reference type id to \a referenceTypeId.
*/
void QOpcUaRelativePathElement::setReferenceTypeId(QOpcUa::ReferenceTypeId referenceTypeId)
{
    data->referenceTypeId = QOpcUa::nodeIdFromReferenceType(referenceTypeId);
}

QT_END_NAMESPACE
