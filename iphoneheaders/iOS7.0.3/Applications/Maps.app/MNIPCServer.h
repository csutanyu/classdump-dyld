/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNLockScreenSessionDelegate.h>
#import <Maps/MNNavigationSessionUIDelegate.h>

@protocol MNLockScreenLayerSource, MNExternalGuidanceSource, MNBackgroundNavigationDelegate;
@class CPDistributedMessagingCenter, UIView, NSTimer, BKSProcessAssertion, NSDictionary, NSString, NSArray, MNLockScreenDimmingBehavior, UIImage, NSData, MNLockScreenSession;

@interface MNIPCServer : NSObject <MNLockScreenSessionDelegate, MNNavigationSessionUIDelegate> {

	CPDistributedMessagingCenter* _center;
	CPDistributedMessagingCenter* _remoteCenter;
	unsigned _lastSeenManeuverAlert;
	CGRect _previousViewFrame;
	UIView* _previousSuperview;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	BOOL _isDelaying;
	id _beginNavigationDelayedReplyContext;
	BOOL _lastNavigationRequestCameFromSiri;
	BOOL _applicationStateDidChange;
	BOOL _applicationIsActive;
	BOOL _siriSheetIsShowing;
	BOOL _multitaskingTrayIsShowing;
	BOOL _hasAnnouncedViewAvailability;
	BOOL _waitingForDistanceAndTimeToManeuver;
	NSTimer* _waitingForSiriTimer;
	BKSProcessAssertion* _waitingForSiriAssertion;
	BOOL _knowsLockScreenBundleEnabledState;
	BOOL _lockScreenBundleEnabled;
	NSDictionary* _lastSiriRequest;
	int _drivingSide;
	BOOL _sendShieldImage;
	BOOL _newManeuverUpdate;
	NSString* _proceedingToRouteDisplayString;
	unsigned _state;
	int _maneuver;
	NSArray* _maneuverInstructions;
	NSString* _currentGroupIdentifier;
	MNLockScreenDimmingBehavior* _dimmingBehavior;
	int _transportType;
	UIImage* _shieldImage;
	UIImage* _starkBannerShieldImage;
	NSData* _timeAttributedStringData;
	NSData* _etaAttributedStringData;
	int _currentLightLevel;
	<MNLockScreenLayerSource>* _lockScreenLayerSource;
	<MNExternalGuidanceSource>* _externalGuidanceSource;
	<MNBackgroundNavigationDelegate>* _backgroundNavigationDelegate;
	MNLockScreenSession* _lockScreenSession;
	double _distanceToManeuver;
	double _timeToManeuver;
	double _distanceToRoute;
	double _remainingTime;
	double _remainingDistance;
	CGPoint _shieldCenterPoint;
	CGPoint _starkBannerCenterPoint;
	double _lastSentRemainingTime;
	double _lastSentRemainingDistance;

}

