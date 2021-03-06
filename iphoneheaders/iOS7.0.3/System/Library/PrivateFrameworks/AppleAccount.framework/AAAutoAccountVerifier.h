/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/MSSearchDelegate.h>

@class NSOperationQueue, MSSearch, ACAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {

	NSOperationQueue* _requesterQueue;
	MSSearch* _search;
	ACAccount* _account;
	/*^block*/ id _handler;
	int _attempts;
	BOOL _canceled;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)init;
-(void)cancel;
-(void)_resendVerificationEmailForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_verify;
-(void)_validateToken:(id)arg1 ;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(/*^block*/ id)arg1 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

