/* See LICENSE file for copyright and license details. */

#define MAX(A, B)               ((A) > (B) ? (A) : (B)) // 1
#define MIN(A, B)               ((A) < (B) ? (A) : (B)) // 1
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B)) // 1

#ifdef _DEBUG
#define DEBUG(...) fprintf(stderr, __VA_ARGS__) // 1
#else
#define DEBUG(...) // 1
#endif

void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
int normalizepath(const char *path, char **normal);
int mkdirp(const char *path);
int parentdir(const char *path, char **parent);
int nullterminate(char **str, size_t *len);
