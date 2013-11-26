/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogPhase; 
@property (nonatomic,copy) NSString * displayTarget; 
@property (assign,nonatomic) BOOL scrollToTop; 
@property (assign,nonatomic) BOOL temporary; 
@property (nonatomic,copy) NSArray * views; 
+(id)addViews;
+(id)addViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setViews:(id)arg1 ;
-(id)views;
-(BOOL)scrollToTop;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)dialogPhase;
-(void)setDialogPhase:(id)arg1 ;
-(id)displayTarget;
-(void)setDisplayTarget:(id)arg1 ;
-(void)setScrollToTop:(BOOL)arg1 ;
-(BOOL)temporary;
-(void)setTemporary:(BOOL)arg1 ;
@end
