#include <stdlib.h>

#include "../Headers/s21_string.h"

void *s21_to_lower(const char *str) {
  char *result = s21_NULL;

  if (str == s21_NULL) {
    return s21_NULL;
  } else if (str != s21_NULL) {
    size_t length = 0;
    while (str[length] != '\0') {
      length++;
    }
    result = (char *)malloc(length + 1);
    if (result == s21_NULL) {
      result = s21_NULL;
    }
    for (size_t i = 0; i < length; i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        result[i] = str[i] + ('a' - 'A');
      } else {
        result[i] = str[i];
      }
    }
    result[length] = '\0';
  }
  return result;
}