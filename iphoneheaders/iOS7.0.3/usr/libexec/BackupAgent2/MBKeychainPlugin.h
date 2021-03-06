/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBPlugin.h>

@interface MBKeychainPlugin : NSObject <MBPlugin>
+(BOOL)exportServiceKeychainBackupWithError:(id*)arg1 ;
+(void)removeServiceKeychainBackup;
-(id)preparingBackupWithEngine:(id)arg1 ;
-(id)endingBackupWithEngine:(id)arg1 ;
-(id)endingRestoreWithEngine:(id)arg1 ;
-(id)_preparingBackupWithDriveEngine:(id)arg1 ;
-(id)_preparingBackupWithServiceEngine:(id)arg1 ;
-(id)_endingRestoreWithDriveEngine:(id)arg1 ;
-(id)_endingRestoreWithServiceEngine:(id)arg1 ;
@end

