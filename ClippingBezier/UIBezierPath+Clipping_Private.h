//
//  UIBezierPath+Clipping.h
//  DrawKit-iOS
//
//  Created by Adam Wulf on 9/10/13.
//  Copyright (c) 2013 Milestone Made LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBezierPath (Clipping_Private)

// for tests

+(NSArray*) redAndBlueSegmentsForShapeBuildingCreatedFrom:(UIBezierPath*)shapePath bySlicingWithPath:(UIBezierPath*)scissorPath andNumberOfBlueShellSegments:(NSUInteger*)numberOfBlueShellSegments;

-(DKUIBezierPathClippingResult*) clipUnclosedPathToClosedPath:(UIBezierPath*)closedPath usingIntersectionPoints:(NSArray*)intersectionPoints andBeginsInside:(BOOL)beginsInside;

+(CGFloat) maxDistForEndPointTangents;

+(NSArray*) findIntersectionsBetweenBezier:(CGPoint[4])bez1 andBezier:(CGPoint[4])bez2;

-(NSArray*) shapeShellsAndSubshapesCreatedFromSlicingWithUnclosedPath:(UIBezierPath*)scissorPath;

-(NSArray*) uniqueShapeShellsAndSubshapesCreatedFromSlicingWithUnclosedPath:(UIBezierPath*)scissorPath;


+(CGPoint) fillCGPoints:(CGPoint*)bez withElement:(CGPathElement)element givenElementStartingPoint:(CGPoint)startPoint andSubPathStartingPoint:(CGPoint)pathStartPoint;


@end