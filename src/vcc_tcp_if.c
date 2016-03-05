/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_tcp_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_VOID td_tcp_set_socket_pace(VRT_CTX, VCL_INT);
typedef VCL_VOID td_tcp_dump_info(VRT_CTX);
typedef VCL_INT td_tcp_congestion_algorithm(VRT_CTX, VCL_STRING);
typedef VCL_REAL td_tcp_get_estimated_rtt(VRT_CTX);
struct Vmod_tcp_Func {

	/* Functions */
	td_tcp_set_socket_pace		*set_socket_pace;
	td_tcp_dump_info		*dump_info;
	td_tcp_congestion_algorithm	*congestion_algorithm;
	td_tcp_get_estimated_rtt	*get_estimated_rtt;

	/* Init/Fini */
};
/*lint -esym(754, Vmod_tcp_Func::*) */

static const struct Vmod_tcp_Func Vmod_Func ={

	/* Functions */
	vmod_set_socket_pace,
	vmod_dump_info,
	vmod_congestion_algorithm,
	vmod_get_estimated_rtt,

	/* Init/Fini */
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_VOID td_tcp_set_socket_pace(VRT_CTX, VCL_INT);\n"
	"typedef VCL_VOID td_tcp_dump_info(VRT_CTX);\n"
	"typedef VCL_INT td_tcp_congestion_algorithm(VRT_CTX,\n"
	"    VCL_STRING);\n"
	"typedef VCL_REAL td_tcp_get_estimated_rtt(VRT_CTX);\n"
	"\n"

	"struct Vmod_tcp_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_tcp_set_socket_pace		*set_socket_pace;\n"
	"	td_tcp_dump_info		*dump_info;\n"
	"	td_tcp_congestion_algorithm	*congestion_algorithm;\n"
	"	td_tcp_get_estimated_rtt	*get_estimated_rtt;\n"
	"\n"
	"	/* Init/Fini */\n"
	"};\n"
	"static struct Vmod_tcp_Func Vmod_tcp_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"tcp.set_socket_pace\0"
	"Vmod_tcp_Func.set_socket_pace\0"
	    "VOID\0"
		"INT\0"
	"\0",

	"tcp.dump_info\0"
	"Vmod_tcp_Func.dump_info\0"
	    "VOID\0"
	"\0",

	"tcp.congestion_algorithm\0"
	"Vmod_tcp_Func.congestion_algorithm\0"
	    "INT\0"
		"STRING\0"
	"\0",

	"tcp.get_estimated_rtt\0"
	"Vmod_tcp_Func.get_estimated_rtt\0"
	    "REAL\0"
	"\0",

	0
};
/*lint -restore */

/*lint -esym(759, Vmod_tcp_Data) */
const struct vmod_data Vmod_tcp_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "tcp",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "XN@BBMEOWPGFBLVPQCQWMHZWLJFWQXV@",
};
