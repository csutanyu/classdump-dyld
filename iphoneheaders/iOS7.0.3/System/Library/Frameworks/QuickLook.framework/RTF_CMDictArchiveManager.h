/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/RTF_CMArchiveManager.h>

@class NSMutableString, NSMutableDictionary, NSString;

@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {

	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;
	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	bool mIsFrameset;

}
-(id)newResourceWithName:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(int)resourceCount;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2 ;
-(void)setIsFrameset;
-(id)copyDictionaryWithSizeInfos:(BOOL)arg1 ;
-(id)resourceUrlProtocol;
@end

