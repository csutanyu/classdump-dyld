/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, CAShapeLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer {

	CAGradientLayer* _gradient;
	CAShapeLayer* _shapeMask;

}

@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
@property (nonatomic,retain) CAGradientLayer * gradient;              //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeMask;                //@synthesize shapeMask=_shapeMask - In the implementation block
-(id)shapeMask;
-(void)setShapeMask:(id)arg1 ;
-(BOOL)isGradientTree;
-(void)p_flatten;
-(void)p_createGradientTreeIfNeeded;
-(CGPoint)endPoint;
-(void)setStrokeStart:(float)arg1 ;
-(void)setStrokeEnd:(float)arg1 ;
-(void)setLineDashPhase:(float)arg1 ;
-(void)dealloc;
-(void)setColors:(id)arg1 ;
-(void)setLocations:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(void)setLineWidth:(float)arg1 ;
-(void)setMiterLimit:(float)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setFillRule:(id)arg1 ;
-(id)colors;
-(void)setGradient:(id)arg1 ;
-(id)gradient;
-(void)setLineCap:(id)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void)setLineJoin:(id)arg1 ;
-(id)locations;
@end

