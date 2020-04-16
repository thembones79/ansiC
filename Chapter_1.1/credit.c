#include <stdio.h>
#include <cs50.h>

long getPositiveLong(string promptValue);
int countDigits(long cardNumber);

int main(void)
{
  long cardNumber = getPositiveLong("Number: ");
  printf("%i\n", countDigits(cardNumber));
}

long getPositiveLong(string promptText)
{
  long positive;
  do
  {
    positive = get_long("%s", promptText);
  } while (positive < 0);
  return positive;
}

int countDigits(long cardNumber)
{
  int counter = 0;
  int reminder = 0;

  while (cardNumber > 0)
  {
    reminder = cardNumber % 10;
    cardNumber = cardNumber / 10;
    counter++;
    printf("%i digit is %i\n", counter, reminder);
  }

  return counter;
}
