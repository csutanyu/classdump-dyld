/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSURLDownload.h>

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {

	WebDownloadInternal* _webInternal;

}
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_setRealDelegate:(id)arg1 ;
-(void)connection:(id)arg1 willStopBufferingData:(id)arg2 ;
@end
