/* Bai tap 1_12 - Chuong trinh Piano don gian */
#include <stdio.h>
#include <dos.h>
#include <ctype.h>

void main()
{
  char c;

  printf("\nNhan cac phim A, B, C, D, E, F, G de choi cac not nhac.");
  printf("\nNhan phim ESC de ket thuc.");
  do {
    c = toupper(getch());
    switch(c)
    {
      case 'A' : sound(440);
                 break;
      case 'B' : sound(494);
                 break;
      case 'C' : sound(523);
                 break;
      case 'D' : sound(587);
                 break;
      case 'E' : sound(659);
                 break;
      case 'F' : sound(698);
                 break;
      case 'G' : sound(784);
                 break;
    }
    delay(100);
    nosound();
  } while (c != 27);
}
