#pragma once

#include <cstdlib>
#include "implot.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <cstdio>
#define GL_SILENCE_DEPRECATION
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h>

#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif


void glfw_error_callback(int error, const char* description);


class GUI_App
{
public:
	GUI_App();
	~GUI_App();
	void Load();
	int isRunning();
	virtual void Update();

	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
private:
	void newFrame();
	void Render();
	GLFWwindow* window;
	bool show_demo_window = true;
	bool show_another_window = false;
};