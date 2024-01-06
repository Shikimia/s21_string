#include "../Headers/s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *ref = dest;

  while (*ref != '\0') {
    ref++;
  }
  while (n-- > 0 && *src != '\0') {
    *ref++ = *src++;
  }
  *ref = '\0';
  return dest;
}
