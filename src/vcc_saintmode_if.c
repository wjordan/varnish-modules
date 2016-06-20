/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_saintmode_if.h"
#include "vmod_abi.h"

/* Object saintmode */
struct vmod_saintmode_saintmode;
typedef VCL_VOID td_saintmode_saintmode__init(VRT_CTX,
    struct vmod_saintmode_saintmode **, const char *, struct vmod_priv *,
    VCL_BACKEND, VCL_INT);
typedef VCL_VOID td_saintmode_saintmode__fini(
    struct vmod_saintmode_saintmode **);
typedef VCL_BACKEND td_saintmode_saintmode_backend(VRT_CTX,
    struct vmod_saintmode_saintmode *);
/* Functions */
typedef VCL_VOID td_saintmode_blacklist(VRT_CTX, struct vmod_priv *,
    VCL_DURATION);
struct Vmod_saintmode_Func {
	/* Object saintmode */
	td_saintmode_saintmode__init	*saintmode__init;
	td_saintmode_saintmode__fini	*saintmode__fini;
	td_saintmode_saintmode_backend	*saintmode_backend;

	/* Functions */
	td_saintmode_blacklist		*blacklist;

	/* Init/Fini */
};
/*lint -esym(754, Vmod_saintmode_Func::*) */

static const struct Vmod_saintmode_Func Vmod_Func ={
	/* Object saintmode */
	vmod_saintmode__init,
	vmod_saintmode__fini,
	vmod_saintmode_backend,

	/* Functions */
	vmod_blacklist,

	/* Init/Fini */
};

static const char Vmod_Proto[] =
	"/* Object saintmode */\n"
	"struct vmod_saintmode_saintmode;\n"
	"typedef VCL_VOID td_saintmode_saintmode__init(VRT_CTX,\n"
	"    struct vmod_saintmode_saintmode **, const char *,\n"
	"    struct vmod_priv *, VCL_BACKEND, VCL_INT);\n"
	"typedef VCL_VOID td_saintmode_saintmode__fini(\n"
	"    struct vmod_saintmode_saintmode **);\n"
	"typedef VCL_BACKEND td_saintmode_saintmode_backend(VRT_CTX,\n"
	"    struct vmod_saintmode_saintmode *);\n"
	"/* Functions */\n"
	"typedef VCL_VOID td_saintmode_blacklist(VRT_CTX,\n"
	"    struct vmod_priv *, VCL_DURATION);\n"
	"\n"

	"struct Vmod_saintmode_Func {\n"
	"	/* Object saintmode */\n"
	"	td_saintmode_saintmode__init	*saintmode__init;\n"
	"	td_saintmode_saintmode__fini	*saintmode__fini;\n"
	"	td_saintmode_saintmode_backend	*saintmode_backend;\n"
	"\n"
	"	/* Functions */\n"
	"	td_saintmode_blacklist		*blacklist;\n"
	"\n"
	"	/* Init/Fini */\n"
	"};\n"
	"static struct Vmod_saintmode_Func Vmod_saintmode_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Object saintmode */
	"$OBJ\0"
		"saintmode.saintmode\0"
		"Vmod_saintmode_Func.saintmode__init\0"
		    "VOID\0"
			"PRIV_VCL\0"
			"BACKEND\0"
		    "\1backend\0"
			"INT\0"
		    "\1threshold\0"
		"\0"
		"struct vmod_saintmode_saintmode\0"
		"saintmode.saintmode\0"
		"Vmod_saintmode_Func.saintmode__fini\0"
		    "VOID\0"
		"\0"
		"saintmode.saintmode.backend\0"
		"Vmod_saintmode_Func.saintmode_backend\0"
		    "BACKEND\0"
		"\0"
	"\0",

	/* Functions */
	"saintmode.blacklist\0"
	"Vmod_saintmode_Func.blacklist\0"
	    "VOID\0"
		"PRIV_VCL\0"
		"DURATION\0"
		    "\1expires\0"
	"\0",

	0
};
/*lint -restore */

/*lint -esym(759, Vmod_saintmode_Data) */
const struct vmod_data Vmod_saintmode_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "saintmode",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "@LASZNOPYSBUKTRFXZVJQUBWBLDQTANI",
};
