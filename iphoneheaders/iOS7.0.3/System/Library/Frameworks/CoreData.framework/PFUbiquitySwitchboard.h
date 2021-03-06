/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {

	NSMutableDictionary* _storeNameToLocalPeerIDToEntry;
	NSMutableDictionary* _rootLocationToLocalPeerIDToFilePresenters;
	NSMutableDictionary* _rootLocationToLocalPeerIDToPreviousEntries;
	NSRecursiveLock* _registrationLock;

}
+(id)sharedSwitchboard;
+(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2 ;
+(void)initialize;
-(void)unregisterCoordinator:(id)arg1 ;
-(void)unregisterPersistentStore:(id)arg1 ;
-(id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2 ;
-(id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 ;
-(id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_removeFilePresenter:(id)arg1 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)addEntryToPreviousEntries:(id)arg1 ;
-(id)entryForStore:(id)arg1 ;
-(BOOL)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_addFilePresenter:(id)arg1 ;
-(BOOL)registerUbiquitizedPersistentStore:(id)arg1 forLocalPeerID:(id)arg2 withLocalRootLocation:(id)arg3 andUbiquityRootLocation:(id)arg4 error:(id*)arg5 ;
-(void)_quietlyMoveEntryToPreviousEntries:(id)arg1 ;
-(void)removeEntryFromPreviousEntries:(id)arg1 ;
-(void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

