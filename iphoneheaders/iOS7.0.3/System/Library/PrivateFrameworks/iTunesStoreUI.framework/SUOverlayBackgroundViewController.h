/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SUScalingFlipViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SUOverlayBackgroundDelegate;
@class NSMutableArray, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer, SUOverlayViewController, NSArray;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _actionQueue;
	SUScalingFlipView* _activeFlipView;
	BOOL _askingToDismissEverything;
	BOOL _askingToDismissSelection;
	SUTouchCaptureView* _captureView;
	<SUOverlayBackgroundDelegate>* _delegate;
	CGRect _keyboardFrame;
	int _selectedViewControllerIndex;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	NSMutableArray* _viewControllers;

}

@property (assign,nonatomic) <SUOverlayBackgroundDelegate> * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SUOverlayViewController * selectedViewController; 
@property (nonatomic,readonly) NSArray * viewControllers;                                     //@synthesize viewControllers=_viewControllers - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)viewControllers;
-(id)selectedViewController;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_swipe:(id)arg1 ;
-(void)_addViewController:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)copyChildViewControllersForReason:(int)arg1 ;
-(BOOL)shouldExcludeFromNavigationHistory;
-(void)keyboardWillHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(id)copyArchivableJetsamContext;
-(void)dismissOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)populateNavigationHistoryWithItems:(id)arg1 ;
-(void)_performNextAction;
-(id)viewControllerForScriptWindowContext:(id)arg1 ;
-(void)presentOverlay:(id)arg1 withTransition:(id)arg2 ;
-(void)scalingFlipViewDidFinish:(id)arg1 ;
-(void)_tearDownFlipView;
-(void)_sendDidDismiss;
-(id)_selectedViewController;
-(id)_copyTransitionForTransition:(id)arg1 action:(id)arg2 ;
-(void)_enqueueAction:(id)arg1 ;
-(float)_viewControllerKeyboardOffset;
-(CGRect)_centeredFrameForViewController:(id)arg1 ;
-(float)_viewControllerHorizontalPadding;
-(void)layoutViewControllers;
-(void)_layoutForKeyboardChangeWithInfo:(id)arg1 ;
-(void)_captureViewAction:(id)arg1 ;
-(void)_reloadGestureRecognizers;
-(void)_shouldDismissFinishedWithValue:(id)arg1 ;
-(void)_overlayAnimationDidFinish;
-(void)_finishDismissOfViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_finishDismissAction:(id)arg1 ;
-(void)_finishDismissEverythingAction:(id)arg1 ;
-(void)_finishPresentAction:(id)arg1 ;
-(void)_overlayActionDidFinish;
-(void)_removeViewController:(id)arg1 ;
-(void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(CGRect)_frameForSlideFromBottomForViewController:(id)arg1 ;
-(void)_performFlipForAction:(id)arg1 ;
-(void)_performDismissAction:(id)arg1 ;
-(void)_performDismissEverythingAction:(id)arg1 ;
-(void)_performPresentAction:(id)arg1 ;
-(void)overlayPageViewTapped:(id)arg1 ;
@end

