/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <CoreFoundation/NSCopying.h>

@interface DownloadNetworkConstraintError : DownloadError <NSCopying> {

	BOOL _canDownloadInITunes;
	long long _sizeLimit;

}

@property (assign,nonatomic) BOOL canDownloadInITunes;                    //@synthesize canDownloadInITunes=_canDownloadInITunes - In the implementation block
@property (assign,nonatomic) long long constrainedSizeLimit;              //@synthesize sizeLimit=_sizeLimit - In the implementation block
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(BOOL)isValidError;
-(long long)constrainedSizeLimit;
-(BOOL)canDownloadInITunes;
-(id)_specificStringWithLocalizedKeyBase:(id)arg1 ;
-(id)_genericStringWithLocalizedKeyBase:(id)arg1 ;
-(void)setCanDownloadInITunes:(BOOL)arg1 ;
-(void)setConstrainedSizeLimit:(long long)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)copyUserNotification;
@end

