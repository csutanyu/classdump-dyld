/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol {

	MSRPCContext* _context;
	NSArray* _assetsInFlight;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)requestReauthorizationForAssets:(id)arg1 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)abort;
-(void).cxx_destruct;
@end
