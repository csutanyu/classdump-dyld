/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>
#import <ChatKit/CKTranscriptComposeDelegate.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol.h>

@class CKModalTranscriptController;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate, CKSMSComposeViewServiceProtocol> {

	BOOL _canEditRecipients;
	BOOL _supportsAttachments;
	BOOL _supportsMessageInspection;
	BOOL _forceMMS;
	BOOL _disableCameraAttachments;
	CKModalTranscriptController* _modalTranscriptController;

}

@property (nonatomic,retain) CKModalTranscriptController * modalTranscriptController;              //@synthesize modalTranscriptController=_modalTranscriptController - In the implementation block
@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic,@dynamic) BOOL canEditRecipients; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController;
-(BOOL)canEditRecipients;
-(void)didCancelComposition:(id)arg1 ;
-(void)showForwardedMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)forceMMS;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)showNewMessageCompositionForMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(BOOL)supportsAttachments;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)setModalTranscriptController:(id)arg1 ;
-(id)modalTranscriptController;
-(void)insertTextPart:(id)arg1 ;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)_forceMMSIfNecessary;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(BOOL)supportsMessageInspection;
-(void)setText:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)forceCancelComposition;
-(void)disableCameraAttachments;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
@end
