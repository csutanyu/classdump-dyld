/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(BOOL)passViewBackGrowsCentered:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(BOOL)passViewShouldFlip:(id)arg1;
-(void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
-(void)passViewTouchesBegan:(id)arg1;
-(void)passViewTouchesCancelled:(id)arg1;
-(void)passViewTapped:(id)arg1;
@end
