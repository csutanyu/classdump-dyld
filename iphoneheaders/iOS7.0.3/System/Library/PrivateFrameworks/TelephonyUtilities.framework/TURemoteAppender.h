/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAppender.h>

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {

	xpc_connection_sRef _connection;
	NSString* _name;
	dispatch_queue_sRef _backgroundQueue;

}
-(void)dealloc;
-(void)flush;
-(id)initWithName:(id)arg1 ;
-(void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7 ;
-(void)setAppenderDelegate:(id)arg1 ;
@end

