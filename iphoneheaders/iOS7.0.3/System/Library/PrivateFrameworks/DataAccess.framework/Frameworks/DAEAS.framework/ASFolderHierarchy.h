/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {

	ASAccount* _account;
	NSMutableDictionary* _folderCache;
	NSMutableDictionary* _folderByIdCache;
	id _delegate;

}
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
+(id)_dataDirectoryPath;
+(id)_folderCacheFilenameWithId:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)arg1 ;
-(void)blowAwayFolderCache;
-(id)folders;
-(id)folderForID:(id)arg1 ;
-(void)clearLocalCache;
-(id)_folderCacheFilename;
-(void)_setFolderByIdCacheFromCurrentCache;
-(void)_setFolderPathsFromCurrentCache;
-(void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
-(id)folderCache;
-(id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3 ;
-(void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg1 ;
-(void)setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_pruneBadFolderIdsThatExternalClientsCareAbout;
-(void)_setFolderCache:(id)arg1 ;
-(void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
-(id)_savedFolderPathsThatExternalClientsCareAbout;
-(void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg1 ;
-(id)_deviceIdInCache;
-(id)foldersUnderFolderWithID:(id)arg1 ;
-(void)setFolderCache:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end
