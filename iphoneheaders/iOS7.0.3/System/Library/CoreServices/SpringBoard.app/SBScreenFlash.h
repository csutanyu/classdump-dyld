/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIWindow, UIView;

@interface SBScreenFlash : NSObject {

	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;

}
+(id)sharedInstance;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)_orderWindowFront:(id)arg1 withColor:(id)arg2 ;
-(void)stopFlash;
-(void)flashColor:(id)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)flash;
-(void)_tearDown;
@end
