/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage {

	int _personID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) int personID;                       //@synthesize personID=_personID - In the implementation block
-(id)personName;
-(void)dealloc;
-(void)markAsRead;
-(id)initWithRecordID:(int)arg1 ;
-(void)resetIMPerson;
-(void)setPersonName:(id)arg1 ;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
@end
