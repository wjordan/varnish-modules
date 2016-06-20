/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

struct vmod_priv;

extern const struct vmod_data Vmod_saintmode_Data;

/* Object saintmode */
struct vmod_saintmode_saintmode;
VCL_VOID vmod_saintmode__init(VRT_CTX,
    struct vmod_saintmode_saintmode **, const char *, struct vmod_priv *,
    VCL_BACKEND, VCL_INT);
VCL_VOID vmod_saintmode__fini(struct vmod_saintmode_saintmode **);
VCL_BACKEND vmod_saintmode_backend(VRT_CTX,
    struct vmod_saintmode_saintmode *);

/* Functions */
VCL_VOID vmod_blacklist(VRT_CTX, struct vmod_priv *, VCL_DURATION);
