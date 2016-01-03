#ifndef screen_manager
#define screen_manager

#include <string>
#include <iostream>

class ScreenManager
{
  public:
    ~ScreenManager();
    static ScreenManager &getInstance();

    void setText(std::string text);
    void drawText();

  protected:
  private:
    ScreenManager();
    ScreenManager(ScreenManager const&);
    void operator=(ScreenManager const&);
    std::string txt;
};

#endif
