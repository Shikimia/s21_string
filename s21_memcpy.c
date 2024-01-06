#include "../Headers/s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  if (dest != s21_NULL && src != NULL) {
    char *copied = (char *)dest;
    const char *sourse = (const char *)src;

    while (n--) {
      *copied++ = *sourse++;
    }
  }
  return dest;
}