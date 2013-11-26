/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject {

	BOOL _isPositiveMatch;
	NSArray* _searchTerms;
	unsigned long long _mask;

}

@property (nonatomic,readonly) unsigned long long mask;              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) NSArray * searchTerms;                //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,readonly) BOOL isPositiveMatch;                 //@synthesize isPositiveMatch=_isPositiveMatch - In the implementation block
+(id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
-(void)dealloc;
-(unsigned long long)mask;
-(id)searchTerms;
-(BOOL)isPositiveMatch;
-(id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
@end
