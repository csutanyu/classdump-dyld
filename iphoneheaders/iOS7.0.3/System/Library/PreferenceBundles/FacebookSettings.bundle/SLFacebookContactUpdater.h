/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SLFacebookContactUpaterDelegate, OS_dispatch_queue;
@class NSArray, ACAccount, ACAccountStore, , NSObject;

@interface SLFacebookContactUpdater : NSObject {

	void* _addressBook;
	NSArray* _recordsToUpdate;
	int _updatedRecordCount;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	<SLFacebookContactUpaterDelegate>* _delegate;
	BOOL _isCanceled;
	NSObject<OS_dispatch_queue>* _addressBookQueue;

}

@property (assign,nonatomic,__weak) <SLFacebookContactUpaterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAccount:(id)arg1 andAccountStore:(id)arg2 ;
-(id)_listOfRecordsToUpdate;
-(void)_processLookupResults:(id)arg1 ;
-(id)_canonicalizaPhoneNumbers:(id)arg1 ;
-(BOOL)_shouldUpdateProfileImageForPerson:(void*)arg1 ;
-(BOOL)_setProfileImageForPerson:(void*)arg1 fromData:(id)arg2 ;
-(BOOL)_updateSocialProfileForPerson:(void*)arg1 inSource:(void*)arg2 withResult:(id)arg3 ;
-(BOOL)_updateProfileImageForPerson:(void*)arg1 withResult:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)start;
-(void)stop;
-(void).cxx_destruct;
@end
