/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <Reminders/RemindersListHeaderViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Reminders/RemindersListModelDelegate.h>
#import <Reminders/RemindersCheckboxCell.h>

@protocol RemindersListControllerDelegate;
@class UILabel, EKReminder, NSString, RemindersListModel, UITableView, UIView, RemindersListHeaderView, RemindersCardController, NSMutableArray;

@interface RemindersListController : UIViewController <UITextFieldDelegate, UITextViewDelegate, RemindersListHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, RemindersListModelDelegate, RemindersCheckboxCell> {

	UILabel* _loadingLabel;
	BOOL _needsScrollToHighlightedReminder;
	EKReminder* _swipedReminder;
	BOOL _shouldIgnoreSwipeUpdates;
	EKReminder* _highlightedReminder;
	NSString* _highlightedTerm;
	BOOL _showsHeader;
	BOOL _needsReload;
	RemindersListModel* _model;
	<RemindersListControllerDelegate>* _delegate;
	int _status;
	int _numberOfEmptyRows;
	UITableView* _tableView;
	UIView* _tableMaskingView;
	RemindersListHeaderView* _headerView;
	RemindersCardController* _containingCardController;
	NSMutableArray* _changedObjectIDs;

}

@property (readonly) RemindersListModel * model;                                              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) <RemindersListControllerDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsHeader;                                                //@synthesize showsHeader=_showsHeader - In the implementation block
@property (assign,nonatomic) int status;                                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int numberOfEmptyRows;                                           //@synthesize numberOfEmptyRows=_numberOfEmptyRows - In the implementation block
@property (readonly) UITableView * tableView;                                                 //@synthesize tableView=_tableView - In the implementation block
@property (readonly) UIView * tableMaskingView;                                               //@synthesize tableMaskingView=_tableMaskingView - In the implementation block
@property (readonly) RemindersListHeaderView * headerView;                                    //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) RemindersCardController * containingCardController;              //@synthesize containingCardController=_containingCardController - In the implementation block
@property (readonly) BOOL showsCompleted; 
@property (nonatomic,retain) NSMutableArray * changedObjectIDs;                               //@synthesize changedObjectIDs=_changedObjectIDs - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                                                //@synthesize needsReload=_needsReload - In the implementation block
+(float)defaultTableCellHeight;
-(void)setNeedsReload:(BOOL)arg1 ;
-(BOOL)needsReload;
-(void)setHighlightedReminder:(id)arg1 forSearchTerm:(id)arg2 ;
-(void)fadeOutHighlightedReminder;
-(void)setContainingCardController:(id)arg1 ;
-(void)eventStoreChangedWithChangedObjectIDs:(id)arg1 ;
-(void)alarmsFired;
-(void)calendarsChanged;
-(Class)classForListModel;
-(void)_fontSizeChanged:(id)arg1 ;
-(void)hideLoadingLabelIfNecessary;
-(id)indexPathForReminder:(id)arg1 ;
-(id)changedObjectIDs;
-(void)setChangedObjectIDs:(id)arg1 ;
-(void)configureHeaderView:(id)arg1 withStatus:(int)arg2 ;
-(void)_clearPendingChangedObjectIDs;
-(void)reloadChangedObjectIDs;
-(void)_scrollToMakeHighlightedReminderVisible;
-(void)_reloadTable;
-(int)headerViewStyle;
-(void)tableViewDeselectRow;
-(BOOL)shouldLoadOnAppearing;
-(void)_loadIfNecessary;
-(void)showLoadingLabelIfNecessary;
-(void)handleRefresh;
-(BOOL)hasNoDataYet;
-(id)dueDateStringForReminder:(id)arg1 ;
-(id)locationStringForReminder:(id)arg1 ;
-(id)reminderAtIndexPath:(id)arg1 ;
-(unsigned)positionOfDeadlineInCells;
-(void)setCellProperties:(id)arg1 fromReminder:(id)arg2 ignoringTitle:(BOOL)arg3 ;
-(void)scrollToHighlightedReminderIfNecessary;
-(BOOL)displaysCalendarNameInCells;
-(BOOL)shouldRemoveSectionForDelete:(id)arg1 ;
-(void)didDeleteReminderAtIndexPath:(id)arg1 ;
-(id)containingCardController;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(void)didCheckOrUncheckReminder:(id)arg1 atIndexPath:(id)arg2 ;
-(id)displayedCalendar;
-(void)headerEditButtonTapped;
-(void)modelFinishedInitialLoad:(id)arg1 ;
-(void)model:(id)arg1 loadedRemindersInRange:(NSRange)arg2 ;
-(void)checkboxCellDidTapCheckbox:(id)arg1 ;
-(BOOL)showsCompleted;
-(BOOL)displaysDueDateInCells;
-(BOOL)displaysDueDateInCellForDateComponents:(id)arg1 ;
-(BOOL)allowsCreatingNewReminder;
-(BOOL)hasReminderAtIndexPath:(id)arg1 ;
-(int)modelIndexOfReminderAtIndexPath:(id)arg1 ;
-(id)indexPathForReminderAtModelIndex:(int)arg1 ;
-(BOOL)willBeDisplayingReminder:(id)arg1 ;
-(void)setBeingDisplayed:(BOOL)arg1 ;
-(void)listFinishedPresenting;
-(BOOL)showsHeader;
-(void)setShowsHeader:(BOOL)arg1 ;
-(int)numberOfEmptyRows;
-(void)setNumberOfEmptyRows:(int)arg1 ;
-(id)tableMaskingView;
-(BOOL)isScheduled;
-(void)_localeChanged;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)delegate;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(float)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(id)model;
-(id)headerView;
-(id)tableView;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setStatus:(int)arg1 animated:(BOOL)arg2 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void).cxx_destruct;
@end

