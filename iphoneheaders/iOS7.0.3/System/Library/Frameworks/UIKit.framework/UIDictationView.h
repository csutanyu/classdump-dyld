/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISiriWaveyViewDelegate.h>

@class UIKeyboardDicationBackground, UIButton, _UISiriWaveyView, UIDictationMeterView;

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	UIButton* _waveTapEndpointButton;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	_UISiriWaveyView* _waveyView;
	UIDictationMeterView* _meterView;

}
+(id)sharedInstance;
+(id)activeInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
+(CGSize)viewSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)show;
-(void)setState:(int)arg1 ;
-(CGPoint)contentOffset;
-(void)keyboardDidShow:(id)arg1 ;
-(BOOL)visible;
-(void)applicationWillResignActive;
-(void)finishReturnToKeyboard;
-(id)endpointButtonImageWithRect:(CGRect)arg1 pressed:(BOOL)arg2 ;
-(void)prepareForReturnToKeyboard;
-(BOOL)isShowing;
-(void)returnToKeyboard;
-(BOOL)drawsOwnBackground;
-(void)endpointButtonPressed;
-(id)createEndpointButtonWithRect:(CGRect)arg1 action:(SEL)arg2 ;
-(CGPoint)backgroundOffset;
-(id)endpointButton;
-(float)audioLevelForWaveyView:(id)arg1 ;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
@end
