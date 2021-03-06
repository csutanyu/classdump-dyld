/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, ACAccount, ACAccountStore, NSDictionary;

@interface WEPAddressBookLookupOperation : NSOperation {

	NSArray* _emails;
	NSArray* _phones;
	ACAccount* _account;
	ACAccountStore* _store;
	NSDictionary* _personDictionary;
	BOOL _isExecuting;
	BOOL _isFinished;

}

@property (nonatomic,copy) NSArray * emails;                               //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy) NSArray * phones;                               //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSDictionary * personDictionary;              //@synthesize personDictionary=_personDictionary - In the implementation block
-(void)_populateABWithJSONData:(id)arg1 ;
-(id)personDictionary;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)setPersonDictionary:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)emails;
-(id)phones;
-(void)setEmails:(id)arg1 ;
-(void)setPhones:(id)arg1 ;
-(void).cxx_destruct;
@end

