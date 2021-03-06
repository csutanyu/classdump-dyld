/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface PDBulletinManager : NSObject {

	NSMutableDictionary* _bulletinRecords;
	NSDate* _lastRequestDate;

}

@property (nonatomic,retain) NSDate * lastRequestDate;              //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
-(void)updateBulletinRecordsWithDiff:(id)arg1 passTypeID:(id)arg2 ;
-(void)deleteBulletinRecordsForPassUniqueID:(id)arg1 notifyBulletinBoard:(BOOL)arg2 ;
-(id)allBulletinRecords;
-(id)bulletinRecordWithID:(id)arg1 ;
-(void)deleteBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2 notifyBulletinBoard:(BOOL)arg3 ;
-(void)nukeBulletins;
-(void)_persistBulletinRecords;
-(void)_sendInvalidate:(id)arg1 ;
-(void)_sendModify:(id)arg1 recordID:(id)arg2 ;
-(void)_sendRemove:(id)arg1 recordID:(id)arg2 ;
-(void)_sendAdd:(id)arg1 recordID:(id)arg2 ;
-(void)_cullRecords;
-(void)_sendNotification:(id)arg1 forPassTypeID:(id)arg2 recordID:(id)arg3 ;
-(id)lastRequestDate;
-(void)setLastRequestDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

