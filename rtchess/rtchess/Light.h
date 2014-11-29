#ifndef _LIGHT_H_
#define _LIGHT_H_

#include "Vector3d.h"
#include "Shape.h"

class Light: public Sphere
{
public:	
	Light(Vector3d& position, double radius, Material& material): 
		Sphere(position, radius, material) { }
	~Light() {  }
};

#endif