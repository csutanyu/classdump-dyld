/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBPluginBundleController.h>

@protocol SBUIPluginControllerHost;
@class ;

@interface SBUIPluginController : NSObject <SBPluginBundleController> {

	<SBUIPluginControllerHost>* _host;
	BOOL _isVisible;

}

@property (assign,nonatomic) <SBUIPluginControllerHost> * host;              //@synthesize host=_host - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                  //@synthesize isVisible=_isVisible - In the implementation block
-(void)setHost:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)host;
-(void)registeredWithHost;
-(BOOL)supportedAndEnabled;
-(BOOL)wantsActivationEvent:(int)arg1 interval:(double*)arg2 ;
-(void)prepareForActivationEvent:(int)arg1 afterInterval:(double)arg2 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(BOOL)handleActivationEvent:(int)arg1 context:(void*)arg2 ;
-(BOOL)handledPasscodeUnlockWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)handledMenuButtonDownEvent;
-(BOOL)handledMenuButtonTap;
-(void)handleBluetoothDismissal;
-(BOOL)handledWiredMicButtonTap;
-(void)noteInterruption;
-(id)viewControllerForActivationContext:(id)arg1 ;
@end
