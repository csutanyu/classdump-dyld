/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MFMailMessage;

@interface _MBLLoadMessageJob : NSObject {

	MFMailMessage* _message;
	id _mbl;

}

@property (nonatomic,readonly) MFMailMessage * message;              //@synthesize message=_message - In the implementation block
-(id)initForMessage:(id)arg1 forMBLMailbox:(id)arg2 ;
-(void)dealloc;
-(id)message;
-(void)run;
@end

