#include <stdlib.h>

#include "../Headers/s21_string.h"

void *s21_to_upper(const char *str) {
  char *result = s21_NULL;

  if (str == s21_NULL) {
    result = s21_NULL;
  } else if (str != s21_NULL) {
    size_t length = 0;
    while (str[length] != '\0') {
      length++;
    }
    result = (char *)malloc(length + 1);
    if (result == s21_NULL) {
      result = s21_NULL;
    } else {
      for (size_t i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
          result[i] = str[i] - ('a' - 'A');
        } else {
          result[i] = str[i];
        }
      }
      result[length] = '\0';
    }
  }
  return result;
}
