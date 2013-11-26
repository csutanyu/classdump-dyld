/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSOperation, NSObject;

@interface __NSOperationQueueInternal : NSObject {

	int __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	NSObject<OS_dispatch_queue>* __pending_barrier;
	int __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned __unused2;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	unsigned char __pad1[1];
	NSObject<OS_dispatch_queue>* __dispatchQueue;
	BOOL __nameBuffer[160];

}
-(void)dealloc;
-(id)init;
-(void)finalize;
@end
