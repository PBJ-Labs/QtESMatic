/*face.h*/

#ifndef _FACE_H_
#define _FACE_H_

#include "plane/plane.h"

class Face {
public:
  Face();
  ~Face();

  //face points
  auto points[4]; 

  const vec3 bounds;

  //returns the bounds
  const vec3& getBounds(vec3& b){
    return b;
  }

  //returns a face
  const Face& getFace(Face& f){
    return f;  
  }

  //returns the points
  const auto& getPoints(auto& p){
    return p;
  }



};

#endif
