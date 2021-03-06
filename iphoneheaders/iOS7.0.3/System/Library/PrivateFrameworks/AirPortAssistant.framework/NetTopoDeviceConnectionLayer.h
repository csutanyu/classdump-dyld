/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/NetTopoObjectLayer.h>

@class CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer {

	CAShapeLayer* _connectionLineLayer;
	CGPathRef _hitTestPath;
	CGColorRef _lineColorActive;
	CGColorRef _lineColorInactive;
	CGColorRef _lineColorEthernet;
	CGColorRef _lineColorWiFi;
	CGColorRef _selectedLineColor;
	CGColorRef _clearColor;
	CGColorRef _whiteColor;
	unsigned _upstreamDeviceSpatialRelationship;
	unsigned _connectionStyle;
	CGPoint _upstreamConnectionPoint;
	CGPoint _downstreamConnectionPoint;
	unsigned _upstreamConnectionSide;
	CGPoint _siblingMergePoint;
	unsigned _connectionMediumFallback;
	CGPathRef _arrowhead;

}

@property (assign,nonatomic) unsigned upstreamDeviceSpatialRelationship;              //@synthesize upstreamDeviceSpatialRelationship=_upstreamDeviceSpatialRelationship - In the implementation block
@property (assign,nonatomic) unsigned connectionStyle;                                //@synthesize connectionStyle=_connectionStyle - In the implementation block
@property (nonatomic,readonly) unsigned connectionMedium; 
@property (assign,nonatomic) unsigned connectionMediumFallback;                       //@synthesize connectionMediumFallback=_connectionMediumFallback - In the implementation block
@property (assign,nonatomic) CGPoint upstreamConnectionPoint; 
@property (assign,nonatomic) CGPoint downstreamConnectionPoint; 
@property (assign,nonatomic) unsigned upstreamConnectionSide;                         //@synthesize upstreamConnectionSide=_upstreamConnectionSide - In the implementation block
@property (assign,nonatomic) CGPoint siblingMergePoint; 
@property (nonatomic,readonly) CGPathRef hitTestPath;                                 //@synthesize hitTestPath=_hitTestPath - In the implementation block
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)debugDescription;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned)arg3 ;
-(id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2 ;
-(CGRect)getUserInteractionBounds;
-(void)setUpstreamDeviceSpatialRelationship:(unsigned)arg1 ;
-(void)setUpstreamConnectionPoint:(CGPoint)arg1 ;
-(void)setUpstreamConnectionSide:(unsigned)arg1 ;
-(void)setDownstreamConnectionPoint:(CGPoint)arg1 ;
-(void)setConnectionMediumFallback:(unsigned)arg1 ;
-(void)setConnectionStyle:(unsigned)arg1 ;
-(void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2 ;
-(unsigned)upstreamDeviceSpatialRelationship;
-(unsigned)connectionMedium;
-(unsigned)upstreamConnectionSide;
-(void)addBottomWindingConnectionToPath:(CGPathRef)arg1 withOffset:(float)arg2 ;
-(unsigned)connectionStyle;
-(void)addSideWindingConnectionToPath:(CGPathRef)arg1 withOffset:(float)arg2 ;
-(void)addCurvedArrowConnectionToPath:(CGPathRef)arg1 withOffset:(float)arg2 ;
-(CGPathRef)newConnectionPathWithOffset:(float)arg1 ;
-(CGPoint)downstreamConnectionPoint;
-(CGPoint)upstreamConnectionPoint;
-(CGPoint)siblingMergePoint;
-(void)setSiblingMergePoint:(CGPoint)arg1 ;
-(unsigned)connectionMediumFallback;
-(CGPathRef)hitTestPath;
-(void)layoutSublayers;
@end

