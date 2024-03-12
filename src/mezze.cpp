#include "mezze.hpp"

auto mezze::EntrancePoint(int argc, char *argv[], char *envp[]) -> int {
  std::cout << std::format("{}\n", "mezze");
  std::exit(EXIT_SUCCESS);
}