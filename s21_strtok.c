#include "../Headers/s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *last = s21_NULL;
  if (!delim) {
    return s21_NULL;
  }

  if (!str) {
    if (!last) {
      return s21_NULL;
    }  // Если нет строки для продолжения, возвращаем s21_NULL
    str = last;
  }

  // Пропуск начальных разделителей
  str += s21_strcspn(str, delim);
  if (*str == '\0') {
    last = s21_NULL;  // Обновляем last, если достигли конца строки
    return s21_NULL;  // Токены закончились
  }

  // Находим конец текущего токена
  char *end = s21_strpbrk(str, delim);
  if (end) {
    *end = '\0';  // Заменяем разделитель на нулевой символ
    last = end + 1;  // Сохраняем позицию следующего символа после разделителя
  } else {
    last = s21_NULL;  // Если разделителей больше нет, сбрасываем last
  }

  return str;  // Возвращаем начало текущего токена
}