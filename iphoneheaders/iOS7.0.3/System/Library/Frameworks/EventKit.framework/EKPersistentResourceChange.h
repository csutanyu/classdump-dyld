/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSURL, EKPersistentCalendar, EKPersistentCalendarItem, NSDate, NSNumber;

@interface EKPersistentResourceChange : EKPersistentObject

@property (nonatomic,readonly) NSString * changedByDisplayName; 
@property (nonatomic,readonly) NSURL * changedByAddress; 
@property (nonatomic,readonly) NSString * changedByFirstName; 
@property (nonatomic,readonly) NSString * changedByLastName; 
@property (nonatomic,readonly) EKPersistentCalendar * calendar; 
@property (nonatomic,readonly) EKPersistentCalendarItem * calendarItem; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) unsigned changedProperties; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) BOOL alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)alerted;
-(id)calendarItem;
-(unsigned)publicStatus;
-(id)deletedTitle;
-(id)changedByDisplayName;
-(id)createCount;
-(id)updateCount;
-(id)changedByAddress;
-(id)changedByFirstName;
-(id)changedByLastName;
-(unsigned)changedProperties;
-(id)timestamp;
-(id)deleteCount;
-(id)calendar;
-(unsigned)changeType;
@end
