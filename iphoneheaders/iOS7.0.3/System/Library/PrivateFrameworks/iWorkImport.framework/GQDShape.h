/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDPath, GQDWPLayoutFrame;

@interface GQDShape : GQDGraphic <GQDNameMappable> {

	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;

}
+(const StateSpec*)stateForReading;
-(BOOL)isBlank;
-(CGPathRef)createBezierPath;
-(id)layoutFrame;
-(BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1 ;
-(id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3 ;
-(void)dealloc;
-(id)path;
@end

