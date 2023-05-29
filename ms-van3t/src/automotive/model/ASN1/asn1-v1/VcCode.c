/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "VcCode.h"

static int
memb_roadSignCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_validity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_validity_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_validity_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (SIZE(1..8,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_roadSignCode_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..64) */,
	-1};
static asn_per_constraints_t asn_PER_memb_roadSignCode_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_validity_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_validity_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (SIZE(1..8,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_value_constr_7 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_value_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_validity_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DTM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_validity_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_validity_specs_5 = {
	sizeof(struct VcCode__validity),
	offsetof(struct VcCode__validity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_validity_5 = {
	"validity",
	"validity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_validity_tags_5,
	sizeof(asn_DEF_validity_tags_5)
		/sizeof(asn_DEF_validity_tags_5[0]) - 1, /* 1 */
	asn_DEF_validity_tags_5,	/* Same as above */
	sizeof(asn_DEF_validity_tags_5)
		/sizeof(asn_DEF_validity_tags_5[0]), /* 2 */
	{ &asn_OER_type_validity_constr_5, &asn_PER_type_validity_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_validity_5,
	1,	/* Single element */
	&asn_SPC_validity_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_VcCode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VcCode, roadSignClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VcClass,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"roadSignClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VcCode, roadSignCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_roadSignCode_constr_3, &asn_PER_memb_roadSignCode_constr_3,  memb_roadSignCode_constraint_1 },
		0, 0, /* No default value */
		"roadSignCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VcCode, vcOption),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VcOption,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vcOption"
		},
	{ ATF_POINTER, 3, offsetof(struct VcCode, validity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_validity_5,
		0,
		{ &asn_OER_memb_validity_constr_5, &asn_PER_memb_validity_constr_5,  memb_validity_constraint_1 },
		0, 0, /* No default value */
		"validity"
		},
	{ ATF_POINTER, 2, offsetof(struct VcCode, value),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_value_constr_7, &asn_PER_memb_value_constr_7,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
	{ ATF_POINTER, 1, offsetof(struct VcCode, unit),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSCUnit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unit"
		},
};
static const int asn_MAP_VcCode_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_VcCode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VcCode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* roadSignClass */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* roadSignCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vcOption */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* validity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* value */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* unit */
};
asn_SEQUENCE_specifics_t asn_SPC_VcCode_specs_1 = {
	sizeof(struct VcCode),
	offsetof(struct VcCode, _asn_ctx),
	asn_MAP_VcCode_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_VcCode_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VcCode = {
	"VcCode",
	"VcCode",
	&asn_OP_SEQUENCE,
	asn_DEF_VcCode_tags_1,
	sizeof(asn_DEF_VcCode_tags_1)
		/sizeof(asn_DEF_VcCode_tags_1[0]), /* 1 */
	asn_DEF_VcCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_VcCode_tags_1)
		/sizeof(asn_DEF_VcCode_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VcCode_1,
	6,	/* Elements count */
	&asn_SPC_VcCode_specs_1	/* Additional specs */
};

