#include <iostream>

#include <format>

auto main(int argc, char *argv[], char *envp[]) -> int {
  std::cout << std::format("{}\n", "mezze");
  std::exit(EXIT_SUCCESS);
}