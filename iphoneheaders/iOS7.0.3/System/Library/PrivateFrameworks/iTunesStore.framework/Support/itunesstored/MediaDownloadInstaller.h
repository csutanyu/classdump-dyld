/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DownloadInstaller.h>

@class Download, StoreDownload;

@interface MediaDownloadInstaller : DownloadInstaller {

	long long _libraryPersistentID;
	Download* _mediaDownload;
	StoreDownload* _storeDownload;

}
-(id)initWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)newPurchaseManifestItem;
-(id)storeDownloadMetadata;
-(void)addPurchaseManifestItem;
-(id)installDownloadFiles;
-(BOOL)_isDaemonOwned;
-(void)_updateRentalsPlist;
-(id)_installDaemonOwnedDownload;
-(id)_installExternalDownload;
-(id)_newIPodLibraryItem;
-(void)dealloc;
@end

