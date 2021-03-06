/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 didFailWithError:(id)arg2;
-(void)downloadDidBegin:(id)arg1;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(BOOL)downloadShouldUseCredentialStorage:(id)arg1;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned)arg2;
-(BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
-(void)download:(id)arg1 didCreateDestination:(id)arg2;
-(void)downloadDidFinish:(id)arg1;
-(BOOL)download:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
@end

