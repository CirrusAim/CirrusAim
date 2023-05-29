/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "ASN1Files/ISO_TS_19091.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_ConnectionManeuverAssist_addGrpC_H_
#define	_ConnectionManeuverAssist_addGrpC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ItsStationPositionList;
struct NodeOffsetPointXY;

/* ConnectionManeuverAssist-addGrpC */
typedef struct ConnectionManeuverAssist_addGrpC {
	struct ItsStationPositionList	*itsStationPositions	/* OPTIONAL */;
	struct NodeOffsetPointXY	*rsuGNSSOffset	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnectionManeuverAssist_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist_addGrpC;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ItsStationPositionList.h"
#include "NodeOffsetPointXY.h"

#endif	/* _ConnectionManeuverAssist_addGrpC_H_ */
#include "asn_internal.h"
