#include "../Headers/s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  const char *first_occur = s21_strpbrk(str1, str2);
  return first_occur != s21_NULL ? (s21_size_t)(first_occur - str1)
                                 : s21_strlen(str1);
}