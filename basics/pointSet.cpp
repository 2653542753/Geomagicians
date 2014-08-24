#include "pointSet.h"
#include "lmath.h"
#include <iostream>

int PointSet::addPoint(LongInt x1, LongInt y1){
	struct MyPoint thisPoint;
	thisPoint.x = x1;
	thisPoint.y = y1;
	thisPoint.z = 0;

	myPoints.push_back(thisPoint);
	return (myPoints.size());
}

int PointSet::inCircle(int p1Idx, int p2Idx, int p3Idx, int pIdx) {
	MyPoint a = this->myPoints.at(p1Idx-1);
	MyPoint b = this->myPoints.at(p2Idx-1);
	MyPoint c = this->myPoints.at(p3Idx-1);
	MyPoint p = this->myPoints.at(pIdx-1);

	int det1 = signDet(a.x, a.y, 1,
		b.x, b.y, 1,
		c.x, c.y,1);
	int det2 = signDet(a.x - p.x, a.y - p.y, (a.x*a.x - p.x*p.x)+(a.y*a.y - p.y*p.y),
		b.x - p.x, b.y - p.y, (b.x*b.x - p.x*p.x)+(b.y*b.y - p.y*p.y),
		c.x - p.x, c.y - p.y, (c.x*c.x - p.x*p.x)+(c.y*c.y - p.y*p.y));
	return det1*det2;
}

int PointSet::inTri(int p1Idx, int p2Idx, int p3Idx, int pIdx) {
	return 0;
				
}