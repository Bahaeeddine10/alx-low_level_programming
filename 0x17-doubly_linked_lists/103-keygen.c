#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
  char pwd[7], *codex;
  int len = strlen(argv[1]), i, tmp;

  codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

  tmp = (len ^ 59) & 63;
  pwd[0] = codex[tmp];

  tmp = 0;
  for (i = 0; i < len; i++)
    tmp += argv[1][i];
  pwd[1] = codex[(tmp ^ 79) & 63];

  tmp = 1;
  for (i = 0; i < len; i++)
    tmp *= argv[1][i];
  pwd[2] = codex[(tmp ^ 85) & 63];

  tmp = 0;
  for (i = 0; i < len; i++)
  {
    if (argv[1][i] > tmp)
      tmp = argv[1][i];
  }
  srand(tmp ^ 14);
  pwd[3] = codex[rand() & 63];

  tmp = 0;
  for (i = 0; i < len; i++)
    tmp += (argv[1][i] * argv[1][i]);
  pwd[4] = codex[(tmp ^ 239) & 63];

  for (i = 0; i < argv[1][0]; i++)
    tmp = rand();
  pwd[5] = codex[(tmp ^ 229) & 63];

  pwd[6] = '\0';
  printf("%s", pwd);
  return (0);
}
