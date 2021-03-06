/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBWindowHideRequest : NSObject {

	NSString* _reason;
	SBWindowLevelRange_struct _windowLevelRange;

}

@property (assign) SBWindowLevelRange_struct windowLevelRange;              //@synthesize windowLevelRange=_windowLevelRange - In the implementation block
@property (copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
+(id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)arg1 reason:(id)arg2 ;
-(void)setWindowLevelRange:(SBWindowLevelRange_struct)arg1 ;
-(SBWindowLevelRange_struct)windowLevelRange;
-(void)setReason:(id)arg1 ;
-(id)description;
-(id)reason;
@end

