/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_xkey_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_INT td_xkey_purge(VRT_CTX, VCL_STRING);
typedef VCL_INT td_xkey_softpurge(VRT_CTX, VCL_STRING);
struct Vmod_xkey_Func {

	/* Functions */
	td_xkey_purge			*purge;
	td_xkey_softpurge		*softpurge;

	/* Init/Fini */
	vmod_event_f	*_event;
};
/*lint -esym(754, Vmod_xkey_Func::*) */

static const struct Vmod_xkey_Func Vmod_Func ={

	/* Functions */
	vmod_purge,
	vmod_softpurge,

	/* Init/Fini */
	vmod_event,
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_INT td_xkey_purge(VRT_CTX, VCL_STRING);\n"
	"typedef VCL_INT td_xkey_softpurge(VRT_CTX, VCL_STRING);\n"
	"\n"

	"struct Vmod_xkey_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_xkey_purge			*purge;\n"
	"	td_xkey_softpurge		*softpurge;\n"
	"\n"
	"	/* Init/Fini */\n"
	"	vmod_event_f	*_event;\n"
	"};\n"
	"static struct Vmod_xkey_Func Vmod_xkey_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"xkey.purge\0"
	"Vmod_xkey_Func.purge\0"
	    "INT\0"
		"STRING\0"
	"\0",

	"xkey.softpurge\0"
	"Vmod_xkey_Func.softpurge\0"
	    "INT\0"
		"STRING\0"
	"\0",

	/* Init/Fini */
	"$EVENT\0Vmod_xkey_Func._event",
	0
};
/*lint -restore */

/*lint -esym(759, Vmod_xkey_Data) */
const struct vmod_data Vmod_xkey_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "xkey",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "JENHIIPCUSVGSXQYGTAKWALNPAUSPOVW",
};
