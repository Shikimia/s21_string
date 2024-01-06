#include "../Headers/s21_string.h"

s21_size_t s21_strlen(const char *str) {
  s21_size_t length = 0;
  if (str != s21_NULL) {
    for (; *str; str++) {
      length++;
    }
  }
  return length;
}