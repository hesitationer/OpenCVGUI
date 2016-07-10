#ifndef OpenCVGUI_OGUIButton_h
#define OpenCVGUI_OGUIButton_h

#include "OGUIWidget.h"
#include <functional>


namespace OpenCVGUI {

class OGUIButton : public OGUIWidget {

 public:

    virtual void draw(int x, int y, int width, int height);
    OGUIButton(const char* title);
    void setCallBack(std::function<void()> func);
private:
    const char* title;
    int actual_press_status;
    std::function<void()> btn_click_callback;
};

} /* End of namespace OpenCVGUI */

#endif // OpenCVGUI_OGUIButton_h
