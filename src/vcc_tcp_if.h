/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_tcp_Data;

/* Functions */
VCL_VOID vmod_set_socket_pace(VRT_CTX, VCL_INT);
VCL_VOID vmod_dump_info(VRT_CTX);
VCL_INT vmod_congestion_algorithm(VRT_CTX, VCL_STRING);
VCL_REAL vmod_get_estimated_rtt(VRT_CTX);
