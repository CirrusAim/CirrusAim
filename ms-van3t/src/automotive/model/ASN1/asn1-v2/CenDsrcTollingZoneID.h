/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/ITS-Container.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_CenDsrcTollingZoneID_H_
#define	_CenDsrcTollingZoneID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtectedZoneID.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CenDsrcTollingZoneID */
typedef ProtectedZoneID_t	 CenDsrcTollingZoneID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CenDsrcTollingZoneID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CenDsrcTollingZoneID;
asn_struct_free_f CenDsrcTollingZoneID_free;
asn_struct_print_f CenDsrcTollingZoneID_print;
asn_constr_check_f CenDsrcTollingZoneID_constraint;
ber_type_decoder_f CenDsrcTollingZoneID_decode_ber;
der_type_encoder_f CenDsrcTollingZoneID_encode_der;
xer_type_decoder_f CenDsrcTollingZoneID_decode_xer;
xer_type_encoder_f CenDsrcTollingZoneID_encode_xer;
oer_type_decoder_f CenDsrcTollingZoneID_decode_oer;
oer_type_encoder_f CenDsrcTollingZoneID_encode_oer;
per_type_decoder_f CenDsrcTollingZoneID_decode_uper;
per_type_encoder_f CenDsrcTollingZoneID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CenDsrcTollingZoneID_H_ */
#include "asn_internal.h"
