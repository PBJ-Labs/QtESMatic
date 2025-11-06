/*camera.cpp*/

#include "camera.h"

//============
// globals
int g_nCameraId = 0;
float g_fOrigin[3] = { 0.0f, 0.0f, 0.0f };
bool g_bFreeze = false;
bool g_bBakeLight = false;
bool g_bFakeLight = false;
bool g_bFilterBrushes = false;
bool g_bFilterEntities = false;
bool g_bFilterTextures = false;

QESGlobals* g_pGetWidget(){};

CamWnd::CamWnd() : QWidget(g_pGetWidget()->d_GLRectangle)
{

}
