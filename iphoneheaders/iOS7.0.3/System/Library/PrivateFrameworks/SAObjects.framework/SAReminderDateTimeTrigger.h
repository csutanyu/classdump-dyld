/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, SAReminderDateTimeTriggerOffset, NSString;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * relativeTimeOffset; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)dateTimeTrigger;
+(id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)date;
-(void)setOffset:(id)arg1 ;
-(id)offset;
-(void)setDate:(id)arg1 ;
-(id)encodedClassName;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
-(id)relativeTimeOffset;
-(void)setRelativeTimeOffset:(id)arg1 ;
@end

