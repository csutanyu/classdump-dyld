/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerTimelyCaller.h>

@class NSArray;

@interface AVPlayerOccasionalCaller : AVPlayerTimelyCaller {

	NSArray* _times;
	/*^block*/ id _block;

}
-(id)initWithPlayer:(id)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/ id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_handleTimeDiscontinuity;
-(void)_resetNextFireTime;
-(SCD_Struct_CM4)_nextFiringTimeAfterTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)_previousFiringTimeBeforeTime:(SCD_Struct_CM4)arg1 ;
-(void)dealloc;
@end

