/* C2 X6 Menu Program from Teach Yourself C by Charles Siegel*/
/* This book copyright 1989 and wasn't up to the newer C standards*/
#include <stdio.h>

int main(int argc, char *argv[])  // int main(intargc, char*argv[]) only needed to accept cmd line args
{                                 //otherwise int main() is fine
char menuopt;
void clrscrn(); //letting the compiler know about this function
void inttoasc();
void asctoint();

menuopt = 'x';
while(menuopt != '3')
  {
    clrscrn();
    printf("\t\tMenu ASCII Table ");
    printf("\n\t\t--------------- ");
    printf("\n\n\n\n");
    printf("\t1. Look up the character for an ASCII number. ");
    printf("\n\n");
    printf("\t2. Look up the ASCII number of a character. ");
    printf("\n\n\t3. Quit! ");
    printf("\n\n\t\tWhat is your choice >  ");
    scanf("\n%c", &menuopt);


    if(menuopt == '1')
      {
      inttoasc();
      }
    else if(menuopt == '2')
      {
        asctoint();
      }
    else if(menuopt == '3')
      {
        clrscrn();
      }
    else
      {
        printf("%c",7);
      }
  } //end of while
    clrscrn();
  return 0;
  } //end of main!


void inttoasc()
{
  int smplint;
  char  again;
  void clrscrn();

  again = 'Y';
  while(again == 'Y' || again == 'y')
    {
      clrscrn();
      printf("\nWhat number do you want the ASCII character of > ");
      scanf("\n%d", &smplint);
      printf("\nThe ASCII character %d is %c .\n", smplint, smplint);
      again = 'x';
      while(again != 'Y' && again != 'y' && again != 'N' && again != 'n')
        {
        printf("\nDo you want to look up another (Y/N)> ");
        scanf("\n%c", &again);
        }
    }


}

void asctoint()
{
  //printf("\nThis is asctoint.");
  char  smplchar, again;
  void clrscrn();

  again = 'Y';
  while(again == 'Y' || again == 'y')
    {
      clrscrn();
      printf("\nWhat character do you want the ASCII value of > ");
      scanf("\n%c", &smplchar);
      printf("\nThe ASCII value of %c is %d .\n", smplchar, smplchar);
      again = 'x';
      while(again != 'Y' && again != 'y' && again != 'N' && again != 'n')
        {
        printf("\nDo you want to look up another (Y/N)> ");
        scanf("\n%c", &again);
        }
    }
}

// clear a 25 line screen -- OLD SCHOOL -- :) :) changed to clear just 5 lines
void clrscrn()
{
  int counter;

  counter = 0;
  while(counter <5)
    {
      printf("\n");
      counter = counter +1;
    }
}
/* added voids and ints to functions and did forward declarations to clear warnings */
