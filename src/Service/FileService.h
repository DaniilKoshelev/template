#ifndef TEST_FILESERVICE_H
#define TEST_FILESERVICE_H

#include "fstream"

namespace Service {
  class FileService {
  private:
    std::ofstream out;

  public:
    void open(const std::string& filename);
    void close();
    void writeString(const std::string &str);
  };
}

#endif
