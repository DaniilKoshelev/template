#ifndef TEST_CONSOLEDISPLAYSERVICE_H
#define TEST_CONSOLEDISPLAYSERVICE_H

#include "DisplayServiceInterface.h"

namespace Service {
  class ConsoleDisplayService: public Service::DisplayServiceInterface {
    void displayError() override;
  };
}

#endif
