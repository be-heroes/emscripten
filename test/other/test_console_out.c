#include <emscripten/console.h>

int main(int argc, char** argv) {
  // Basic variants
  emscripten_err("this is err");
  emscripten_out("this is out");
  emscripten_dbg("this is dbg");

  // Formatting variants
  emscripten_errf("this is err: %d", argc);
  emscripten_outf("this is out: %d", argc + 1);
  emscripten_dbgf("this is dbg: %d", argc + 2);

  // Length-taking variants
  emscripten_errn("hello err", 3);
  emscripten_outn("hello out", 4);
  emscripten_dbgn("hello dbg", 5);
  return 0;
}
