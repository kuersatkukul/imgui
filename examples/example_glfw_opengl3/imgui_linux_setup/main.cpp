#include "Application.h"

int main(int, char**)
{
    //const std::string& p_appName, const int p_windowWidth, const int p_windowHeight, const bool p_showDemoWindow = false)
    Application app("Dispatcher Helper v0.1", 1600, 720, false);
    app.init();
    app.run();
}
