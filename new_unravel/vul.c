int bof(char*);

unsigned int xormask = 0xBE;
int i, length;

int bof (char * badfile) {
  char buffer[12];
  length = strlen(badfile);
  for (i = 0; i < length; i++) {
      buffer[i]=badfile[i];
  }
  return 1;
}

int main (int argc, char **argv) {
  bof (argv[1]);
  printf ("Returned Properly\n");
  return 1;
}

