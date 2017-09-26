#include <stdio.h>
#include <stdlib.h>
#include "Student.h"

int main()
{
	char c;
    while (1) {

      printf("Hay nhap ten sinh vien\n");
      char name[100];
			fgets (name, 100, stdin);


			printf("Hay nhap diem cua sinh vien ");
			int mark;
			scanf("%d",&mark);

			bool isMale;
			printf("Neu la nam go 1\n");
			int gender;
      scanf("%d", &gender);

      if (gender == 1) {
				isMale = true;
      } else {
      	isMale = false;
      }

      printf("Go y de nhap tiep: ");

			while(getchar() != '\n') continue;

			scanf("%c", &c);
			if (c != 'y') {
        break;
			}

			while(getchar() != '\n') continue;


    }
    return 0;
}
