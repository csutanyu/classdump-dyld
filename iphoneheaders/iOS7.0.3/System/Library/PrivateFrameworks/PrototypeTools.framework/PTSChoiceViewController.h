/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <PrototypeTools/PTSRowObserver.h>

@class NSIndexPath, PTSChoiceRow;

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTSChoiceRow* _row;

}

@property (nonatomic,retain) PTSChoiceRow * row;              //@synthesize row=_row - In the implementation block
-(void)dealloc;
-(id)row;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setRow:(id)arg1 ;
-(id)_indexPathForValue:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
-(void)row:(id)arg1 didChangeValue:(id)arg2 ;
-(void).cxx_destruct;
@end

