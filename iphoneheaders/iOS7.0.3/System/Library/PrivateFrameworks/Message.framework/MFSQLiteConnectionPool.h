/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MFSQLiteConnectionPoolDelegate, OS_dispatch_semaphore;
#import <Message/Message-Structs.h>
@class NSLock, NSMutableSet, NSObject;

@interface MFSQLiteConnectionPool : NSObject {

	<MFSQLiteConnectionPoolDelegate>* _delegate;
	NSLock* _cacheLock;
	NSMutableSet* _cache;
	unsigned _cacheSize;
	unsigned _cacheGeneration;
	unsigned _maxConcurrentBackgroundReaders;
	unsigned _maxConcurrentWriters;
	NSLock* _checkoutLock;
	CFDictionaryRef _checkoutMap;
	NSObject<OS_dispatch_semaphore>* _backgroundReaderSemaphore;
	int _backgroundReadersWaiting;
	NSObject<OS_dispatch_semaphore>* _writerSemaphore;
	int _writersWaiting;

}

@property (assign) <MFSQLiteConnectionPoolDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned cacheSize; 
@property (readonly) unsigned maxConcurrentBackgroundReaders;                //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (readonly) unsigned maxConcurrentWriters; 
@property (readonly) unsigned backgroundReadersWaiting; 
@property (readonly) unsigned writersWaiting; 
-(void)setCacheSize:(unsigned)arg1 ;
-(unsigned)cacheSize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)flush;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned)arg2 ;
-(unsigned)writersWaiting;
-(id)backgroundReaderConnection;
-(id)_connectionWithType:(unsigned)arg1 ;
-(id)_semaphoreForConnectionType:(unsigned)arg1 waitCounter:(int*)arg2 ;
-(unsigned)maxConcurrentReaders;
-(unsigned)maxConcurrentWriters;
-(unsigned)backgroundReadersWaiting;
-(unsigned)maxConcurrentBackgroundReaders;
-(id)readerConnection;
-(id)writerConnection;
-(void)checkInConnection:(id)arg1 ;
@end

