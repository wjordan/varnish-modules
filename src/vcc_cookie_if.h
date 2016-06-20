/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_cookie_Data;

/* Functions */
VCL_VOID vmod_parse(VRT_CTX, struct vmod_priv *, VCL_STRING);
VCL_VOID vmod_clean(VRT_CTX, struct vmod_priv *);
VCL_VOID vmod_set(VRT_CTX, struct vmod_priv *, VCL_STRING, VCL_STRING);
VCL_STRING vmod_get(VRT_CTX, struct vmod_priv *, VCL_STRING);
VCL_BOOL vmod_isset(VRT_CTX, struct vmod_priv *, VCL_STRING);
VCL_VOID vmod_delete(VRT_CTX, struct vmod_priv *, VCL_STRING);
VCL_VOID vmod_filter_except(VRT_CTX, struct vmod_priv *, VCL_STRING);
VCL_STRING vmod_get_string(VRT_CTX, struct vmod_priv *);
VCL_STRING vmod_format_rfc1123(VRT_CTX, VCL_TIME, VCL_DURATION);
