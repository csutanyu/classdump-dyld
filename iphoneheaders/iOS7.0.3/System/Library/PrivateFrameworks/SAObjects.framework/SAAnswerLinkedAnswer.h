/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)image;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)setDescription:(id)arg1 ;
-(id)encodedClassName;
@end

