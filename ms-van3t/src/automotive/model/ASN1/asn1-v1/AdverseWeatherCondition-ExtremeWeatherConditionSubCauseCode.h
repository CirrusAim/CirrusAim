/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ASN1Files/ITS-Container_v1.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_
#define	_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode {
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_unavailable	= 0,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_strongWinds	= 1,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_damagingHail	= 2,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_hurricane	= 3,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_thunderstorm	= 4,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_tornado	= 5,
	AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_blizzard	= 6
} e_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode;

/* AdverseWeatherCondition-ExtremeWeatherConditionSubCauseCode */
typedef long	 AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode;
asn_struct_free_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_free;
asn_struct_print_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_print;
asn_constr_check_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_constraint;
ber_type_decoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_ber;
der_type_encoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_der;
xer_type_decoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_xer;
xer_type_encoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_xer;
oer_type_decoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_oer;
oer_type_encoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_oer;
per_type_decoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_uper;
per_type_encoder_f AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_ */
#include "asn_internal.h"
