/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>

@class NSString, NSMutableArray, CRMeta;

@interface CRLocationCollectionRequest : PBRequest {

	NSString* _appBundleId;
	NSMutableArray* _locations;
	int _mcc;
	CRMeta* _meta;
	int _mnc;
	int _rat;
	NSString* _tripId;
	SCD_Struct_CR6 _has;

}

@property (nonatomic,retain) CRMeta * meta;                           //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                  //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSString * tripId;                       //@synthesize tripId=_tripId - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                 //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                                 //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                                 //@synthesize mnc=_mnc - In the implementation block
-(BOOL)hasMcc;
-(int)mcc;
-(int)mnc;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(BOOL)hasRat;
-(int)rat;
-(void)setRat:(int)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(void)setMeta:(id)arg1 ;
-(id)meta;
-(void)setTripId:(id)arg1 ;
-(id)tripId;
-(BOOL)hasMnc;
-(void)setHasMcc:(BOOL)arg1 ;
-(void)setHasMnc:(BOOL)arg1 ;
-(void)dealloc;
-(void)setLocations:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)locationAtIndex:(unsigned)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)locationsCount;
-(id)locations;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAppBundleId:(id)arg1 ;
-(BOOL)hasAppBundleId;
-(id)appBundleId;
@end
