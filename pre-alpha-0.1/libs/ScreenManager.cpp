#include "ScreenManager.h"

ScreenManager &ScreenManager::getInstance(){
  static ScreenManager instance;
  return instance;
}

ScreenManager::ScreenManager(){

}

ScreenManager::~ScreenManager(){

}

void ScreenManager::setText(std::string text){
  this->txt = text;
}

void ScreenManager::drawText(){
  std::cout<<txt<<std::endl;
}
