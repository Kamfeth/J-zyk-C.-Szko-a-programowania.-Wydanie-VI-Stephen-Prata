#include <stdio.h>

struct Person
{
  char firstName[21];
  char middleName[21];
  char lastName[41];
};

struct PersonalInformations
{
  char PESEL[12];
  struct Person person;
};

void printPersonalInformations(const struct PersonalInformations personalInformations)
{
    printf("%s, %s ", personalInformations.person.lastName, personalInformations.person.firstName);
    if (personalInformations.person.middleName[0] != '\0')
      printf("%c. ", personalInformations.person.middleName[0]);
    printf("-- %s\n", personalInformations.PESEL);
}

int main(void)
{
  struct PersonalInformations personalInformations[] =
  {
    {"99022831895", {"Michael", "Jeffrey", "Jordan"}},
    {"63072673129", {"Martyna", "", "Pomidor"}},
    {"53091095792", {"Filip", "Marcin", "Kiepski"}}
  };
  printf("Oto informacje na temat wszystkich zapisanych osób:\n\n");
  for (int i = 0; i < 3; i++)
    printPersonalInformations(personalInformations[i]);
}