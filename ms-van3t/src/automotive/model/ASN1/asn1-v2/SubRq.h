/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_14906_EfcDsrcApplication.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_SubRq_H_
#define	_SubRq_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SubRq */
typedef struct SubRq {
	long	 attributeId;
	long	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubRq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubRq;

#ifdef __cplusplus
}
#endif

#endif	/* _SubRq_H_ */
#include "asn_internal.h"
