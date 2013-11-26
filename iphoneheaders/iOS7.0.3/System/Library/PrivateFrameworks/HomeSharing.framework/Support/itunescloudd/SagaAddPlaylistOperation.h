/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray, NSString;

@interface SagaAddPlaylistOperation : CloudLibraryOperation {

	NSArray* _itemIDs;
	NSString* _playlistName;
	unsigned long long _playlistSagaID;
	NSArray* _seedItemIDs;

}

@property (nonatomic,readonly) unsigned long long playlistSagaID;              //@synthesize playlistSagaID=_playlistSagaID - In the implementation block
-(id)initWithPlaylistName:(id)arg1 ;
-(id)initWithGeniusPlaylistName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3 ;
-(id)newPropertyListRepresentation;
-(unsigned long long)playlistSagaID;
-(void)main;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void).cxx_destruct;
@end
