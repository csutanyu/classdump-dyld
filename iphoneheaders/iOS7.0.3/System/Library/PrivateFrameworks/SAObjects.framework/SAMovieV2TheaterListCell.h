/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class SADistance, NSString, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject

@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * theaterAddress; 
@property (nonatomic,copy) NSString * theaterName; 
@property (nonatomic,retain) SAMovieV2MovieListSnippet * theaterShowtimeListSnippet; 
+(id)theaterListCell;
+(id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)theaterShowtimeListSnippet;
-(id)relativeDistance;
-(void)setRelativeDistance:(id)arg1 ;
-(id)theaterName;
-(void)setTheaterName:(id)arg1 ;
-(id)theaterAddress;
-(void)setTheaterAddress:(id)arg1 ;
-(void)setTheaterShowtimeListSnippet:(id)arg1 ;
@end
