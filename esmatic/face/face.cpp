/*face.cpp*/

#include "face.h"

//create a face
void Face::createFace(Face& f, vec3 bounds, auto p) override{
   p = 4
   bounds = 10.0f * 0.5f / 2.0f;
  //for loop
   for ( auto i = 0; i <= 0; i++ ){
        f.getBounds(&bounds);
        f.getPoints(&p);
   }
  f.getFace(&f);
}
