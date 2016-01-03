#include <iostream>
#include "libs/ScreenManager.h"

int main(){
  ScreenManager::getInstance().setText("Test");
  ScreenManager::getInstance().drawText();

  std::cin.get();
  return 0;
}
