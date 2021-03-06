/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <passd/WDNetworkTaskDelegate.h>
#import <IDSFoundation/APSConnectionDelegate.h>
#import <passd/PDDatabaseManagerWebServicesDelegate.h>

@protocol WDWebServicesCoordinatorDelegate;
@class APSConnection, NSString, WDCardFileManager, PDDatabaseManager, WDNetworkTaskManager, NSMutableDictionary;

@interface WDWebServicesCoordinator : NSObject <WDNetworkTaskDelegate, APSConnectionDelegate, PDDatabaseManagerWebServicesDelegate> {

	<WDWebServicesCoordinatorDelegate>* _delegate;
	APSConnection* _apsConnection;
	NSString* _pushToken;
	WDCardFileManager* _cardFileManager;
	PDDatabaseManager* _databaseManager;
	WDNetworkTaskManager* _taskManager;
	NSMutableDictionary* _taskToHandlerMap;

}

@property (nonatomic,readonly) PDDatabaseManager * databaseManager;              //@synthesize databaseManager=_databaseManager - In the implementation block
@property (nonatomic,readonly) WDNetworkTaskManager * taskManager;               //@synthesize taskManager=_taskManager - In the implementation block
+(void)initializeConfigurationDefaults;
+(void)initialize;
-(id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2 delegate:(id)arg3 ;
-(void)updateCardWithUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)nukeTasks;
-(id)databaseManager;
-(void)handleInsertion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(BOOL)arg4 source:(int)arg5 ;
-(void)handleModification:(id)arg1 webService:(id)arg2 pushEnabled:(BOOL)arg3 source:(int)arg4 ;
-(void)handleDeletion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(BOOL)arg4 ;
-(void)handlePushEnabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3 ;
-(void)handlePushDisabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3 ;
-(void)task:(id)arg1 gotResult:(id)arg2 ;
-(void)taskSucceeded:(id)arg1 ;
-(void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2 ;
-(void)taskFailed:(id)arg1 ;
-(void)task:(id)arg1 encounteredError:(id)arg2 ;
-(id)_calculateTopics;
-(void)_updatePassTypeID:(id)arg1 ;
-(void)_cancelAllTasksForPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(void)_registerWithSerialNumber:(id)arg1 authToken:(id)arg2 webService:(id)arg3 ;
-(void)_cancelAutomaticUpdateTasksForPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(void)_cancelWhatChangedTasksForPassTypeID:(id)arg1 ;
-(void)adjustStateForIncomingPushNotification:(id)arg1 andComputeNextUpdateDate:(id*)arg2 ;
-(void)_scheduleUpdateForPassTypeID:(id)arg1 afterDate:(id)arg2 ;
-(void)_getSerialNumbersTask:(id)arg1 gotResult:(id)arg2 ;
-(void)_getPassTask:(id)arg1 gotResult:(id)arg2 ;
-(void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(id)arg2 ;
-(void)_registrationTaskSucceeded:(id)arg1 ;
-(void)_whatChangedTaskSucceeded:(id)arg1 ;
-(void)reportAbandonedTask:(id)arg1 passTypeID:(id)arg2 ;
-(void)reportError:(id)arg1 webService:(id)arg2 logToService:(BOOL)arg3 ;
-(void)reportPushWithNoSerialNumbersFromTasks:(id)arg1 ;
-(void)reportMissingTagWithRequestedSerialNumbers:(id)arg1 forWebService:(id)arg2 ;
-(void)reportUnmodifiedTag:(id)arg1 withRequestedSerialNumbers:(id)arg2 forWebService:(id)arg3 ;
-(void)reportUpdateRequestForNonPushEnabledSerialNumber:(id)arg1 forWebService:(id)arg2 ;
-(void)reportUnchangedPassForServerRequestedUpdateTask:(id)arg1 ;
-(void)reportIgnoredIfModifiedSince:(id)arg1 forSerialNumber:(id)arg2 webService:(id)arg3 ;
-(void)reportMissingLastModifiedForSerialNumber:(id)arg1 webService:(id)arg2 ;
-(double)_zeroIntervalForPassTypeID:(id)arg1 ;
-(double)_updatedFrequencyScoreForScore:(double)arg1 lastPushDate:(id)arg2 zeroInterval:(double)arg3 ;
-(int)_rateLimitLevelForFrequencyScore:(double)arg1 ;
-(void)reportPushRateLimitLevel:(int)arg1 forPassTypeID:(id)arg2 ;
-(void)_presentUnregistrationAlertForPassTypeID:(id)arg1 ;
-(id)_nextUpdateDateWithLastUpdateDate:(id)arg1 rateLimitLevel:(int)arg2 ;
-(void)_aggdLogPushRateLevel:(id)arg1 forPassTypeID:(id)arg2 ;
-(void)_aggdLogUpdatesDespiteMisuse:(unsigned)arg1 passTypeID:(id)arg2 ;
-(void)_aggdLogAbandonedTask:(id)arg1 passTypeID:(id)arg2 ;
-(void)_aggdLogTaskErrorCode:(int)arg1 passTypeID:(id)arg2 ;
-(void)_aggdLogWebServiceErrorCode:(int)arg1 passTypeID:(id)arg2 ;
-(id)_userNotificationParametersForPassTypeID:(id)arg1 ;
-(void)resetPushFrequencyStateForPassTypeID:(id)arg1 ;
-(void)_unregisterPassesOfType:(id)arg1 ;
-(void)dealloc;
-(void)connect;
-(id)taskManager;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end