@property (assign,nonatomic) <MNLockScreenLayerSource> * lockScreenLayerSource;                                   //@synthesize lockScreenLayerSource=_lockScreenLayerSource - In the implementation block
@property (assign,nonatomic) <MNExternalGuidanceSource> * externalGuidanceSource;                                 //@synthesize externalGuidanceSource=_externalGuidanceSource - In the implementation block
@property (assign,nonatomic) <MNBackgroundNavigationDelegate> * backgroundNavigationDelegate;                     //@synthesize backgroundNavigationDelegate=_backgroundNavigationDelegate - In the implementation block
@property (setter=_setLockScreenSession:,nonatomic,retain) MNLockScreenSession * _lockScreenSession;              //@synthesize lockScreenSession=_lockScreenSession - In the implementation block
@property (assign,nonatomic) unsigned _state;                                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int _maneuver;                                                                       //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) int _drivingSide;                                                                    //@synthesize drivingSide=_drivingSide - In the implementation block
@property (assign,nonatomic) double _distanceToManeuver;                                                          //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) double _distanceToRoute;                                                             //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) double _remainingDistance;                                                           //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) double _timeToManeuver;                                                              //@synthesize timeToManeuver=_timeToManeuver - In the implementation block
@property (assign,nonatomic) double _remainingTime;                                                               //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy) NSArray * _maneuverInstructions;                                                       //@synthesize maneuverInstructions=_maneuverInstructions - In the implementation block
@property (nonatomic,retain) NSString * _proceedingToRouteDisplayString;                                          //@synthesize proceedingToRouteDisplayString=_proceedingToRouteDisplayString - In the implementation block
@property (nonatomic,retain) MNLockScreenDimmingBehavior * _dimmingBehavior;                                      //@synthesize dimmingBehavior=_dimmingBehavior - In the implementation block
@property (assign,nonatomic) int _transportType;                                                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) UIImage * _shieldImage;                                                              //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint _shieldCenterPoint;                                                          //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
@property (nonatomic,retain) UIImage * _starkBannerShieldImage;                                                   //@synthesize starkBannerShieldImage=_starkBannerShieldImage - In the implementation block
@property (assign,nonatomic) CGPoint _starkBannerCenterPoint;                                                     //@synthesize starkBannerCenterPoint=_starkBannerCenterPoint - In the implementation block
@property (assign,nonatomic) BOOL _sendShieldImage;                                                               //@synthesize sendShieldImage=_sendShieldImage - In the implementation block
@property (assign,nonatomic) double _lastSentRemainingTime;                                                       //@synthesize lastSentRemainingTime=_lastSentRemainingTime - In the implementation block
@property (assign,nonatomic) double _lastSentRemainingDistance;                                                   //@synthesize lastSentRemainingDistance=_lastSentRemainingDistance - In the implementation block
@property (nonatomic,retain) NSData * _timeAttributedStringData;                                                  //@synthesize timeAttributedStringData=_timeAttributedStringData - In the implementation block
@property (nonatomic,retain) NSData * _etaAttributedStringData;                                                   //@synthesize etaAttributedStringData=_etaAttributedStringData - In the implementation block
@property (assign,nonatomic) int _currentLightLevel;                                                              //@synthesize currentLightLevel=_currentLightLevel - In the implementation block
@property (assign,nonatomic) BOOL _newManeuverUpdate;                                                             //@synthesize newManeuverUpdate=_newManeuverUpdate - In the implementation block
@property (nonatomic,retain) id beginNavigationDelayedReplyContext;                                               //@synthesize beginNavigationDelayedReplyContext=_beginNavigationDelayedReplyContext - In the implementation block
@property (nonatomic,copy) NSString * _currentGroupIdentifier;                                                    //@synthesize currentGroupIdentifier=_currentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * _lastSiriRequest;                                                       //@synthesize lastSiriRequest=_lastSiriRequest - In the implementation block
+(id)sharedServer;
-(int)_maneuver;
-(int)_drivingSide;
-(void)directionsSession:(id)arg1 failedWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 willStartForRoute:(id)arg2 ;
-(void)navigationSessionWillEnd:(id)arg1 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)navigationSessionWillPause:(id)arg1 ;
-(void)navigationSessionWillResumeFromPause:(id)arg1 ;
-(void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 didChangeState:(int)arg2 ;
-(void)navigationSessionStartingNextStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 updatePointOfInterest:(SCD_Struct_Si10)arg2 focusStyle:(int)arg3 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6 ;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5 ;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di5*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(BOOL)arg12 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(int)arg2 ;
-(void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di5*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2 ;
-(void)directionsSessionWillRequestRoute:(id)arg1 traceRecorderFailed:(BOOL)arg2 ;
-(void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2 ;
-(void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2 ;
-(void)directionsSessionWillRecalculateRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2 ;
-(void)directionsSessionDidCancelRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2 ;
-(void)directionsSession:(id)arg1 didChangeRoutePreloadSession:(id)arg2 ;
-(void)directionsSessionUpdatedETA:(id)arg1 ;
-(void)directionsSessionUpdatedTrafficIncidents:(id)arg1 ;
-(void)directionsSessionRecommendsNewRoute:(id)arg1 oldEstimatedTime:(unsigned)arg2 newEstimatedTime:(unsigned)arg3 finished:(/*^block*/ id)arg4 ;
-(void)_didChangeCurrentLocale:(id)arg1 ;
-(void)setLockScreenLayerSource:(id)arg1 ;
-(id)lockScreenLayerSource;
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)showRecalculating;
-(void)setTotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 ;
-(void)navigationStateDidChangeTo:(unsigned)arg1 reason:(id)arg2 ;
-(void)setBackgroundNavigationDelegate:(id)arg1 ;
-(id)externalGuidanceSource;
-(void)setExternalGuidanceSource:(id)arg1 ;
-(double)_remainingTime;
-(double)_remainingDistance;
-(void)_changeCurrentGroupIdentifier;
-(void)set_dimmingBehavior:(id)arg1 ;
-(id)_showRemoteView:(id)arg1 userInfo:(id)arg2 ;
-(id)_hideRemoteView:(id)arg1 userInfo:(id)arg2 ;
-(id)_setRemoteViewSize:(id)arg1 userInfo:(id)arg2 ;
-(id)_sendCurrentGuidance:(id)arg1 userInfo:(id)arg2 ;
-(id)_repeatCurrentGuidance;
-(id)_prepareBackgroundNavigation:(id)arg1 userInfo:(id)arg2 ;
-(id)_startPreparedBackgroundNavigation:(id)arg1 userInfo:(id)arg2 ;
-(id)_endNavigation;
-(void)_noteApplicationActiveStateChanged:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)updateLightLevelOnLockScreen:(id)arg1 ;
-(void)_setLockScreenSession:(id)arg1 ;
-(void)clearWaitingUntilSiriIsDone;
-(void)set_currentGroupIdentifier:(id)arg1 ;
-(id)_lockScreenSession;
-(void)setLockScreenUIEnabled:(BOOL)arg1 ;
-(void)_startLockScreenSessionIfNeeded;
-(void)_noteGuidanceStateChanged;
-(void)_createLockScreenSessionIfNeeded;
-(void)_addCurrentGuidanceStateToMessageDictionary:(id)arg1 guidanceCausedVibration:(BOOL)arg2 ;
-(BOOL)_requestDictionaryIsForCurrentSession:(id)arg1 ;
-(CGSize)_viewSizeFromRequestDictionary:(id)arg1 ;
-(void)set_currentLightLevel:(int)arg1 ;
-(void)set_transportType:(int)arg1 ;
-(void)_showNoGuidance;
-(void)set_state:(unsigned)arg1 ;
-(void)_noteGuidanceStateChangedWithVibration:(BOOL)arg1 ;
-(void)_vibrateForReroute;
-(void)set_proceedingToRouteDisplayString:(id)arg1 ;
-(void)set_distanceToRoute:(double)arg1 ;
-(void)set_remainingTime:(double)arg1 ;
-(void)set_remainingDistance:(double)arg1 ;
-(id)_maneuverInstructions;
-(void)set_maneuver:(int)arg1 ;
-(void)set_drivingSide:(int)arg1 ;
-(void)set_maneuverInstructions:(id)arg1 ;
-(id)_shieldImage;
-(void)set_shieldImage:(id)arg1 ;
-(void)set_shieldCenterPoint:(CGPoint)arg1 ;
-(void)set_starkBannerShieldImage:(id)arg1 ;
-(void)set_starkBannerCenterPoint:(CGPoint)arg1 ;
-(void)set_timeToManeuver:(double)arg1 ;
-(void)set_distanceToManeuver:(double)arg1 ;
-(void)set_newManeuverUpdate:(BOOL)arg1 ;
-(void)_setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 ;
-(id)_dimmingBehavior;
-(BOOL)_guidanceAffectsDimming;
-(BOOL)_newManeuverUpdate;
-(int)_currentLightLevel;
-(id)_proceedingToRouteDisplayString;
-(double)_distanceToRoute;
-(CGPoint)_shieldCenterPoint;
-(id)_starkBannerShieldImage;
-(CGPoint)_starkBannerCenterPoint;
-(BOOL)_timeDistanceToDestinationDidChange;
-(void)set_lastSentRemainingTime:(double)arg1 ;
-(void)set_lastSentRemainingDistance:(double)arg1 ;
-(id)remainingDistanceTimeAttributedString;
-(void)set_timeAttributedStringData:(id)arg1 ;
-(id)etaAttributedString;
-(void)set_etaAttributedStringData:(id)arg1 ;
-(double)_distanceToManeuver;
-(double)_timeToManeuver;
-(BOOL)isNavigationBannerHiddenBySiri;
-(id)_currentGroupIdentifier;
-(void)beginWaitingForSiriWithTimeout:(double)arg1 ;
-(id)backgroundNavigationDelegate;
-(void)set_lastSiriRequest:(id)arg1 ;
-(void)setBeginNavigationDelayedReplyContext:(id)arg1 ;
-(void)timedOutWaitingForSiri;
-(id)_lastSiriRequest;
-(id)timeAttributes;
-(id)labelAttributes;
-(void)lockScreenSessionDidAcquireView:(id)arg1 ;
-(void)lockScreenSessionDidRelinquishView:(id)arg1 ;
-(id)beginNavigationDelayedReplyContext;
-(BOOL)_sendShieldImage;
-(void)set_sendShieldImage:(BOOL)arg1 ;
-(double)_lastSentRemainingTime;
-(double)_lastSentRemainingDistance;
-(id)_timeAttributedStringData;
-(id)_etaAttributedStringData;
-(int)_transportType;
-(void)dealloc;
-(id)init;
-(unsigned)_state;
-(void)_endSession;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(id)timeFormatter;
-(void)_applicationDidEnterBackground;
-(BOOL)_isInBackground;
@end

