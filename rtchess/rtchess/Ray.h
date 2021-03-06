#ifndef _RAY_H_
#define _RAY_H_

#include "Vector3d.h"
class Ray	
{
public:
	Ray(Point& start, Vector3d& direction) : start_(start), direction_(direction.normalize()) { }
	~Ray(void) { }
	
	Point getStart() const { return start_; } 
	Vector3d getDir() const { return direction_; } 

private:
	Point start_;
	Vector3d direction_;
};

#endif