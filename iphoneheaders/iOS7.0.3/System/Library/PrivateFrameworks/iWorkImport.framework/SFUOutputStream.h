/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(BOOL)canCreateInputStream;
-(id)inputStream;
@end

