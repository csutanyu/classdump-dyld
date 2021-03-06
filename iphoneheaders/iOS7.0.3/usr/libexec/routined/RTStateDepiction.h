/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class RTStateDepictionOneState, GEOPlaceResult, NSDate;

@interface RTStateDepiction : NSObject <NSSecureCoding> {

	RTStateDepictionOneState* _clusterState;

}

@property (nonatomic,retain) GEOPlaceResult * placeResult; 
@property (nonatomic,retain) NSDate * geocodeDate; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) RTStateDepictionOneState * clusterState;              //@synthesize clusterState=_clusterState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)geocodeDate;
-(void)setGeocodeDate:(id)arg1 ;
-(void)setClusterState:(id)arg1 ;
-(id)clusterState;
-(double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2 ;
-(void)submitEntry:(double)arg1 exit:(double)arg2 ;
-(id)getLocation;
-(double)getLastVisit;
-(BOOL)cleanState:(double)arg1 ;
-(id)getRecentVisits:(double)arg1 ;
-(unsigned)getNumOfVisitsOverall;
-(id)getAggStateStat;
-(void)showState;
-(id)getEarliestLatestEntry;
-(id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3 ;
-(id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(BOOL)needsGeocode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setPlaceResult:(id)arg1 ;
-(id)placeResult;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end

