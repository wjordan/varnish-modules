/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_vsthrottle_Data;

/* Functions */
VCL_BOOL vmod_is_denied(VRT_CTX, VCL_STRING, VCL_INT, VCL_DURATION);

#ifdef VCL_MET_MAX
vmod_event_f event_function;
#endif
