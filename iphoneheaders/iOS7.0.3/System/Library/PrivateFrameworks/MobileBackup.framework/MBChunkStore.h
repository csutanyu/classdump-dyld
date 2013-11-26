/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MBChunkStoreProgressModel;

@interface MBChunkStore : NSObject {

	id _delegate;
	MBChunkStoreProgressModel* _progressModel;
	BOOL _cancelled;

}

@property (assign,nonatomic) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MBChunkStoreProgressModel * progressModel;              //@synthesize progressModel=_progressModel - In the implementation block
-(id)progressModel;
-(void)destroy;
-(BOOL)registerItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)putBatch:(id)arg1 error:(id*)arg2 ;
-(void)getBatch:(id)arg1 block:(/*^block*/ id)arg2 ;
-(void)uncancel;
-(BOOL)getBatch:(id)arg1 error:(id*)arg2 ;
-(void)registerItems:(id)arg1 ;
-(BOOL)isOpen;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)isCancelled;
-(void)cancel;
-(void)close;
-(void)remove;
-(void)open;
@end
