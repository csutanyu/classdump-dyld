/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKTranscriptHeaderViewDelegate;
@class UIButton;

@interface CKTranscriptToolbarView : UIView {

	UIButton* _editButton;
	UIButton* _contactButton;
	UIButton* _cancelButton;
	BOOL _hasContact;
	BOOL _isGroupMessage;
	BOOL _cancelButtonVisible;
	<CKTranscriptHeaderViewDelegate>* _delegate;

}

@property (assign,nonatomic) <CKTranscriptHeaderViewDelegate> * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasContact;                                                    //@synthesize hasContact=_hasContact - In the implementation block
@property (assign,nonatomic) BOOL isGroupMessage;                                                //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,getter=isCancelButtonVisible,nonatomic) BOOL cancelButtonVisible;              //@synthesize cancelButtonVisible=_cancelButtonVisible - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)sizeToFit;
-(void)_buttonClicked:(id)arg1 ;
-(BOOL)isCancelButtonVisible;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)setHasContact:(BOOL)arg1 ;
-(id)initAsGroupMessage:(BOOL)arg1 hasMessages:(BOOL)arg2 ;
-(CGRect)frameForButton:(short)arg1 ;
-(BOOL)hasContact;
-(BOOL)isGroupMessage;
-(void)setIsGroupMessage:(BOOL)arg1 ;
@end

