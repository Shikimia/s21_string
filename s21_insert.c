#include <stdlib.h>

#include "../Headers/s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  char *result = s21_NULL;
  s21_size_t src_length = s21_strlen(src);
  s21_size_t str_length = s21_strlen(str);
  if (src != s21_NULL && start_index <= src_length) {
    if (str == s21_NULL) {
      result = calloc(src_length + 1, sizeof(char));
      if (result != s21_NULL) s21_strcpy(result, src);
    } else {
      result = calloc(src_length + str_length + 1, sizeof(char));
      if (result != s21_NULL) {
        s21_strncpy(result, src, start_index);
        result = result + start_index;
        src = src + start_index;
        s21_strcpy(result, str);
        result = result + str_length;
        s21_strcpy(result, src);
        result = result - str_length - start_index;
      }
    }
  }
  return result;
}
