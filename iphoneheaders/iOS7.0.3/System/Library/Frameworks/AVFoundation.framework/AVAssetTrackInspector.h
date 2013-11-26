/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	long _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned long figMediaType; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=isSelfContained,nonatomic,readonly) BOOL selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_CM5 timeRange; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) int layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_CM4 minSampleDuration; 
@property (nonatomic,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) BOOL excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) long playabilityValidationResult; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_weakReference;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long)arg2 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(long)playabilityValidationResult;
-(BOOL)isSelfContained;
-(long long)totalSampleDataLength;
-(id)mediaCharacteristics;
-(float)estimatedDataRate;
-(id)extendedLanguageTag;
-(SCD_Struct_CM4)minSampleDuration;
-(id)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)samplePresentationTimeForTrackTime:(SCD_Struct_CM4)arg1 ;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(unsigned long)_figMediaType;
-(int)trackID;
-(BOOL)isPlayable;
-(id)loudnessInfo;
-(void)dealloc;
-(int)layer;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEnabled;
-(id)locale;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)formatDescriptions;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(float)nominalFrameRate;
-(SCD_Struct_CM5)timeRange;
-(BOOL)hasProtectedContent;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)mediaType;
@end
