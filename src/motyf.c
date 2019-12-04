#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  unsigned short int month;
} Date;

void setMonth(Date *self, int i)
{
  self->month = i % 12;
}

char* getMonthName(Date *self)
{
  switch (self->month)
  {
    case 1:
      return "January";
      break;
    case 2:
      return "February";
      break;
    case 3:
      return "March";
      break;
    case 4:
      return "April";
      break;
    case 5:
      return "May";
      break;
    case 6:
      return "June";
      break;
    case 7:
      return "July";
      break;
    case 8:
      return "August";
      break;
    case 9:
      return "September";
      break;
    case 10:
      return "October";
      break;
    case 11:
      return "November";
      break;
    case 12:
      return "December";
      break;
    default:
      return "ERROR";
  }
}

int main(int argc, char **argv)
{
  unsigned short int month;
  char *endptr;
  Date now;
  if(argc > 0)
  {
     int i;
     for(i=1; i<argc; i++)
     {
        setMonth(&now, strtol(argv[i], &endptr, 10));
        printf("%s\n", getMonthName(&now));
     }
  }
  else
  {
     scanf("%u", &month);
     setMonth(&now, month);
     printf("%s\n", getMonthName(&now));
  }

  return 0;
}
