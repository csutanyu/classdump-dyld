/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {

	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSDate* _subscriptionDate;
	NSString* _GUID;
	NSString* _ctag;
	int _relationshipState;
	NSString* _foreignCtag;
	NSString* _URLString;
	NSString* _publicURLString;
	NSDictionary* _metadata;
	id _context;

}

@property (nonatomic,retain) NSString * ownerEmail;                   //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,retain) NSString * ownerFullName;                //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,retain) NSString * ownerPersonID;                //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * ownerFirstName;               //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,retain) NSString * ownerLastName;                //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) int relationshipState;                   //@synthesize relationshipState=_relationshipState - In the implementation block
@property (nonatomic,retain) NSString * foreignCtag;                  //@synthesize foreignCtag=_foreignCtag - In the implementation block
@property (nonatomic,retain) NSString * URLString;                    //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * publicURLString;              //@synthesize publicURLString=_publicURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL useForeignCtag; 
+(BOOL)supportsSecureCoding;
+(id)albumWithAlbum:(id)arg1 ;
+(id)album;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)URLString;
-(void)setURLString:(id)arg1 ;
-(id)ctag;
-(void)setCtag:(id)arg1 ;
-(void)setOwnerEmail:(id)arg1 ;
-(void)setOwnerPersonID:(id)arg1 ;
-(void)setOwnerFullName:(id)arg1 ;
-(void)setOwnerFirstName:(id)arg1 ;
-(void)setOwnerLastName:(id)arg1 ;
-(void)setSubscriptionDate:(id)arg1 ;
-(void)setRelationshipState:(int)arg1 ;
-(id)foreignCtag;
-(void)setForeignCtag:(id)arg1 ;
-(BOOL)useForeignCtag;
-(void)setPublicURLString:(id)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setGUID:(id)arg1 ;
-(id)GUID;
-(id)publicURLString;
-(int)relationshipState;
-(id)ownerEmail;
-(id)ownerFirstName;
-(id)ownerLastName;
-(id)ownerFullName;
-(id)ownerPersonID;
-(id)subscriptionDate;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void).cxx_destruct;
@end

