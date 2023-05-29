/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_19321_IVI.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_LayoutComponent_H_
#define	_LayoutComponent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LayoutComponent__textScripting {
	LayoutComponent__textScripting_horizontal	= 0,
	LayoutComponent__textScripting_vertical	= 1
} e_LayoutComponent__textScripting;

/* LayoutComponent */
typedef struct LayoutComponent {
	long	 layoutComponentId;
	long	 height;
	long	 width;
	long	 x;
	long	 y;
	long	 textScripting;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LayoutComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LayoutComponent;
extern asn_SEQUENCE_specifics_t asn_SPC_LayoutComponent_specs_1;
extern asn_TYPE_member_t asn_MBR_LayoutComponent_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LayoutComponent_H_ */
#include "asn_internal.h"