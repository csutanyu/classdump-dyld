/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <kbd/kbd-Structs.h>
#import <kbd/TIRemoteDataProtocol.h>

@class TITextCheckerExemptions;

@interface TIRemoteDataHandle : NSObject <TIRemoteDataProtocol> {

	TITextCheckerExemptions* _textCheckerExemptions;

}

@property (nonatomic,readonly) TITextCheckerExemptions * textCheckerExemptions;              //@synthesize textCheckerExemptions=_textCheckerExemptions - In the implementation block
+(BOOL)shouldAcceptRequestForMeCardWithAuditToken:(SCD_Struct_TI0)arg1 ;
+(id)meCardFromAddressBook:(void*)arg1 ;
+(id)localDictionaryPath;
-(void)dealloc;
-(void)removeAllDynamicDictionariesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)string:(id)arg1 isExemptFromTextCheckerWithCompletionHandler:(/*^block*/ id)arg2 ;
-(void)requestTextCheckerLocalDictionaryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)appendWordToTextCheckerLocalDictionary:(id)arg1 ;
-(void)requestMeCardWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)textCheckerExemptions;
@end

