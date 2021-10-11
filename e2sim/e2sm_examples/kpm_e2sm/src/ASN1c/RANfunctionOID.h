/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_RANfunctionOID_H_
#define	_RANfunctionOID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PrintableString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RANfunctionOID */
typedef PrintableString_t	 RANfunctionOID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RANfunctionOID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RANfunctionOID;
asn_struct_free_f RANfunctionOID_free;
asn_struct_print_f RANfunctionOID_print;
asn_constr_check_f RANfunctionOID_constraint;
ber_type_decoder_f RANfunctionOID_decode_ber;
der_type_encoder_f RANfunctionOID_encode_der;
xer_type_decoder_f RANfunctionOID_decode_xer;
xer_type_encoder_f RANfunctionOID_encode_xer;
per_type_decoder_f RANfunctionOID_decode_uper;
per_type_encoder_f RANfunctionOID_encode_uper;
per_type_decoder_f RANfunctionOID_decode_aper;
per_type_encoder_f RANfunctionOID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANfunctionOID_H_ */
#include "asn_internal.h"
