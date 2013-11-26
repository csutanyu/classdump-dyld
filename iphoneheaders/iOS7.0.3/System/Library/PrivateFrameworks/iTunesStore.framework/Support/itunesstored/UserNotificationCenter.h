/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSMutableArray;

@interface UserNotificationCenter : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _userNotifications;

}
+(id)defaultCenter;
-(id)showUserNotification:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(id)showDialog:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2 ;
-(void)cancelUserNotifications:(id)arg1 ;
-(void)_showPreparedNotification:(id)arg1 ;
-(id)showUserNotification:(CFDictionaryRef)arg1 withOptions:(unsigned long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)updateUserNotification:(id)arg1 withDictionary:(CFDictionaryRef)arg2 options:(unsigned long)arg3 ;
-(void)cancelUserNotification:(id)arg1 ;
-(id)prepareUserNotificationWithDialog:(id)arg1 ;
-(void)showPreparedNotification:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)updateUserNotification:(id)arg1 withDialog:(id)arg2 ;
-(void)_finishUserNotification:(CFUserNotificationRef)arg1 withResponseFlags:(unsigned long)arg2 ;
-(void)dealloc;
-(id)init;
@end
