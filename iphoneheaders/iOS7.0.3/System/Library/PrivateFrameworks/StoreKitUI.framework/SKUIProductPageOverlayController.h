/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIPadProductPageDelegate.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>

@protocol SKUIProductPageOverlayDelegate;
@class SKUIClientContext, SKUIItem, SKUIOverlayContainerViewController, UIViewController, NSArray, UIView;

@interface SKUIProductPageOverlayController : NSObject <SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	<SKUIProductPageOverlayDelegate>* _delegate;
	SKUIItem* _initialItem;
	SKUIOverlayContainerViewController* _overlayViewController;
	UIViewController* _parentViewController;

}

@property (nonatomic,readonly) UIViewController * parentViewController;                       //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUIProductPageOverlayDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int numberOfVisibleOverlays; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) UIView * view; 
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)view;
-(id)parentViewController;
-(void)dismiss;
-(id)URLs;
-(void)iPadProductPage:(id)arg1 openItem:(id)arg2 ;
-(void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(/*^block*/ id)arg3 ;
-(void)iPadProductPageCannotOpen:(id)arg1 ;
-(id)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(void)showWithInitialURLs:(id)arg1 ;
-(void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2 ;
-(void)showWithInitialItem:(id)arg1 ;
-(int)numberOfVisibleOverlays;
-(void)_showWithInitialViewController:(id)arg1 ;
-(void)_showOverlayViewController;
-(void)_finishDismissAndNotifyDelegate:(BOOL)arg1 withViewController:(id)arg2 ;
-(void)_backstopViewAction:(id)arg1 ;
-(void)showWithInitialItemIdentifier:(long long)arg1 ;
-(void)showWithInitialURL:(id)arg1 ;
-(void)showWithInitialURLRequest:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

