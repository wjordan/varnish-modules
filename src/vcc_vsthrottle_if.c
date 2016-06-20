/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_vsthrottle_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_BOOL td_vsthrottle_is_denied(VRT_CTX, VCL_STRING, VCL_INT,
    VCL_DURATION);
struct Vmod_vsthrottle_Func {

	/* Functions */
	td_vsthrottle_is_denied		*is_denied;

	/* Init/Fini */
	vmod_event_f	*_event;
};
/*lint -esym(754, Vmod_vsthrottle_Func::*) */

static const struct Vmod_vsthrottle_Func Vmod_Func ={

	/* Functions */
	vmod_is_denied,

	/* Init/Fini */
	event_function,
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_BOOL td_vsthrottle_is_denied(VRT_CTX, VCL_STRING,\n"
	"    VCL_INT, VCL_DURATION);\n"
	"\n"

	"struct Vmod_vsthrottle_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_vsthrottle_is_denied		*is_denied;\n"
	"\n"
	"	/* Init/Fini */\n"
	"	vmod_event_f	*_event;\n"
	"};\n"
	"static struct Vmod_vsthrottle_Func Vmod_vsthrottle_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"vsthrottle.is_denied\0"
	"Vmod_vsthrottle_Func.is_denied\0"
	    "BOOL\0"
		"STRING\0"
		"INT\0"
		"DURATION\0"
	"\0",

	/* Init/Fini */
	"$EVENT\0Vmod_vsthrottle_Func._event",
	0
};
/*lint -restore */

/*lint -esym(759, Vmod_vsthrottle_Data) */
const struct vmod_data Vmod_vsthrottle_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "vsthrottle",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "PRFUKDLEYBHECOLXIBZBWACRRJYFMMEU",
};
