/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSDate;

@interface MPNowPlayingInfoCenter : NSObject {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDate* _pushDate;

}

@property (copy) NSDictionary * nowPlayingInfo; 
+(id)defaultCenter;
-(void)_pushNowPlayingInfoAndRetry:(BOOL)arg1 ;
-(void)setNowPlayingInfo:(id)arg1 ;
-(id)nowPlayingInfo;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
@end
