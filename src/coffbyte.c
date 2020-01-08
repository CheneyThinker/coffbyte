#include "../include/coffbyte.h"

int main(int argc, char** argv)
{
  if (!strcasecmp(argv[1], "--analyzer")) {
    return coffbyte_analyzer(argc, argv);
  } else if (!strcasecmp(argv[1], "--generator")) {
    return coffbyte_generator(argc, argv);
  }
  return 0;
}
