/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/DownloadsSession.h>

@class DownloadsChangeset, ExternalDownloadState;

@interface DownloadsExternalTransaction : DownloadsSession {

	DownloadsChangeset* _changeset;
	ExternalDownloadState* _externalState;

}

@property (nonatomic,readonly) DownloadsChangeset * changeset;              //@synthesize changeset=_changeset - In the implementation block
-(id)initWithSessionDescriptor:(id)arg1 ;
-(id)changeset;
-(void)setExternalPropertyValues:(id)arg1 forAssetWithID:(long long)arg2 ;
-(void)unionChangeset:(id)arg1 ;
-(void)setExternalPropertyValues:(id)arg1 forDownloadWithID:(long long)arg2 ;
-(void)addDownloadChangeTypes:(int)arg1 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3 ;
-(void)setRestoreReason:(id)arg1 ;
-(void)removeExternalValuesForDownloadID:(long long)arg1 ;
-(void)removeExternalValuesForAssetID:(long long)arg1 ;
-(void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3 ;
-(void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3 ;
-(void)dealloc;
@end
