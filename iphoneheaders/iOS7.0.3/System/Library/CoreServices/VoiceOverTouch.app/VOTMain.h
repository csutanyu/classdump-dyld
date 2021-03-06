/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <ScreenReaderCore/SCRCArgumentParser.h>

@interface VOTMain : SCRCArgumentParser {

	CFRunLoopSourceRef _serverSource;
	BOOL _logMaskSet;
	BOOL _muteSpeech;
	BOOL _muteSound;
	BOOL _hintsEnabled;
	BOOL _axInspectorEnabled;
	BOOL _testingMode;
	BOOL _speechLogging;
	BOOL _commandHelpEnabled;
	BOOL _keepAlive;

}

@property (assign,nonatomic) BOOL keepAlive;              //@synthesize keepAlive=_keepAlive - In the implementation block
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(id)_setLogMask:(id)arg1 ;
-(id)_setMuteSpeech:(id)arg1 ;
-(id)_setMuteSound:(id)arg1 ;
-(id)_setHintsEnabled:(id)arg1 ;
-(id)_setAXInspectorEnabled:(id)arg1 ;
-(id)_setCommandHelpEnabled:(id)arg1 ;
-(void)_registerMachServer;
-(id)_setSpeechLogging:(id)arg1 ;
-(void)dealloc;
-(int)run;
-(void)stop;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)keepAlive;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
@end

