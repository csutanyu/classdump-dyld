/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <EventKitUI/EKEventAttachmentCellControllerDelegate.h>

@protocol EKEventAttachmentEditViewControllerDelegate;
@class UITableView, NSArray;

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate> {

	UITableView* _table;
	NSArray* _cellControllers;
	<EKEventAttachmentEditViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <EKEventAttachmentEditViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)viewDidLoad;
-(void)loadView;
-(void).cxx_destruct;
@end

