/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tts; 
+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(id)encodedClassName;
-(id)tts;
-(void)setTts:(id)arg1 ;
@end

