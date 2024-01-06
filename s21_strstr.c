#include "../Headers/s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  if (haystack == s21_NULL || needle == s21_NULL) {
    return s21_NULL;
  }
  if (!(*needle)) {
    return (char *)haystack;
  }
  while (*haystack) {
    const char *h = haystack;
    const char *n = needle;
    while (*h && *n && (*h == *n)) {
      h++;
      n++;
    }
    if (!(*n)) {
      return (char *)haystack;
    }
    haystack++;
  }
  return s21_NULL;
}