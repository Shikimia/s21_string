#include "../Headers/s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *res = dest;

  while (n--) {
    if (*src) {
      *dest++ = *src++;
    } else {
      *dest++ = '\0';
    }
  }

  return res;
}
