/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/EKReminderViewControllerDelegate.h>
#import <AdSheet/ADReminderComposerJSO_Bindings.h>

@class JSValue, EKEventStore;

@interface ADReminderComposerJSO : ADJavaScriptObject <EKReminderViewControllerDelegate, ADReminderComposerJSO_Bindings> {

	EKEventStore* _eventStore;

}

@property (nonatomic,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)presentComposerForReminder:(id)arg1 fromRect:(id)arg2 ;
-(id)eventStore;
-(void)viewSizeChangedAnimated:(BOOL)arg1 ;
-(void)reminderViewControllerSaved:(id)arg1 ;
-(void)reminderViewControllerCanceled:(id)arg1 ;
-(void)reminderViewControllerDeleted:(id)arg1 ;
-(void)dealloc;
@end

