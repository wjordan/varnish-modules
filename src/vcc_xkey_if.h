/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_xkey_Data;

/* Functions */
VCL_INT vmod_purge(VRT_CTX, VCL_STRING);
VCL_INT vmod_softpurge(VRT_CTX, VCL_STRING);

#ifdef VCL_MET_MAX
vmod_event_f vmod_event;
#endif
