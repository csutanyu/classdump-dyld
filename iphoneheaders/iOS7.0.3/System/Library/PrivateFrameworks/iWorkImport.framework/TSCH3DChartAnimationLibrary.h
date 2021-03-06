/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSCH3DChartAnimationLibrary : NSObject {

	NSDictionary* mAnimationTypeToClass;

}
+(id)sharedInstance;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
-(Class)animationClassFromType:(int)arg1 ;
-(id)filterStringFromClass:(Class)arg1 ;
-(id)filterStringFromType:(int)arg1 ;
-(double)animationFPSFromType:(int)arg1 ;
-(id)animationInfoForType:(int)arg1 buildType:(int)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

