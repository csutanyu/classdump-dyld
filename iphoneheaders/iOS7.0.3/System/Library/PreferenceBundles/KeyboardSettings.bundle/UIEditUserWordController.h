/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {

	int _oldPopoverStyle;
	/*^block*/ id _dismissCompletionHandler;
	UIWindow* _rotationDecider;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(void)_dismiss;
-(/*^block*/ id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_setRotationDecider:(id)arg1 ;
-(id)_rotationDecider;
-(BOOL)_shouldSetDefaultFirstResponder;
@end

