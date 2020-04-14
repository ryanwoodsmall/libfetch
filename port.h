#undef  IPPORT_MAX
#define IPPORT_MAX 65535
#undef  EAUTH
#define EAUTH 80
#undef  ENEEDAUTH
#define ENEEDAUTH 81
#undef  __uintptr_t
#define __uintptr_t uintptr_t
#undef  SO_NOSIGPIPE
#define SO_NOSIGPIPE MSG_NOSIGNAL
#undef  INFTIM
#define INFTIM -1
#undef  MAXLOGNAME
#define MAXLOGNAME 33
#undef  TCP_NOPUSH
#define TCP_NOPUSH TCP_CORK
// XXX - ugh
#undef  IP_PORTRANGE
#define IP_PORTRANGE 19
#undef  IP_PORTRANGE_DEFAULT
#define IP_PORTRANGE_DEFAULT 10000
#undef  IP_PORTRANGE_HIGH
#define IP_PORTRANGE_HIGH 49152
