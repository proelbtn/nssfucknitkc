#include <string.h>

#include <netdb.h>
#include <sys/socket.h>

#include <nss.h>

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

enum nss_status _nss_fucknitkc_gethostbyaddr2_r(const void *addr, socklen_t len,
                                                int af, struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop,
                                                int32_t *ttlp);

enum nss_status check_nitkc(const char *name) {
  const char *domains[] = {"kisarazu.ac.jp", NULL};
  const char **p = domains;

  while (*p) {
    size_t len = strlen(name);
    size_t tlen = strlen(*p);

    if (strcmp(name + (len - tlen), *p) == 0)
      return NSS_STATUS_UNAVAIL;

    p++;
  }

  return NSS_STATUS_NOTFOUND;
}

enum nss_status _nss_fucknitkc_gethostbyname_r(const char *name,
                                               struct hostent *result,
                                               char *buffer, size_t buflen,
                                               int *errnop, int *h_errnop) {
  return check_nitkc(name);
}

enum nss_status _nss_fucknitkc_gethostbyname2_r(const char *name, int af,
                                                struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop) {
  return check_nitkc(name);
}

enum nss_status _nss_fucknitkc_gethostbyname3_r(const char *name, int af,
                                                struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop,
                                                int32_t *ttlp, char **canonp) {
  return check_nitkc(name);
}

enum nss_status _nss_fucknitkc_gethostbyname4_r(const char *name,
                                                struct gaih_addrtuple **pat,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *herrnop,
                                                int32_t *ttlp) {
  return check_nitkc(name);
}

enum nss_status _nss_fucknitkc_gethostbyaddr_r(const void *addr, socklen_t len,
                                               int af, struct hostent *result,
                                               char *buffer, size_t buflen,
                                               int *errnop, int *h_errnop) {
  return NSS_STATUS_NOTFOUND;
  // return NSS_STATUS_UNAVAIL;
}

enum nss_status _nss_fucknitkc_gethostbyaddr2_r(const void *addr, socklen_t len,
                                                int af, struct hostent *result,
                                                char *buffer, size_t buflen,
                                                int *errnop, int *h_errnop,
                                                int32_t *ttlp) {
  return NSS_STATUS_NOTFOUND;
  // return NSS_STATUS_UNAVAIL;
}
