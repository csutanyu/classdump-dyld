/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject {

	BOOL _animated;
	UIViewController* _viewController;
	int _type;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setViewController:(id)arg1 ;
-(BOOL)animated;
-(id)viewController;
-(void)setAnimated:(BOOL)arg1 ;
@end
