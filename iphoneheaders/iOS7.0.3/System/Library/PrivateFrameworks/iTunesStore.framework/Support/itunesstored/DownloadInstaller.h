/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperationDelegate.h>

@protocol DownloadInstallerDelegate;
@class NSMutableDictionary, Download, DownloadStep, StoreDownload, NSArray, NSString;

@interface DownloadInstaller : NSObject <ISOperationDelegate> {

	NSMutableDictionary* _assetsByType;
	<DownloadInstallerDelegate>* _delegate;
	Download* _download;
	DownloadStep* _downloadStep;
	int _fileInstallBehavior;
	StoreDownload* _storeDownload;

}

@property (readonly) long long downloadIdentifier; 
@property (readonly) DownloadStep * downloadStep; 
@property (assign,nonatomic) <DownloadInstallerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int fileInstallBehavior;                             //@synthesize fileInstallBehavior=_fileInstallBehavior - In the implementation block
@property (readonly) NSArray * assets; 
@property (readonly) NSString * ITunesMetadataPath; 
@property (readonly) StoreDownload * storeDownloadMetadata; 
+(id)installerWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)downloadStep;
-(id)initWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)newPurchaseManifestItem;
-(id)storeDownloadMetadata;
-(id)_copyMetadataForDownload:(id)arg1 storeDownload:(id)arg2 ;
-(id)destinationURLForAsset:(id)arg1 ;
-(id)_defaultDestinationDirectoryPath;
-(id)writeFileForAsset:(id)arg1 ;
-(id)ITunesMetadataPath;
-(BOOL)writeMetadataPlistToFile:(id)arg1 error:(id*)arg2 ;
-(id)installedFileNameForAsset:(id)arg1 ;
-(id)destinationDirectoryPathForAsset:(id)arg1 ;
-(id)copyITunesMetadataDictionary;
-(id)assetForAssetType:(id)arg1 ;
-(void)addPurchaseManifestItem;
-(id)documentsDirectoryForClientID:(id)arg1 downloadKind:(id)arg2 ;
-(id)installDownloadFiles;
-(BOOL)rollbackInstalledFilesWithError:(id*)arg1 ;
-(BOOL)runOperation:(id)arg1 error:(id*)arg2 ;
-(int)fileInstallBehavior;
-(void)setFileInstallBehavior:(int)arg1 ;
-(long long)downloadIdentifier;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)assets;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
@end

