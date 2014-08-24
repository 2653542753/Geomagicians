#include "li.h"
#include "lmath.h"

int signDet(LongInt x1, LongInt y1, LongInt w1,
			LongInt x2, LongInt y2, LongInt w2,
			LongInt x3, LongInt y3, LongInt w3){	
				return det3D(x1,y1,w1,
					x2,y2,w2,
					x3,y3,w3).sign();
}

int signDet(LongInt x[3][3]){
	return det3D(x[0][0],x[0][1],x[0][2],
		x[1][0],x[1][1],x[1][2],
		x[2][0],x[2][1],x[2][2]).sign();
}

LongInt det3D(LongInt x1, LongInt y1, LongInt w1,
			  LongInt x2, LongInt y2, LongInt w2,
			  LongInt x3, LongInt y3, LongInt w3){
				  LongInt det = x1*y2*w3 + x2*y3*w1 + x3*y1*w2 - x1*y3*w2 - x2*y1*w3 - x3*y2*w1;
				  return det;
}

int signDet2D(LongInt ax, LongInt ay, LongInt bx, LongInt by){
	LongInt det = ax*by - ay*bx;
	return det.sign();
}