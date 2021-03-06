/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOAddress, NSMutableArray, GEOLatLng, GEOMapRegion, NSString, GEOBusiness, GEORating;

@interface GEOPlace : PBCodable <NSCopying> {

	double _area;
	long long _geoId;
	long long _uID;
	GEOAddress* _address;
	int _addressGeocodeAccuracy;
	NSMutableArray* _business;
	GEOLatLng* _center;
	NSMutableArray* _entryPoints;
	int _localSearchProviderID;
	GEOMapRegion* _mapRegion;
	NSString* _name;
	GEOAddress* _phoneticAddress;
	NSString* _phoneticName;
	NSString* _spokenAddress;
	NSString* _spokenName;
	int _type;
	int _version;
	BOOL _isDisputed;
	SCD_Struct_GE50 _has;

}

@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,readonly) GEOBusiness * firstBusiness; 
@property (nonatomic,readonly) GEORating * firstRating; 
@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID;                               //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                    //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                     //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticAddress; 
@property (nonatomic,retain) GEOAddress * phoneticAddress;                //@synthesize phoneticAddress=_phoneticAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                          //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * business;                   //@synthesize business=_business - In the implementation block
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracy; 
@property (assign,nonatomic) int addressGeocodeAccuracy;                  //@synthesize addressGeocodeAccuracy=_addressGeocodeAccuracy - In the implementation block
@property (nonatomic,retain) NSMutableArray * entryPoints;                //@synthesize entryPoints=_entryPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed;                             //@synthesize isDisputed=_isDisputed - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                   //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName;                       //@synthesize spokenName=_spokenName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenAddress; 
@property (nonatomic,retain) NSString * spokenAddress;                    //@synthesize spokenAddress=_spokenAddress - In the implementation block
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area;                                 //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) long long geoId;                             //@synthesize geoId=_geoId - In the implementation block
-(id)initWithPlacemark:(id)arg1 ;
-(id)yelpID;
-(BOOL)hasSingleBusiness;
-(id)businessName;
-(unsigned long long)businessID;
-(id)initWithCLLocation:(id)arg1 ;
-(id)clLocation;
-(id)clRegion;
-(void)setAddress:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)center;
-(void)setCenter:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(BOOL)hasMapRegion;
-(double)radialDistance;
-(id)addressDictionary;
-(id)business;
-(id)businessAtIndex:(unsigned)arg1 ;
-(id)firstBusiness;
-(BOOL)hasCenter;
-(unsigned)entryPointsCount;
-(id)entryPoints;
-(BOOL)hasAddressGeocodeAccuracy;
-(int)addressGeocodeAccuracy;
-(id)arrivalMapRegion;
-(id)firstRating;
-(id)arrivalMapRegionForTransportType:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setPhoneticName:(id)arg1 ;
-(BOOL)hasUID;
-(void)setUID:(long long)arg1 ;
-(BOOL)hasPhoneticName;
-(id)phoneticName;
-(void)setHasUID:(BOOL)arg1 ;
-(void)setPhoneticAddress:(id)arg1 ;
-(void)setBusiness:(id)arg1 ;
-(void)setEntryPoints:(id)arg1 ;
-(void)setSpokenName:(id)arg1 ;
-(void)setSpokenAddress:(id)arg1 ;
-(void)addBusiness:(id)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(BOOL)hasPhoneticAddress;
-(id)phoneticAddress;
-(unsigned)businessCount;
-(void)clearBusiness;
-(void)setAddressGeocodeAccuracy:(int)arg1 ;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned)arg1 ;
-(BOOL)hasIsDisputed;
-(BOOL)isDisputed;
-(void)setIsDisputed:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(BOOL)hasSpokenName;
-(id)spokenName;
-(BOOL)hasSpokenAddress;
-(id)spokenAddress;
-(BOOL)hasArea;
-(BOOL)hasGeoId;
-(long long)geoId;
-(void)setGeoId:(long long)arg1 ;
-(void)setHasAddressGeocodeAccuracy:(BOOL)arg1 ;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(void)setHasArea:(BOOL)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(SCD_Struct_GE12)coordinate;
-(BOOL)hasAddress;
-(id)address;
-(double)area;
-(void)setArea:(double)arg1 ;
-(id)mapRegion;
-(void)setMapRegion:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(long long)uID;
@end

