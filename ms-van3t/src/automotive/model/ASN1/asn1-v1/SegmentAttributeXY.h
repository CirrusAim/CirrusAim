/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "ASN1Files/ISO_TS_19091.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_SegmentAttributeXY_H_
#define	_SegmentAttributeXY_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SegmentAttributeXY {
	SegmentAttributeXY_reserved	= 0,
	SegmentAttributeXY_doNotBlock	= 1,
	SegmentAttributeXY_whiteLine	= 2,
	SegmentAttributeXY_mergingLaneLeft	= 3,
	SegmentAttributeXY_mergingLaneRight	= 4,
	SegmentAttributeXY_curbOnLeft	= 5,
	SegmentAttributeXY_curbOnRight	= 6,
	SegmentAttributeXY_loadingzoneOnLeft	= 7,
	SegmentAttributeXY_loadingzoneOnRight	= 8,
	SegmentAttributeXY_turnOutPointOnLeft	= 9,
	SegmentAttributeXY_turnOutPointOnRight	= 10,
	SegmentAttributeXY_adjacentParkingOnLeft	= 11,
	SegmentAttributeXY_adjacentParkingOnRight	= 12,
	SegmentAttributeXY_adjacentBikeLaneOnLeft	= 13,
	SegmentAttributeXY_adjacentBikeLaneOnRight	= 14,
	SegmentAttributeXY_sharedBikeLane	= 15,
	SegmentAttributeXY_bikeBoxInFront	= 16,
	SegmentAttributeXY_transitStopOnLeft	= 17,
	SegmentAttributeXY_transitStopOnRight	= 18,
	SegmentAttributeXY_transitStopInLane	= 19,
	SegmentAttributeXY_sharedWithTrackedVehicle	= 20,
	SegmentAttributeXY_safeIsland	= 21,
	SegmentAttributeXY_lowCurbsPresent	= 22,
	SegmentAttributeXY_rumbleStripPresent	= 23,
	SegmentAttributeXY_audibleSignalingPresent	= 24,
	SegmentAttributeXY_adaptiveTimingPresent	= 25,
	SegmentAttributeXY_rfSignalRequestPresent	= 26,
	SegmentAttributeXY_partialCurbIntrusion	= 27,
	SegmentAttributeXY_taperToLeft	= 28,
	SegmentAttributeXY_taperToRight	= 29,
	SegmentAttributeXY_taperToCenterLine	= 30,
	SegmentAttributeXY_parallelParking	= 31,
	SegmentAttributeXY_headInParking	= 32,
	SegmentAttributeXY_freeParking	= 33,
	SegmentAttributeXY_timeRestrictionsOnParking	= 34,
	SegmentAttributeXY_costToPark	= 35,
	SegmentAttributeXY_midBlockCurbPresent	= 36,
	SegmentAttributeXY_unEvenPavementPresent	= 37
	/*
	 * Enumeration is extensible
	 */
} e_SegmentAttributeXY;

/* SegmentAttributeXY */
typedef long	 SegmentAttributeXY_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SegmentAttributeXY_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SegmentAttributeXY;
extern const asn_INTEGER_specifics_t asn_SPC_SegmentAttributeXY_specs_1;
asn_struct_free_f SegmentAttributeXY_free;
asn_struct_print_f SegmentAttributeXY_print;
asn_constr_check_f SegmentAttributeXY_constraint;
ber_type_decoder_f SegmentAttributeXY_decode_ber;
der_type_encoder_f SegmentAttributeXY_encode_der;
xer_type_decoder_f SegmentAttributeXY_decode_xer;
xer_type_encoder_f SegmentAttributeXY_encode_xer;
oer_type_decoder_f SegmentAttributeXY_decode_oer;
oer_type_encoder_f SegmentAttributeXY_encode_oer;
per_type_decoder_f SegmentAttributeXY_decode_uper;
per_type_encoder_f SegmentAttributeXY_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SegmentAttributeXY_H_ */
#include "asn_internal.h"
