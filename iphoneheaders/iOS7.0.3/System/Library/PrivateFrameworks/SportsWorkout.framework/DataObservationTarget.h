/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/ObservationTarget.h>

@class NSDecimalNumber, NSString;

@interface DataObservationTarget : ObservationTarget {

	NSDecimalNumber* _value;
	NSDecimalNumber* _repeatInterval;
	NSString* _distanceUnits;

}

@property (nonatomic,retain) NSDecimalNumber * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * repeatInterval;              //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,retain) NSString * distanceUnits;                      //@synthesize distanceUnits=_distanceUnits - In the implementation block
+(id)targetWithValue:(id)arg1 repeatInterval:(id)arg2 selector:(SEL)arg3 distanceUnits:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(void)setRepeatInterval:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)repeatInterval;
-(id)distanceUnits;
-(void)setDistanceUnits:(id)arg1 ;
@end
