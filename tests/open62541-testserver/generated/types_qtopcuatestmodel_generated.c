/**********************************
 * Autogenerated -- do not modify *
 **********************************/

#include "types_qtopcuatestmodel_generated.h"

/* QtInnerTestStructType */
static UA_DataTypeMember QtInnerTestStructType_members[1] = {
{
    UA_TYPENAME("DoubleSubtypeMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DOUBLE], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},};

/* QtRecursiveTestStruct */
static UA_DataTypeMember QtRecursiveTestStruct_members[2] = {
{
    UA_TYPENAME("StringMember") /* .memberName */
    &UA_TYPES[UA_TYPES_STRING], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("RecursiveArrayMember") /* .memberName */
    &UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_QTRECURSIVETESTSTRUCT], /* .memberType */
    offsetof(UA_QtRecursiveTestStruct, recursiveArrayMemberSize) - offsetof(UA_QtRecursiveTestStruct, stringMember) - sizeof(UA_String), /* .padding */
    true, /* .isArray */
    false  /* .isOptional */
},};

/* QtStructWithOptionalFieldType */
static UA_DataTypeMember QtStructWithOptionalFieldType_members[2] = {
{
    UA_TYPENAME("MandatoryMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DOUBLE], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("OptionalMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DOUBLE], /* .memberType */
    offsetof(UA_QtStructWithOptionalFieldType, optionalMember) - offsetof(UA_QtStructWithOptionalFieldType, mandatoryMember) - sizeof(UA_Double), /* .padding */
    false, /* .isArray */
    true  /* .isOptional */
},};

/* QtTestStructWithDataValue */
static UA_DataTypeMember QtTestStructWithDataValue_members[2] = {
{
    UA_TYPENAME("DataValueMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DATAVALUE], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("VariantMember") /* .memberName */
    &UA_TYPES[UA_TYPES_VARIANT], /* .memberType */
    offsetof(UA_QtTestStructWithDataValue, variantMember) - offsetof(UA_QtTestStructWithDataValue, dataValueMember) - sizeof(UA_DataValue), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},};

/* QtTestStructWithDiagnosticInfo */
static UA_DataTypeMember QtTestStructWithDiagnosticInfo_members[2] = {
{
    UA_TYPENAME("DiagnosticInfoMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("DiagnosticInfoArrayMember") /* .memberName */
    &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], /* .memberType */
    offsetof(UA_QtTestStructWithDiagnosticInfo, diagnosticInfoArrayMemberSize) - offsetof(UA_QtTestStructWithDiagnosticInfo, diagnosticInfoMember) - sizeof(UA_DiagnosticInfo), /* .padding */
    true, /* .isArray */
    false  /* .isOptional */
},};

/* QtTestUnionType */
static UA_DataTypeMember QtTestUnionType_members[2] = {
{
    UA_TYPENAME("Member1") /* .memberName */
    &UA_TYPES[UA_TYPES_INT64], /* .memberType */
    offsetof(UA_QtTestUnionType, fields.member1), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("Member2") /* .memberName */
    &UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_QTINNERTESTSTRUCTTYPE], /* .memberType */
    offsetof(UA_QtTestUnionType, fields.member2), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},};

/* QtTestEnumeration */
#define QtTestEnumeration_members NULL

/* QtTestStructType */
static UA_DataTypeMember QtTestStructType_members[7] = {
{
    UA_TYPENAME("StringMember") /* .memberName */
    &UA_TYPES[UA_TYPES_STRING], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("LocalizedTextMember") /* .memberName */
    &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], /* .memberType */
    offsetof(UA_QtTestStructType, localizedTextMember) - offsetof(UA_QtTestStructType, stringMember) - sizeof(UA_String), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("QualifiedNameMember") /* .memberName */
    &UA_TYPES[UA_TYPES_QUALIFIEDNAME], /* .memberType */
    offsetof(UA_QtTestStructType, qualifiedNameMember) - offsetof(UA_QtTestStructType, localizedTextMember) - sizeof(UA_LocalizedText), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("Int64ArrayMember") /* .memberName */
    &UA_TYPES[UA_TYPES_INT64], /* .memberType */
    offsetof(UA_QtTestStructType, int64ArrayMemberSize) - offsetof(UA_QtTestStructType, qualifiedNameMember) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("EnumMember") /* .memberName */
    &UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_QTTESTENUMERATION], /* .memberType */
    offsetof(UA_QtTestStructType, enumMember) - offsetof(UA_QtTestStructType, int64ArrayMember) - sizeof(void *), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("NestedStructMember") /* .memberName */
    &UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_QTINNERTESTSTRUCTTYPE], /* .memberType */
    offsetof(UA_QtTestStructType, nestedStructMember) - offsetof(UA_QtTestStructType, enumMember) - sizeof(UA_QtTestEnumeration), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("NestedStructArrayMember") /* .memberName */
    &UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_QTINNERTESTSTRUCTTYPE], /* .memberType */
    offsetof(UA_QtTestStructType, nestedStructArrayMemberSize) - offsetof(UA_QtTestStructType, nestedStructMember) - sizeof(UA_QtInnerTestStructType), /* .padding */
    true, /* .isArray */
    false  /* .isOptional */
},};
UA_DataType UA_TYPES_QTOPCUATESTMODEL[UA_TYPES_QTOPCUATESTMODEL_COUNT] = {
/* QtInnerTestStructType */
{
    UA_TYPENAME("QtInnerTestStructType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3004LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5004LU}}, /* .binaryEncodingId */
    sizeof(UA_QtInnerTestStructType), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    QtInnerTestStructType_members  /* .members */
},
/* QtRecursiveTestStruct */
{
    UA_TYPENAME("QtRecursiveTestStruct") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3012LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5016LU}}, /* .binaryEncodingId */
    sizeof(UA_QtRecursiveTestStruct), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    QtRecursiveTestStruct_members  /* .members */
},
/* QtStructWithOptionalFieldType */
{
    UA_TYPENAME("QtStructWithOptionalFieldType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3006LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5010LU}}, /* .binaryEncodingId */
    sizeof(UA_QtStructWithOptionalFieldType), /* .memSize */
    UA_DATATYPEKIND_OPTSTRUCT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    QtStructWithOptionalFieldType_members  /* .members */
},
/* QtTestStructWithDataValue */
{
    UA_TYPENAME("QtTestStructWithDataValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3010LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5014LU}}, /* .binaryEncodingId */
    sizeof(UA_QtTestStructWithDataValue), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    QtTestStructWithDataValue_members  /* .members */
},
/* QtTestStructWithDiagnosticInfo */
{
    UA_TYPENAME("QtTestStructWithDiagnosticInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3009LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5003LU}}, /* .binaryEncodingId */
    sizeof(UA_QtTestStructWithDiagnosticInfo), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    QtTestStructWithDiagnosticInfo_members  /* .members */
},
/* QtTestUnionType */
{
    UA_TYPENAME("QtTestUnionType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3005LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5007LU}}, /* .binaryEncodingId */
    sizeof(UA_QtTestUnionType), /* .memSize */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    QtTestUnionType_members  /* .members */
},
/* QtTestEnumeration */
{
    UA_TYPENAME("QtTestEnumeration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3002LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_QtTestEnumeration), /* .memSize */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    QtTestEnumeration_members  /* .members */
},
/* QtTestStructType */
{
    UA_TYPENAME("QtTestStructType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3003LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {5001LU}}, /* .binaryEncodingId */
    sizeof(UA_QtTestStructType), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    QtTestStructType_members  /* .members */
},
};
