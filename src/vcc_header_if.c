/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_header_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_VOID td_header_append(VRT_CTX, VCL_HEADER, const char *,
    ...);
typedef VCL_VOID td_header_remove(VRT_CTX, struct vmod_priv *,
    VCL_HEADER, VCL_STRING);
typedef VCL_STRING td_header_get(VRT_CTX, struct vmod_priv *,
    VCL_HEADER, VCL_STRING);
typedef VCL_VOID td_header_copy(VRT_CTX, VCL_HEADER, VCL_HEADER);
typedef VCL_STRING td_header_version(VRT_CTX);
struct Vmod_header_Func {

	/* Functions */
	td_header_append		*append;
	td_header_remove		*remove;
	td_header_get			*get;
	td_header_copy			*copy;
	td_header_version		*version;

	/* Init/Fini */
	vmod_event_f	*_event;
};
/*lint -esym(754, Vmod_header_Func::*) */

static const struct Vmod_header_Func Vmod_Func ={

	/* Functions */
	vmod_append,
	vmod_remove,
	vmod_get,
	vmod_copy,
	vmod_version,

	/* Init/Fini */
	event_function,
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_VOID td_header_append(VRT_CTX, VCL_HEADER,\n"
	"    const char *, ...);\n"
	"typedef VCL_VOID td_header_remove(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_HEADER, VCL_STRING);\n"
	"typedef VCL_STRING td_header_get(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_HEADER, VCL_STRING);\n"
	"typedef VCL_VOID td_header_copy(VRT_CTX, VCL_HEADER,\n"
	"    VCL_HEADER);\n"
	"typedef VCL_STRING td_header_version(VRT_CTX);\n"
	"\n"

	"struct Vmod_header_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_header_append		*append;\n"
	"	td_header_remove		*remove;\n"
	"	td_header_get			*get;\n"
	"	td_header_copy			*copy;\n"
	"	td_header_version		*version;\n"
	"\n"
	"	/* Init/Fini */\n"
	"	vmod_event_f	*_event;\n"
	"};\n"
	"static struct Vmod_header_Func Vmod_header_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"header.append\0"
	"Vmod_header_Func.append\0"
	    "VOID\0"
		"HEADER\0"
		"STRING_LIST\0"
	"\0",

	"header.remove\0"
	"Vmod_header_Func.remove\0"
	    "VOID\0"
		"PRIV_CALL\0"
		"HEADER\0"
		"STRING\0"
	"\0",

	"header.get\0"
	"Vmod_header_Func.get\0"
	    "STRING\0"
		"PRIV_CALL\0"
		"HEADER\0"
		"STRING\0"
	"\0",

	"header.copy\0"
	"Vmod_header_Func.copy\0"
	    "VOID\0"
		"HEADER\0"
		"HEADER\0"
	"\0",

	"header.version\0"
	"Vmod_header_Func.version\0"
	    "STRING\0"
	"\0",

	/* Init/Fini */
	"$EVENT\0Vmod_header_Func._event",
	0
};
/*lint -restore */

/*lint -esym(759, Vmod_header_Data) */
const struct vmod_data Vmod_header_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "header",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "PKNIJRNJFOMAOHTIPYKXABPFVKJQHWXP",
};
