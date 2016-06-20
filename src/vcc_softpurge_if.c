/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_softpurge_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_VOID td_softpurge_softpurge(VRT_CTX);
struct Vmod_softpurge_Func {

	/* Functions */
	td_softpurge_softpurge		*softpurge;

	/* Init/Fini */
};
/*lint -esym(754, Vmod_softpurge_Func::*) */

static const struct Vmod_softpurge_Func Vmod_Func ={

	/* Functions */
	vmod_softpurge,

	/* Init/Fini */
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_VOID td_softpurge_softpurge(VRT_CTX);\n"
	"\n"

	"struct Vmod_softpurge_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_softpurge_softpurge		*softpurge;\n"
	"\n"
	"	/* Init/Fini */\n"
	"};\n"
	"static struct Vmod_softpurge_Func Vmod_softpurge_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"softpurge.softpurge\0"
	"Vmod_softpurge_Func.softpurge\0"
	    "VOID\0"
	"\0",

	0
};
/*lint -restore */

/*lint -esym(759, Vmod_softpurge_Data) */
const struct vmod_data Vmod_softpurge_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "softpurge",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "RTTSJSUFHKMNQZXRXOOXITLDNXHISRQE",
};
