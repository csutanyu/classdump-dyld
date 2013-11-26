/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSArray * castMembers; 
@property (nonatomic,copy) NSString * copyrightWarning; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * producers; 
@property (nonatomic,copy) NSArray * screenwriters; 
@property (nonatomic,copy) NSString * studioName; 
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithMoviePropertiesDictionary:(id)arg1 ;
-(id)copyMoviePropertiesDictionary;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)castMembers;
-(id)copyrightWarning;
-(id)directors;
-(id)producers;
-(id)screenwriters;
-(void)setCastMembers:(id)arg1 ;
-(void)setCopyrightWarning:(id)arg1 ;
-(void)setDirectors:(id)arg1 ;
-(void)setProducers:(id)arg1 ;
-(void)setScreenwriters:(id)arg1 ;
-(void)setStudioName:(id)arg1 ;
-(id)studioName;
-(void).cxx_destruct;
@end
