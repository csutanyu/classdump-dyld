/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MRMediaRemoteRunAssertion, NSData, NSDictionary;

@interface _MRMediaRemoteNPInfoClient : NSObject {

	MRMediaRemoteRunAssertion* _runAssertion;
	NSData* _nowPlayingArtworkData;
	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,retain) NSData * nowPlayingArtworkData;              //@synthesize nowPlayingArtworkData=_nowPlayingArtworkData - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;               //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
-(void)setNowPlayingInfo:(id)arg1 ;
-(id)nowPlayingInfo;
-(void)dealloc;
-(id)init;
-(id)nowPlayingArtworkData;
-(void)setNowPlayingArtworkData:(id)arg1 ;
@end

