#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(2, "rus");
    int num;
    int fir, sec, thir, secthir;
    printf("Введите число от 100 до 999:\n");
    printf("num = ");
    scanf_s("%d", &num);
    fir = num / 100;
    sec = (num / 10) % 10;
    thir = num % 10;
    secthir = num % 100;
    switch (fir)
    {
      case 1: printf("Сто "); break;
      case 2: printf("Двести "); break;
      case 3: printf("Триста "); break;
      case 4: printf("Четыреста "); break;
      case 5: printf("Пятьсот "); break;
      case 6: printf("Шестьсот "); break;
      case 7: printf("Семьсот "); break;
      case 8: printf("Восемьсот "); break;
      case 9: printf("Девятьсот "); break;
    }
    switch (sec)
    {
      case 1 :
          switch (secthir)
          {
            case 10: printf("десять"); break;
            case 11: printf("одиннадцать"); break;
            case 12: printf("двенадцать"); break;
            case 13: printf("тринадцать"); break;
            case 14: printf("четырнадцать"); break;
            case 15: printf("пятнадцать"); break;
            case 16: printf("шестнадцать"); break;
            case 17: printf("семнадцать"); break;
            case 18: printf("восемнадцать"); break;
            case 19: printf("девятнадцать"); break;
          } break;
      case 2: printf("двадцать "); goto here;
      case 3: printf("тридцать "); goto here;
      case 4: printf("сорок "); goto here;
      case 5: printf("пятьдесят "); goto here;
      case 6: printf("шестьдесят "); goto here;
      case 7: printf("семьдесят "); goto here;
      case 8: printf("восемьдесят "); goto here;
      case 9: printf("девяносто "); goto here;
      here: switch (thir)
      {
      case 1: printf("один"); break;
      case 2: printf("два"); break;
      case 3: printf("три"); break;
      case 4: printf("четыре"); break;
      case 5: printf("пять"); break;
      case 6: printf("шесть"); break;
      case 7: printf("семь"); break;
      case 8: printf("восемь"); break;
      case 9: printf("девять"); break;
      }break;
    }
    return 0;
}