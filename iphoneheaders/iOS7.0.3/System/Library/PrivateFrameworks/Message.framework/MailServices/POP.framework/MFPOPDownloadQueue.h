/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFBufferedQueue.h>

@class MFSqliteMessageIDStore, MFMessageLibrary, MFMailboxUid, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue {

	MFSqliteMessageIDStore* _uidStore;
	MFMessageLibrary* _library;
	MFMailboxUid* _mailbox;
	NSDate* startDate;

}
-(id)init;
-(BOOL)addItem:(id)arg1 ;
-(unsigned)sizeForItem:(id)arg1 ;
-(BOOL)handleItems:(id)arg1 ;
@end
