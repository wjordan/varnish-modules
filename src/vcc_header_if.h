/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_header_Data;

/* Functions */
VCL_VOID vmod_append(VRT_CTX, VCL_HEADER, const char *, ...);
VCL_VOID vmod_remove(VRT_CTX, struct vmod_priv *, VCL_HEADER,
    VCL_STRING);
VCL_STRING vmod_get(VRT_CTX, struct vmod_priv *, VCL_HEADER,
    VCL_STRING);
VCL_VOID vmod_copy(VRT_CTX, VCL_HEADER, VCL_HEADER);
VCL_STRING vmod_version(VRT_CTX);

#ifdef VCL_MET_MAX
vmod_event_f event_function;
#endif
