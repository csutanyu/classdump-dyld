/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSArray;

@interface ABModelRecord : NSObject {

	int _recordID;
	CFStringRef _sortKey;
	long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;

}
-(id)initWithRecordID:(int)arg1 highlightIndex:(long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(CFStringRef)arg5 ;
-(long)highlightIndex;
-(id)namePieces;
-(CFStringRef)sortKey;
-(void)dealloc;
-(BOOL)isGroup;
-(int)recordID;
@end
