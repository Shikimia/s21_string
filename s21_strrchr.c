#include "../Headers/s21_string.h"

char *s21_strrchr(const char *str, int c) {
  if (str == s21_NULL) {
    return s21_NULL;
  }
  const char *result = s21_NULL;
  for (; *str; str++) {
    if (*str == (char)c) {
      result = str;
    }
  }
  if (c == 0) result = str;
  return (char *)result;
}