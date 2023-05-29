/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATEM-PDU-Descriptions"
 * 	found in "ASN1Files/ETSI_TS_103301.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_SPATEM_H_
#define	_SPATEM_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ItsPduHeader.h"
#include "SPAT.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SPATEM */
typedef struct SPATEM {
	ItsPduHeader_t	 header;
	SPAT_t	 spat;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPATEM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPATEM;

#ifdef __cplusplus
}
#endif

#endif	/* _SPATEM_H_ */
#include "asn_internal.h"
