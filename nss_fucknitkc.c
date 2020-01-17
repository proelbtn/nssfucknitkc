enum nss_status _nss_fucknitkc_gethostbyname_r(const char *name,
                                               struct hostent *result,
                                               char *buffer, size_t buflen,
                                               int *errnop, int *h_errnop);

enum nss_status _nss_fucknitkc_gethostbyname2_r(const char *name, int af,
                                                struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop);

enum nss_status _nss_fucknitkc_gethostbyname3_r(const char *name, int af,
                                                struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop,
                                                int32_t *ttlp, char **canonp);

enum nss_status _nss_fucknitkc_gethostbyname4_r(const char *name,
                                                struct gaih_addrtuple **pat,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *herrnop,
                                                int32_t *ttlp);

enum nss_status _nss_fucknitkc_gethostbyaddr_r(const void *addr, socklen_t len,
                                               int af, struct hostent *result,
                                               char *buffer, size_t buflen,
                                               int *errnop, int *h_errnop);

extern enum nss_status _nss_fucknitkc_gethostbyaddr2_r(
    const void *addr, socklen_t len, int af, struct hostent *result,
    char *buffer, size_t buflen, int *errnop, int *h_errnop, int32_t *ttlp);
