/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_19321_IVI.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "AbsolutePositionWAltitude.h"

asn_TYPE_member_t asn_MBR_AbsolutePositionWAltitude_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AbsolutePositionWAltitude, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AbsolutePositionWAltitude, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AbsolutePositionWAltitude, altitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Altitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altitude"
		},
};
static const ber_tlv_tag_t asn_DEF_AbsolutePositionWAltitude_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AbsolutePositionWAltitude_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* altitude */
};
asn_SEQUENCE_specifics_t asn_SPC_AbsolutePositionWAltitude_specs_1 = {
	sizeof(struct AbsolutePositionWAltitude),
	offsetof(struct AbsolutePositionWAltitude, _asn_ctx),
	asn_MAP_AbsolutePositionWAltitude_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AbsolutePositionWAltitude = {
	"AbsolutePositionWAltitude",
	"AbsolutePositionWAltitude",
	&asn_OP_SEQUENCE,
	asn_DEF_AbsolutePositionWAltitude_tags_1,
	sizeof(asn_DEF_AbsolutePositionWAltitude_tags_1)
		/sizeof(asn_DEF_AbsolutePositionWAltitude_tags_1[0]), /* 1 */
	asn_DEF_AbsolutePositionWAltitude_tags_1,	/* Same as above */
	sizeof(asn_DEF_AbsolutePositionWAltitude_tags_1)
		/sizeof(asn_DEF_AbsolutePositionWAltitude_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AbsolutePositionWAltitude_1,
	3,	/* Elements count */
	&asn_SPC_AbsolutePositionWAltitude_specs_1	/* Additional specs */
};

