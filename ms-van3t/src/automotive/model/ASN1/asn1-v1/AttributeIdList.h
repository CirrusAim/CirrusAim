/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcGeneric"
 * 	found in "ASN1Files/ISO_TS_14906_Generic.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_AttributeIdList_H_
#define	_AttributeIdList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AttributeIdList */
typedef struct AttributeIdList {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttributeIdList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttributeIdList;

#ifdef __cplusplus
}
#endif

#endif	/* _AttributeIdList_H_ */
#include "asn_internal.h"
