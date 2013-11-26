/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionIncomingReplyBlockTable : NSObject {

	CFDictionaryRef _replyTable;
	int _replyTableLock;
	unsigned long _sequence;

}
-(unsigned long)sequenceForIncomingReplyBlockWithCleanupBlock:(/*^block*/ id)arg1 ;
-(BOOL)removeIncomingReplyBlockForSequence:(unsigned long)arg1 ;
-(void)cleanupIncomingReplyBlocks;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end
