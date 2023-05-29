/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "TrainCharacteristics.h"

/*
 * This type is implemented using TractorCharacteristics,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_TrainCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TrainCharacteristics = {
	"TrainCharacteristics",
	"TrainCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_TrainCharacteristics_tags_1,
	sizeof(asn_DEF_TrainCharacteristics_tags_1)
		/sizeof(asn_DEF_TrainCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_TrainCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrainCharacteristics_tags_1)
		/sizeof(asn_DEF_TrainCharacteristics_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TractorCharacteristics_1,
	3,	/* Elements count */
	&asn_SPC_TractorCharacteristics_specs_1	/* Additional specs */
};

