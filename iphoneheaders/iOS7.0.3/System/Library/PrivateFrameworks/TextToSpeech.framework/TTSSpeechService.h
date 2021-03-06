/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TTSSpeechService <NSObject>
@required
-(oneway void)startSpeechRequest:(id)arg1;
-(oneway void)pauseSpeechRequestAtMark:(int)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(int)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/ id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/ id)arg1;
@end

