/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICategoryTableViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUICategoryControllerDelegate;
@class SKUICategoryArtworkLoader, UIBarButtonItem, SKUIClientContext, UIViewController, NSURL, SSVLoadURLOperation, NSOperationQueue, UIPopoverController, SKUICategory, SKUISegmentedControl, NSArray, SKUICategoryTableViewController, UISegmentedControl;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {

	SKUICategoryArtworkLoader* _artworkLoader;
	UIBarButtonItem* _button;
	SKUIClientContext* _clientContext;
	UIViewController* _contentsController;
	NSURL* _defaultURL;
	<SKUICategoryControllerDelegate>* _delegate;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	UIPopoverController* _popover;
	SKUICategory* _rootCategory;
	NSURL* _selectedURL;
	SKUISegmentedControl* _segmentedControl;
	int _segmentedControlLength;
	NSArray* _segmentedControlSegments;
	SKUICategoryTableViewController* _tableViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUICategoryControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUICategory * category;                                         //@synthesize rootCategory=_rootCategory - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                              //@synthesize defaultURL=_defaultURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * categoryButton; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (assign,nonatomic) int segmentedControlLength;                                      //@synthesize segmentedControlLength=_segmentedControlLength - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl; 
@property (nonatomic,retain) NSURL * selectedURL;                                             //@synthesize selectedURL=_selectedURL - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)dismiss;
-(BOOL)isLoading;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)segmentedControl;
-(void)buttonAction:(id)arg1 ;
-(id)clientContext;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(void)loadFromURL:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)setSelectedURL:(id)arg1 ;
-(void)setDefaultURL:(id)arg1 ;
-(id)categoryButton;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
-(id)defaultURL;
-(id)selectedURL;
-(void)_setCachedResponse:(id)arg1 error:(id)arg2 ;
-(void)segmentedControlAction:(id)arg1 ;
-(void)_reloadSegmentedControl;
-(void)_precacheArtworkForCategory:(id)arg1 ;
-(void)_reloadSelectedSegment;
-(id)_rootMetricsLocations;
-(id)_tableViewControllerWithCategory:(id)arg1 ;
-(id)_metricsLocationsWithIndex:(int)arg1 ;
-(void)_recordClickEventWithCategory:(id)arg1 index:(int)arg2 ;
-(void)setSegmentedControlLength:(int)arg1 ;
-(int)segmentedControlLength;
-(void).cxx_destruct;
-(id)initWithContentsController:(id)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(id)_artworkLoader;
@end

