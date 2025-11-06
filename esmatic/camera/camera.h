/*camera.h*/

#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "iglobals.h"
#include "math.h"
#include "plane.h"
#include "face.h"

#include <gl/GL.h>

class CamWnd : public QWidget {
public:
   CamWnd();
   ~CamWnd();

   int& getCameraId(int& id){
      return id;
   }

   float& getCameraOrigin(float& origin){
      return origin;
   }

   bool& getCameraFreezed(bool& camera){
      return camera == true;
   }

   bool& getCameraLighting(bool& light){
      return light == true;
   }

   //can also use for entities
   bool& getCameraFilterBrush(bool& brush){
      return brush == true;
   }

   bool& getCameraFilterTexture(bool& texture){
      return texture == true;
   }

   bool& getCrossHair(bool& crosshair){
      return crosshair == true;
   }

   float& getCameraColor(float& color){
      return color;
   }

   bool& getCameraSelection(bool& sel){
      return sel == true;
   }

   /*create camera directly*/
   const void createCamera(CamWnd& camera) const;
   /*create camera that can be overriden*/
   const virtual void createCamera(CamWnd& camera) = 0;
   /*camera can be selected with the option of override*/
   virtual bool selectCamera(CamWnd& camera) = 0;
   /*camera draw face*/
   const void drawFace(Face& face) const;
   const virtual void drawFace(Face& face) = 0;
   const void drawPlane(Plane& plane) const;
   const virtual void drawPlane(Plane& plane) = 0;
   const void drawBrush() const;
   const virtual void drawBrush() = 0;


};


#endif
