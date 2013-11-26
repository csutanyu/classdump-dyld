/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CFNetwork/NDBackgroundSessionManagerProtocol.h>
#import <nsnetworkd/NDBackgroundSessionDelegate.h>

@protocol OS_dispatch_queue, NDSessionManagerDelegate;
@class NSMutableDictionary, NSString, NSURL, NSObject, NSXPCConnection, ;

@interface NDSessionManager : NSObject <NDBackgroundSessionManagerProtocol, NDBackgroundSessionDelegate> {

	NSMutableDictionary* _sessions;
	NSMutableDictionary* _reconnectingProxies;
	NSString* _clientBundleID;
	NSURL* _bundleDirectory;
	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _boostReply;
	NSXPCConnection* _xpcConn;
	<NDSessionManagerDelegate>* _delegate;

}

@property (__weak) NSXPCConnection * xpcConn;                          //@synthesize xpcConn=_xpcConn - In the implementation block
@property (__weak) <NDSessionManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)obliterate;
-(void)sessionCompleted:(id)arg1 ;
-(void)clientDisconnected;
-(void)clientApplicationWasReinstalled;
-(id)archivePath;
-(id)initWithDelegate:(id)arg1 bundleID:(id)arg2 ;
-(void)archiveState;
-(id)getSessionWithIdentifier:(id)arg1 ;
-(id)downloadDirectoryDataPath;
-(id)xpcConn;
-(void)setXpcConn:(id)arg1 ;
-(void)boost:(/*^block*/ id)arg1 ;
-(void)dropBoost;
-(void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 reply:(/*^block*/ id)arg4 ;
-(void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)releaseAssertionForSession:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cleanup;
-(void).cxx_destruct;
-(id)restoreState;
@end
