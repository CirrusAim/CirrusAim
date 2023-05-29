/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_19321_IVI.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "ComputedSegment.h"

static int
memb_offsetDistance_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_offsetDistance_constr_5 CC_NOTUSED = {
	{ 2, 0 }	/* (-32768..32767) */,
	-1};
static asn_per_constraints_t asn_PER_memb_offsetDistance_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ComputedSegment_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedSegment, zoneId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Zid,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedSegment, laneNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LanePosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedSegment, laneWidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IVILaneWidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneWidth"
		},
	{ ATF_POINTER, 2, offsetof(struct ComputedSegment, offsetDistance),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_offsetDistance_constr_5, &asn_PER_memb_offsetDistance_constr_5,  memb_offsetDistance_constraint_1 },
		0, 0, /* No default value */
		"offsetDistance"
		},
	{ ATF_POINTER, 1, offsetof(struct ComputedSegment, offsetPosition),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaReferencePosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offsetPosition"
		},
};
static const int asn_MAP_ComputedSegment_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_ComputedSegment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ComputedSegment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zoneId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laneNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laneWidth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* offsetDistance */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* offsetPosition */
};
asn_SEQUENCE_specifics_t asn_SPC_ComputedSegment_specs_1 = {
	sizeof(struct ComputedSegment),
	offsetof(struct ComputedSegment, _asn_ctx),
	asn_MAP_ComputedSegment_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ComputedSegment_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ComputedSegment = {
	"ComputedSegment",
	"ComputedSegment",
	&asn_OP_SEQUENCE,
	asn_DEF_ComputedSegment_tags_1,
	sizeof(asn_DEF_ComputedSegment_tags_1)
		/sizeof(asn_DEF_ComputedSegment_tags_1[0]), /* 1 */
	asn_DEF_ComputedSegment_tags_1,	/* Same as above */
	sizeof(asn_DEF_ComputedSegment_tags_1)
		/sizeof(asn_DEF_ComputedSegment_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ComputedSegment_1,
	5,	/* Elements count */
	&asn_SPC_ComputedSegment_specs_1	/* Additional specs */
};

