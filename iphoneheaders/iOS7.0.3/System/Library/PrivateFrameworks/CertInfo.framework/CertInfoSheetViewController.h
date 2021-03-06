/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol CertInfoSheetViewControllerDelegate;
@class NSString, NSDate, NSArray;

@interface CertInfoSheetViewController : UIViewController {

	NSString* _serviceName;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _trustPurpose;
	NSDate* _trustExpiration;
	NSArray* _trustProperties;
	<CertInfoSheetViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) NSString * serviceName;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                         //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                      //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * trustPurpose;                                       //@synthesize trustPurpose=_trustPurpose - In the implementation block
@property (nonatomic,retain) NSDate * trustExpiration;                                      //@synthesize trustExpiration=_trustExpiration - In the implementation block
@property (nonatomic,retain) NSArray * trustProperties;                                     //@synthesize trustProperties=_trustProperties - In the implementation block
@property (assign,nonatomic) <CertInfoSheetViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)serviceName;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_cancel;
-(id)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(id)arg1 ;
-(void)_dismissWithResult:(int)arg1 ;
-(id)trustTitle;
-(void)setTrustTitle:(id)arg1 ;
-(id)trustSubtitle;
-(void)setTrustSubtitle:(id)arg1 ;
-(id)trustPurpose;
-(id)trustExpiration;
-(void)_pushDetailsView;
-(void)setTrustPurpose:(id)arg1 ;
-(void)setTrustExpiration:(id)arg1 ;
-(void)setServiceName:(id)arg1 ;
-(void)_accept;
@end

