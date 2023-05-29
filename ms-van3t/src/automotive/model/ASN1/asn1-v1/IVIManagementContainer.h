/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_IVIManagementContainer_H_
#define	_IVIManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Provider.h"
#include "IviIdentificationNumber.h"
#include "TimestampIts.h"
#include "IviStatus.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IVIManagementContainer */
typedef struct IVIManagementContainer {
	Provider_t	 serviceProviderId;
	IviIdentificationNumber_t	 iviIdentificationNumber;
	TimestampIts_t	*timeStamp	/* OPTIONAL */;
	TimestampIts_t	*validFrom	/* OPTIONAL */;
	TimestampIts_t	*validTo	/* OPTIONAL */;
	struct IVIManagementContainer__connectedIviStructures {
		A_SEQUENCE_OF(IviIdentificationNumber_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *connectedIviStructures;
	IviStatus_t	 iviStatus;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IVIManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IVIManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_IVIManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_IVIManagementContainer_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _IVIManagementContainer_H_ */
#include "asn_internal.h"