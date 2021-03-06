/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {

	ASProtocolCapabilities* _capabilities;

}
-(id)protocolVersion;
-(void)dealloc;
-(id)init;
-(BOOL)useEventIdsInMeetingResponse;
-(void)_setCapabilitiesVersion:(id)arg1 ;
-(id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2 ;
-(id)_requestLinePrefixWithTask:(id)arg1 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(id)initWithVersion:(id)arg1 ;
-(id)initWithCachedVersion:(id)arg1 ;
-(BOOL)versionChangeRequiresAccountUpgrade:(id)arg1 ;
-(id)requestURLStringWithTask:(id)arg1 ;
-(BOOL)headerNeedsUserAgent;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)usesAirSyncBaseNamespace;
-(BOOL)sendAttendeeRole;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)sendEmailInWBXML;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)useSmartMailTasks;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)sendFirstDayOfWeekInRecurrence;
-(BOOL)sendDeviceInfoOnProvision;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsGALPhotos;
-(BOOL)supportsAttendeesInExceptions;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
@end

