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

#include "qopcuaxvalue.h"

QT_BEGIN_NAMESPACE

/*!
    \class QOpcUaXValue
    \inmodule QtOpcUa
    \brief The OPC UA XVType.

    This is the Qt OPC UA representation for the OPC UA XVType type defined in OPC-UA part 8, 5.6.8.
    This type is used to position values of float precision on an axis with double precision.
*/

class QOpcUaXValueData : public QSharedData
{
public:
    double x{0};
    float value{0};
};

QOpcUaXValue::QOpcUaXValue()
    : data(new QOpcUaXValueData)
{
}

/*!
    Constructs an XValue from \a rhs.
*/
QOpcUaXValue::QOpcUaXValue(const QOpcUaXValue &rhs)
    : data(rhs.data)
{
}

/*!
    Constructs an XValue with position \a x and value \a value.
*/
QOpcUaXValue::QOpcUaXValue(double x, float value)
    : data(new QOpcUaXValueData)
{
    data->x = x;
    data->value = value;
}

/*!
    Sets the values from \a rhs in this XValue.
*/
QOpcUaXValue &QOpcUaXValue::operator=(const QOpcUaXValue &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

/*!
    Returns \c true if this XValue has the same value as \a rhs.
*/
bool QOpcUaXValue::operator==(const QOpcUaXValue &rhs) const
{
    return qFloatDistance(data->x, rhs.x()) == 0 &&
            qFloatDistance(data->value, rhs.value()) == 0;
}

/*!
    Converts this XValue to \l QVariant.
*/
QOpcUaXValue::operator QVariant() const
{
    return QVariant::fromValue(*this);
}

QOpcUaXValue::~QOpcUaXValue()
{
}

/*!
    Returns the value for position x.
*/
float QOpcUaXValue::value() const
{
    return data->value;
}

/*!
    Sets the value for position x to \a value.
*/
void QOpcUaXValue::setValue(float value)
{
    data->value = value;
}

/*!
    Returns the position of the value on the axis.
*/
double QOpcUaXValue::x() const
{
    return data->x;
}

/*!
    Sets the position of the value on the axis to \a x.
*/
void QOpcUaXValue::setX(double x)
{
    data->x = x;
}

QT_END_NAMESPACE
