/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TSMTraceBuffer;

@interface CPTracingManager : NSObject {

	TSMTraceBuffer* mBuffer;
	unsigned mCount;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)teardown;
-(void)setup;
@end
