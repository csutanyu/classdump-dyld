/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class NSString;

@interface ChartLabelInfo : NSObject {

	NSString* _string;
	CGSize _size;
	float _position;
	BOOL _immutable;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL immutable;               //@synthesize immutable=_immutable - In the implementation block
-(void)setImmutable:(BOOL)arg1 ;
-(CGSize)size;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(float)arg1 ;
-(float)position;
-(void)setString:(id)arg1 ;
-(void)setStringToMonthAndDayWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
-(void)setStringToYearWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
-(BOOL)immutable;
-(void).cxx_destruct;
@end

