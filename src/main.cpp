#include <iostream>
#include "../deps/include/libpng16/png.h"

int main() {
  png_image image{};
  png_image_begin_read_from_file(&image, "stuff");

  std::cout << "hiiiiiii..... bud" << std::endl;
}