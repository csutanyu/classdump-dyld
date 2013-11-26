/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, MSASInvitation;

@interface MSASAlbumChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSString* _URLString;
	MSASInvitation* _invitation;
	NSString* _name;

}

@property (nonatomic,copy) NSString * ownerEmail;                      //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,copy) NSString * ownerPersonID;                   //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,copy) NSString * ownerFullName;                   //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,copy) NSString * ownerFirstName;                  //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,copy) NSString * ownerLastName;                   //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;               //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * URLString;                     //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                          //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) MSASInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)URLString;
-(void)setURLString:(id)arg1 ;
-(BOOL)wasDeleted;
-(void)setWasDeleted:(BOOL)arg1 ;
-(id)invitation;
-(void)setInvitation:(id)arg1 ;
-(void)setOwnerEmail:(id)arg1 ;
-(void)setOwnerPersonID:(id)arg1 ;
-(void)setOwnerFullName:(id)arg1 ;
-(void)setOwnerFirstName:(id)arg1 ;
-(void)setOwnerLastName:(id)arg1 ;
-(void)setGUID:(id)arg1 ;
-(id)GUID;
-(id)ownerEmail;
-(id)ownerFirstName;
-(id)ownerLastName;
-(id)ownerFullName;
-(id)ownerPersonID;
-(void).cxx_destruct;
@end
