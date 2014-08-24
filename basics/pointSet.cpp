#include "pointSet.h"

int PointSet::addPoint(LongInt x1, LongInt y1){
	struct MyPoint thisPoint;
	thisPoint.x = x1;
	thisPoint.y = y1;
	thisPoint.z = 0;

	myPoints.push_back(thisPoint);
	return (myPoints.size());
}

int PointSet::inCircle(int p1Idx, int p2Idx, int p3Idx, int pIdx) {
				// dummy function
				return 0;
}


int PointSet::inTri(int p1Idx, int p2Idx, int p3Idx, int pIdx) {
				// dummy function
				return 0;
}