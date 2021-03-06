/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOSearchRequester : NSObject {

	NSMapTable* _pendingSearches;
	NSLock* _pendingSearchesLock;
	NSMapTable* _providers;

}
+(id)sharedSearchRequester;
-(void)dealloc;
-(id)init;
-(void)registerProvider:(Class)arg1 ;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/ id)arg4 spellingSuggestion:(/*^block*/ id)arg5 refinement:(/*^block*/ id)arg6 networkActivity:(/*^block*/ id)arg7 error:(/*^block*/ id)arg8 ;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/ id)arg4 spellingSuggestion:(/*^block*/ id)arg5 refinement:(/*^block*/ id)arg6 networkActivity:(/*^block*/ id)arg7 error:(/*^block*/ id)arg8 isCompletions:(BOOL)arg9 ;
-(void)search:(id)arg1 finished:(/*^block*/ id)arg2 spellingSuggestion:(/*^block*/ id)arg3 refinement:(/*^block*/ id)arg4 networkActivity:(/*^block*/ id)arg5 error:(/*^block*/ id)arg6 ;
-(void)search:(id)arg1 useBackgroundConnection:(BOOL)arg2 finished:(/*^block*/ id)arg3 spellingSuggestion:(/*^block*/ id)arg4 refinement:(/*^block*/ id)arg5 networkActivity:(/*^block*/ id)arg6 error:(/*^block*/ id)arg7 ;
-(void)completions:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/ id)arg4 spellingSuggestion:(/*^block*/ id)arg5 refinement:(/*^block*/ id)arg6 networkActivity:(/*^block*/ id)arg7 error:(/*^block*/ id)arg8 ;
-(void)cancelSearch:(id)arg1 ;
@end

