/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <MobileBackup/MBEngine.h>
#import <backupd/MBFileScannerDelegate.h>
#import <BackupAgent2/MBFileHandleFactory.h>

@class MBProgress, MBDriveScript, MBDrive, MBBackupHelper, NSString, MBStatus, MBManifest, MBKeyBag, NSMutableSet, MBManifestBuilder, MBBackupOperationJournal, NSMutableDictionary, MBDriveSettingsContext;

@interface MBDriveBackupEngine : MBEngine <MBFileScannerDelegate, MBFileHandleFactory> {

	MBProgress* _progress;
	MBDriveScript* _driveScript;
	MBDrive* _drive;
	MBBackupHelper* _backupHelper;
	NSString* _uuid;
	MBStatus* _status;
	MBManifest* _backupManifest;
	MBManifest* _snapshotManifest;
	MBKeyBag* _keybag;
	NSMutableSet* _domainsToScan;
	MBManifestBuilder* _manifestBuilder;
	long _maximumModificationTime;
	MBBackupOperationJournal* _operationJournal;
	NSMutableSet* _modifiedDomains;
	NSMutableDictionary* _uploadOperationsByPath;
	unsigned _batchSize;
	unsigned _retryCount;
	BOOL _fullBackup;
	BOOL _encrypted;

}

@property (nonatomic,readonly) MBDriveSettingsContext * settingsContext; 
@property (nonatomic,readonly) MBManifestBuilder * manifestBuilder; 
@property (nonatomic,readonly) MBProgress * progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) MBKeyBag * keybag;                                     //@synthesize keybag=_keybag - In the implementation block
@property (nonatomic,readonly) long maximumModificationTime;                          //@synthesize maximumModificationTime=_maximumModificationTime - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                     //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) unsigned retryCount;                                   //@synthesize retryCount=_retryCount - In the implementation block
@property (getter=isFinalRetry,nonatomic,readonly) BOOL finalRetry; 
+(id)backupEngineWithSettingsContext:(id)arg1 debugContext:(id)arg2 ;
-(id)backup;
-(id)keybag;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 ;
-(id)_postconditions;
-(id)_setupEncryption;
-(id)_prepare;
-(BOOL)fileScanner:(id)arg1 isFileAddedOrModified:(id)arg2 ;
-(id)fileScanner:(id)arg1 didFindFile:(id)arg2 ;
-(id)fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)isFinalRetry;
-(id)_backup;
-(id)_preconditions;
-(id)_scan;
-(id)_upload;
-(BOOL)_shouldRetry;
-(id)_moveWithOperationType:(int)arg1 ;
-(id)_removeWithOperationType:(int)arg1 ;
-(id)_removeDeviceSnapshot;
-(id)_resumeAfterFailureUploading;
-(id)_resumeAfterFailureMoving;
-(id)_resumeAfterFailureRemoving;
-(id)_resumeAfterSuccess;
-(id)_deviceSnapshotPropertiesPath;
-(id)_deviceSnapshotDatabasePath;
-(id)_deviceSnapshotDir;
-(id)_setupOperationJournal;
-(id)_addBackupPathsNotInNewDatabaseIndex:(id)arg1 oldManifest:(id)arg2 operationType:(int)arg3 ;
-(id)_setupManifestBuilder;
-(id)_recordCurrentTime;
-(id)_scanAllDomains;
-(id)_findPathsRemovedFromBackup;
-(id)_scanFinished;
-(void)_addFileToMove:(id)arg1 flags:(unsigned)arg2 ;
-(void)_addFileToLeaveAlone:(id)arg1 flags:(unsigned)arg2 ;
-(void)_addFileToUploadAndMove:(id)arg1 flags:(unsigned)arg2 ;
-(id)_addMetadataToFile:(id)arg1 ;
-(id)_prepareProgress;
-(id)_prepareFreeSpace;
-(id)_prepareResume;
-(id)_prepareSnapshot;
-(BOOL)_uploadStatusToDriveWithSnapshotState:(int)arg1 error:(id*)arg2 ;
-(id)_uploadInBatches;
-(id)_uploadBatchWithPaths:(id)arg1 ;
-(id)_moveInBatchesWithOperationType:(int)arg1 ;
-(id)_moveBatchWithPaths:(id)arg1 ;
-(id)_removeInBatchesWithOperationType:(int)arg1 ;
-(id)_removeBatchWithPaths:(id)arg1 ;
-(id)manifestBuilder;
-(id)_fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(void)fileModifiedWhileUploadingFile:(id)arg1 reason:(id)arg2 ;
-(BOOL)isModifiedWithStat:(stat*)arg1 reason:(id*)arg2 ;
-(id)endWithError:(id)arg1 ;
-(BOOL)_isModifiedWithFileDescriptor:(int)arg1 reason:(id*)arg2 ;
-(long)maximumModificationTime;
-(void)dealloc;
-(id)progress;
-(id)properties;
-(id)_cleanup;
-(id)_setup;
-(int)engineType;
-(int)engineMode;
-(BOOL)shouldCommitIfPossible;
-(id)settingsContext;
-(BOOL)isEncrypted;
-(unsigned)retryCount;
-(id)_retry;
-(id)_resume;
@end

