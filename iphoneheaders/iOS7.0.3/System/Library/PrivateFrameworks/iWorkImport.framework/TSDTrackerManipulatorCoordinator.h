/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSDTrackerManipulator;
@class NSMutableSet, NSObject;

@interface TSDTrackerManipulatorCoordinator : NSObject {

	NSMutableSet* mRegisteredTMs;
	NSObject<TSDTrackerManipulator>* mControllingTM;

}

@property (nonatomic,readonly) NSObject<TSDTrackerManipulator> * controllingTM; 
+(void)p_removeDynamicSubclass:(id)arg1 ;
+(void)p_dynamicallySubclassGRForNotification:(id)arg1 ;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg1 ;
-(void)p_notifyControlChange;
-(void)operationWillEnd;
-(void)operationDidEnd;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg1 ;
-(void)registerTrackerManipulator:(id)arg1 ;
-(void)unregisterTrackerManipulator:(id)arg1 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg1 ;
-(id)controllingTM;
-(void)dealloc;
-(id)init;
@end
