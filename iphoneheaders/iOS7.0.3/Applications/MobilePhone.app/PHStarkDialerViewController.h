/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/PHStarkGenericTableViewController.h>

@class DialerController;

@interface PHStarkDialerViewController : PHStarkGenericTableViewController {

	DialerController* _dialerController;
	int _currentHighlightedControlIndex;

}

@property (retain) DialerController * dialerController;              //@synthesize dialerController=_dialerController - In the implementation block
@property (assign) int currentHighlightedControlIndex;               //@synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex - In the implementation block
-(void)setDialerController:(id)arg1 ;
-(id)dialerController;
-(int)currentHighlightedControlIndex;
-(void)setCurrentHighlightedControlIndex:(int)arg1 ;
-(void)dealloc;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)loadView;
@end
