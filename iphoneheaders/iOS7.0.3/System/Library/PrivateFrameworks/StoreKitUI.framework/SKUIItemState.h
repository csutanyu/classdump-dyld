/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIItemState : NSObject <NSCopying> {

	NSString* _downloadPhase;
	float _downloadProgress;
	long long _installedVersionIdentifier;
	NSNumber* _itemIdentifier;
	unsigned _state;

}

@property (nonatomic,copy) NSString * downloadPhase;                            //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) float downloadProgress;                            //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) long long installedVersionIdentifier;              //@synthesize installedVersionIdentifier=_installedVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned state;                                    //@synthesize state=_state - In the implementation block
-(float)downloadProgress;
-(id)downloadPhase;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setDownloadPhase:(id)arg1 ;
-(void)setDownloadProgress:(float)arg1 ;
-(long long)installedVersionIdentifier;
-(void)setInstalledVersionIdentifier:(long long)arg1 ;
-(void).cxx_destruct;
-(id)itemIdentifier;
-(void)setItemIdentifier:(id)arg1 ;
@end
