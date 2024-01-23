#include "s21_decimal.h"

int s21_copy(s21_decimal value, s21_decimal *result) {
  for (int i = 0; i < DECIMAL_SIZE; ++i) {
    (*result).bits[i] = value.bits[i];
  }
  return OK;
}
