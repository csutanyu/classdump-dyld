/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface TSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	CFLocaleRef mLocale;
	BOOL mIsJapaneseLocale;

}
+(id)parserForDefaultLocale;
-(void)dealloc;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 succesTSUlFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(void)datePreferencesChanged:(id)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 succesTSUlFormatString:(const _CFString*)arg2 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

