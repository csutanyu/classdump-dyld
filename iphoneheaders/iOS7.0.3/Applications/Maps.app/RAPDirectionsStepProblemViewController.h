/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>

@class NSArray, GEOStep, GEORoute, GEODirectionsResponse, GEORPDirectionsEvent, ReportAProblemCommentsViewController, ReportAProblemNavigationController;

@interface RAPDirectionsStepProblemViewController : UITableViewController <ReportAProblemReporter> {

	int _selectedProblem;
	NSArray* _stepProblems;
	GEOStep* _step;
	GEORoute* _route;
	GEODirectionsResponse* _response;
	GEORPDirectionsEvent* _synthesizedStep;
	ReportAProblemCommentsViewController* _commentsViewController;

}

@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
+(id)stepCellForTable:(id)arg1 ;
+(id)problemCellForTable:(id)arg1 ;
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)_next;
-(id)initWithSelectedStep:(id)arg1 fromRoute:(id)arg2 response:(id)arg3 orSynthesizedStep:(id)arg4 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)navigationController;
-(void)_cancel;
@end

