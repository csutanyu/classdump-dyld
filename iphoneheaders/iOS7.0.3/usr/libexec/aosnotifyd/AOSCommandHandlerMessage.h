/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSCommandHandler.h>

@class AOSUserNotification;

@interface AOSCommandHandlerMessage : AOSCommandHandler {

	AOSUserNotification* _waitingSecureMsgNotfn;

}

@property (nonatomic,retain) AOSUserNotification * waitingSecureMsgNotfn;              //@synthesize waitingSecureMsgNotfn=_waitingSecureMsgNotfn - In the implementation block
-(void)handleCommand;
-(void)sendAck;
-(BOOL)shouldHonorSecureMessage;
-(BOOL)shouldShowLockScreenSecureMessage;
-(void)showSecureMessage:(id)arg1 andLockScreenMessage:(id)arg2 ;
-(id)waitingSecureMsgNotfn;
-(void)setWaitingSecureMsgNotfn:(id)arg1 ;
-(void).cxx_destruct;
@end

