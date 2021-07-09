#include <cstdio>
#include <cstdlib>
#include <regex>

extern "C" void main(int argc, char** argv) {
  FILE* fp = stdin;
  if (argc >= 2) {
    fp = fopen(argv[1], "r");
    if (fp == nullptr) {
      fprintf(stderr, "failed to open: %s\n", argv[1]);
      exit(1);
    }
  }

  char line[1024];
  while (fgets(line, sizeof(line), fp)) {
    printf("%s", line);
  }
  exit(0);
}
