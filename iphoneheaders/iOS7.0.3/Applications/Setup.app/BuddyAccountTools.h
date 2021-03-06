/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface BuddyAccountTools : NSObject {

	BOOL _redownloadRightsLoaded;
	BOOL _hasRedownloadRights;
	NSObject<OS_dispatch_queue>* _accountOperationsQueue;
	NSMutableArray* _accountsBeingRemoved;

}
+(id)sharedBuddyAccountTools;
-(void)removePrimaryAccount;
-(BOOL)storeAccountSupportsMusicAndBooksRedownload;
-(void)_resetStoreAccountRedownloadRights:(id)arg1 ;
-(id)accountOperationsQueue;
-(void)dealloc;
-(id)init;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(id)primaryAccount;
@end

