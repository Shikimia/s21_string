#include "../Headers/s21_string.h"

char *s21_strerror(int errnum) {
  char *result = s21_NULL;
  char *errors[] = ERR_LIST;
  static char buf[100];
  if (errnum >= 0 && errnum < N) {
    result = errors[errnum];
  } else {
    if (!OS) {
      char *prefix = "Unknown error ";
      s21_sprintf(buf, "%s%d", prefix, errnum);
    } else if (OS) {
      char *prefix = "Unknown error: ";
      s21_sprintf(buf, "%s%d", prefix, errnum);
    }
  }
  return result == s21_NULL ? buf : result;
}