#include "../Headers/s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *result = s21_NULL;
  int flag = 0;
  for (; *str1 && !flag; str1++) {
    for (const char *ptr2 = str2; *ptr2; ptr2++) {
      if (*str1 == *ptr2) {
        result = (char *)str1;
        flag = 1;
        break;
      }
    }
  }
  return result;
}