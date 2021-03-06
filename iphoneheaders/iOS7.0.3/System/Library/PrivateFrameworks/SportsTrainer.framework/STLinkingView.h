/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@protocol STLinkingViewDelegate;
@class UIView, UIButton, UILabel, NSString;

@interface STLinkingView : UIView {

	<STLinkingViewDelegate>* _delegate;
	int _linkingType;
	UIView* _pulseView;
	BOOL _animating;
	BOOL _animateLayout;
	BOOL _bordered;
	UIButton* _rescanButton;
	UIButton* _cancelButton;
	UIButton* _linkNewButton;
	UIButton* _doneButton;
	UIButton* _unlinkButton;
	UILabel* _instructionLabel;
	UILabel* _fgsnLabel;
	NSString* _fgsnSerialNumber;

}

@property (assign,nonatomic) int linkingType;                                 //@synthesize linkingType=_linkingType - In the implementation block
@property (nonatomic,copy) NSString * serialNumber; 
@property (assign,nonatomic) <STLinkingViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL bordered;                                   //@synthesize bordered=_bordered - In the implementation block
-(void)_done;
-(id)_sensorImageName;
-(void)_sensorHideAnimationDidStop;
-(void)_receiverHideAnimationDidStop;
-(void)_rescanForRemote;
-(void)_rescanForEmped;
-(void)_linkNewEmped;
-(void)_unlinkRemote;
-(void)_linkNewRemote;
-(void)setLinkingType:(int)arg1 animated:(BOOL)arg2 ;
-(id)_haloImageOfSize:(CGSize)arg1 color:(id)arg2 strokeWidth:(float)arg3 ;
-(void)setLinkingType:(int)arg1 ;
-(int)linkingType;
-(BOOL)bordered;
-(void)setBordered:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)_newButton;
-(void)_stopAnimation;
-(id)serialNumber;
-(void)setSerialNumber:(id)arg1 ;
-(void)_startAnimation;
@end

