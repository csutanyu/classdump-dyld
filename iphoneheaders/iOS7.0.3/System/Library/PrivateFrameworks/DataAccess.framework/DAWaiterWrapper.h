/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol DADataclassLockWatcher;
@interface DAWaiterWrapper : NSObject {

	<DADataclassLockWatcher>* _waiter;
	int _dataclasses;
	/*^block*/ id _completionHandler;
	int _waiterNum;

}

@property (retain) <DADataclassLockWatcher> * waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) int dataclasses;                                //@synthesize dataclasses=_dataclasses - In the implementation block
@property (readonly) int waiterNum;                                //@synthesize waiterNum=_waiterNum - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(/*^block*/ id)completionHandler;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)waiter;
-(void)setWaiter:(id)arg1 ;
-(int)waiterNum;
-(int)dataclasses;
-(void)setDataclasses:(int)arg1 ;
@end

