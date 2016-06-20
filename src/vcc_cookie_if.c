/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_cookie_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_VOID td_cookie_parse(VRT_CTX, struct vmod_priv *,
    VCL_STRING);
typedef VCL_VOID td_cookie_clean(VRT_CTX, struct vmod_priv *);
typedef VCL_VOID td_cookie_set(VRT_CTX, struct vmod_priv *, VCL_STRING,
    VCL_STRING);
typedef VCL_STRING td_cookie_get(VRT_CTX, struct vmod_priv *,
    VCL_STRING);
typedef VCL_BOOL td_cookie_isset(VRT_CTX, struct vmod_priv *,
    VCL_STRING);
typedef VCL_VOID td_cookie_delete(VRT_CTX, struct vmod_priv *,
    VCL_STRING);
typedef VCL_VOID td_cookie_filter_except(VRT_CTX, struct vmod_priv *,
    VCL_STRING);
typedef VCL_STRING td_cookie_get_string(VRT_CTX, struct vmod_priv *);
typedef VCL_STRING td_cookie_format_rfc1123(VRT_CTX, VCL_TIME,
    VCL_DURATION);
struct Vmod_cookie_Func {

	/* Functions */
	td_cookie_parse			*parse;
	td_cookie_clean			*clean;
	td_cookie_set			*set;
	td_cookie_get			*get;
	td_cookie_isset			*isset;
	td_cookie_delete		*delete;
	td_cookie_filter_except		*filter_except;
	td_cookie_get_string		*get_string;
	td_cookie_format_rfc1123	*format_rfc1123;

	/* Init/Fini */
};
/*lint -esym(754, Vmod_cookie_Func::*) */

static const struct Vmod_cookie_Func Vmod_Func ={

	/* Functions */
	vmod_parse,
	vmod_clean,
	vmod_set,
	vmod_get,
	vmod_isset,
	vmod_delete,
	vmod_filter_except,
	vmod_get_string,
	vmod_format_rfc1123,

	/* Init/Fini */
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_VOID td_cookie_parse(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_STRING);\n"
	"typedef VCL_VOID td_cookie_clean(VRT_CTX, struct vmod_priv *);\n"
	"typedef VCL_VOID td_cookie_set(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_STRING, VCL_STRING);\n"
	"typedef VCL_STRING td_cookie_get(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_STRING);\n"
	"typedef VCL_BOOL td_cookie_isset(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_STRING);\n"
	"typedef VCL_VOID td_cookie_delete(VRT_CTX, struct vmod_priv *,\n"
	"    VCL_STRING);\n"
	"typedef VCL_VOID td_cookie_filter_except(VRT_CTX,\n"
	"    struct vmod_priv *, VCL_STRING);\n"
	"typedef VCL_STRING td_cookie_get_string(VRT_CTX,\n"
	"    struct vmod_priv *);\n"
	"typedef VCL_STRING td_cookie_format_rfc1123(VRT_CTX, VCL_TIME,\n"
	"    VCL_DURATION);\n"
	"\n"

	"struct Vmod_cookie_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_cookie_parse			*parse;\n"
	"	td_cookie_clean			*clean;\n"
	"	td_cookie_set			*set;\n"
	"	td_cookie_get			*get;\n"
	"	td_cookie_isset			*isset;\n"
	"	td_cookie_delete		*delete;\n"
	"	td_cookie_filter_except		*filter_except;\n"
	"	td_cookie_get_string		*get_string;\n"
	"	td_cookie_format_rfc1123	*format_rfc1123;\n"
	"\n"
	"	/* Init/Fini */\n"
	"};\n"
	"static struct Vmod_cookie_Func Vmod_cookie_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"cookie.parse\0"
	"Vmod_cookie_Func.parse\0"
	    "VOID\0"
		"PRIV_TASK\0"
		"STRING\0"
	"\0",

	"cookie.clean\0"
	"Vmod_cookie_Func.clean\0"
	    "VOID\0"
		"PRIV_TASK\0"
	"\0",

	"cookie.set\0"
	"Vmod_cookie_Func.set\0"
	    "VOID\0"
		"PRIV_TASK\0"
		"STRING\0"
		"STRING\0"
	"\0",

	"cookie.get\0"
	"Vmod_cookie_Func.get\0"
	    "STRING\0"
		"PRIV_TASK\0"
		"STRING\0"
	"\0",

	"cookie.isset\0"
	"Vmod_cookie_Func.isset\0"
	    "BOOL\0"
		"PRIV_TASK\0"
		"STRING\0"
	"\0",

	"cookie.delete\0"
	"Vmod_cookie_Func.delete\0"
	    "VOID\0"
		"PRIV_TASK\0"
		"STRING\0"
	"\0",

	"cookie.filter_except\0"
	"Vmod_cookie_Func.filter_except\0"
	    "VOID\0"
		"PRIV_TASK\0"
		"STRING\0"
	"\0",

	"cookie.get_string\0"
	"Vmod_cookie_Func.get_string\0"
	    "STRING\0"
		"PRIV_TASK\0"
	"\0",

	"cookie.format_rfc1123\0"
	"Vmod_cookie_Func.format_rfc1123\0"
	    "STRING\0"
		"TIME\0"
		"DURATION\0"
	"\0",

	0
};
/*lint -restore */

/*lint -esym(759, Vmod_cookie_Data) */
const struct vmod_data Vmod_cookie_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "cookie",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "VBITLYSXF@OJRVISGHQYSQCHFHKAYLHV",
};
