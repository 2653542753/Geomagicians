#!/usr/bin/env python2

import numpy as np
from sympy.geometry import Point, Triangle,Line, intersection


fd = open("input6.txt")
lines = fd.readlines()
fd.close()

points = {}

def onbounds(p,a,b,c):
    if Line(a,b).contains(p) or Line(b,c).contains(p) or Line(c,a).contains(p):
        return True
    return False

def incircle( p,a,b,c):
    p = points[p]
    a = points[a]
    b = points[b]
    c = points[c]
    t = Triangle(a,b,c)

    if hasattr(t, "circumcircle") and t.circumcircle.encloses_point( p ):
        return 1
    if  hasattr(t, "circumcircle") and intersection(t.circumcenter,p): #and t.circumcenter.distance(p) == t.circumradius:
        return 0
    return -1

def intri( p,a,b,c):
    p = points[p]
    a = points[a]
    b = points[b]
    c = points[c]
    t = Triangle(a,b,c)

    if hasattr(t, "encloses_point") and t.encloses_point( p ):
        return 1
    if onbounds(p,a,b,c):
        return 0
    return -1

for line in lines:
    line = line.split()
    if line[1] == "AP":
        points[len(points)+1] = Point( long(line[2]),long(line[3]) )


    if line[1] == "IT":
        print line[0], intri(int(line[2]),
                             int(line[3]),
                             int(line[4]),
                             int(line[5]))

    if line[1] == "IC":
        print line[0], incircle(int(line[2]),
                                int(line[3]),
                                int(line[4]),
                                int(line[5]))
