/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class MFMailMessage;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider> {

	MFMailMessage* _message;

}
-(void)dealloc;
-(id)initWithDecryptedMessage:(id)arg1 ;
-(id)messageForAttachment:(id)arg1 ;
-(BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
@end

