#include <iostream>
#include "GUI_App.hpp"

class GUI : public GUI_App
{
public:
    virtual void Update() override {

        int   bar_data[11] = { 0, 1, 2, 3, 4, 5, 6 ,7, 8, 9 };
        float x_data[1000] = { 0, 1, 2, 3, 4, 5, 6 ,7, 8, 9 };
        float y_data[1000] = { 0, 1, 2, 3, 4, 5, 6 ,7, 8, 9 };

        ImGui::Begin("My Window");
        if (ImPlot::BeginPlot("My Plot")) {
            ImPlot::PlotBars("My Bar Plot", bar_data, 11);
            ImPlot::PlotLine("My Line Plot", x_data, y_data, 1000);
            ImPlot::EndPlot();
        }
        ImGui::End();
         
        ImGui::ShowStyleEditor();
    }
};


int main(int, char**){
    
    GUI gui;
    while (gui.isRunning()){
        gui.Load();
    }

    return 0;
}

