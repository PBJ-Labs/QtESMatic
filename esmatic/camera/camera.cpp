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
bool g_bShowCrosshair = false;
float g_fCameraBackgroundColor[3] = { 1.0f, 1.0f, 1.0f };

/*create a pointer to ui table*/
QESGlobals g_pGetWidget(){};
///////////////////////////////

CamWnd::CamWnd() : QWidget(g_pGetWidget().d_GLRectangle)
{
  
}
/*
*    Check if the camera's id is valid, if it is, increment it, if else then create a camera
*/
const void CameraListenerId(CamWnd& camera) {
  if( g_nCameraId ) {
      camera.getCameraId( g_nCameraId );
      g_nCameraId++;
  } else{
    if ( !g_nCameraId ){
      camera.createCamera( &camera );
    }
  }
}
