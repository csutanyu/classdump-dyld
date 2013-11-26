/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRotatingActionSheetDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class _UIRotatingActionSheet, UITextView, NSArray, NSDictionary, NSString;

@interface _UITextViewInteractableItem : NSObject <_UIRotatingActionSheetDelegate, UIActionSheetDelegate> {

	_UIRotatingActionSheet* _linkInteractionSheet;
	UITextView* _textView;
	NSArray* _actions;
	NSDictionary* _defaultAction;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSArray * actions;                         //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setTextView:(id)arg1 ;
-(NSRange)range;
-(id)hostViewForSheet:(id)arg1 ;
-(CGRect)initialPresentationRectInHostViewForSheet:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet:(id)arg1 ;
-(id)textView;
-(void)handleTap;
-(void)handleLongPress;
-(BOOL)allowInteraction;
-(void)_showActionSheet;
-(id)defaultAction;
-(void)_handleActionAndFinish:(id)arg1 ;
-(id)localizedTitle;
-(id)actions;
-(id)_actionSheet;
-(void)setRange:(NSRange)arg1 ;
@end
