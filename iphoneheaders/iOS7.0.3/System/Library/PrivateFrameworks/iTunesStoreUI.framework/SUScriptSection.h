/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {

	NSString* _badgeValue;
	NSString* _identifier;
	BOOL _transient;
	SUScriptViewController* _viewController;

}

@property (retain) NSString * badgeValue; 
@property (readonly) NSString * identifier; 
@property (readonly) BOOL transient; 
@property (readonly) SUScriptViewController * viewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)viewController;
-(id)identifier;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3 ;
-(id)initWithNativeSection:(id)arg1 ;
-(BOOL)transient;
@end
