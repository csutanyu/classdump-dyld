/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect {

	float mBlurRadius;
	float mStartOpacity;
	float mStartPosition;
	float mEndOpacity;
	float mEndPosition;
	float mDistance;
	float mDirection;
	float mFadeDirection;
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)blurRadius;
-(void)setBlurRadius:(float)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setDirection:(float)arg1 ;
-(float)direction;
-(int)alignment;
-(float)startPosition;
-(float)endPosition;
-(void)setStartPosition:(float)arg1 ;
-(void)setDistance:(float)arg1 ;
-(void)setYSkew:(float)arg1 ;
-(void)setXScale:(float)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(BOOL)rotateWithShape;
-(float)xScale;
-(float)yScale;
-(void)setYScale:(float)arg1 ;
-(float)xSkew;
-(void)setXSkew:(float)arg1 ;
-(float)ySkew;
-(float)startOpacity;
-(float)endOpacity;
-(float)fadeDirection;
-(void)setStartOpacity:(float)arg1 ;
-(void)setEndOpacity:(float)arg1 ;
-(void)setEndPosition:(float)arg1 ;
-(void)setFadeDirection:(float)arg1 ;
-(float)distance;
@end

