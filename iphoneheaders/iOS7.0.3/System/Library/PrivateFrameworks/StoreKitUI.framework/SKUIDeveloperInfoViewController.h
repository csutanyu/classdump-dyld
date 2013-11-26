/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

@interface SKUIDeveloperInfoViewController : SKUIViewController {

	SKUIDeveloperInfo* _developerInfo;
	SKUIDeveloperInfoView* _infoView;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)loadView;
-(id)developerInfo;
-(id)initWithDeveloperInfo:(id)arg1 ;
-(void).cxx_destruct;
@end
