/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLAssetFormats : NSObject
+(CGSize)sizeForFormat:(int)arg1 ;
+(BOOL)formatIsCropped:(int)arg1 ;
+(BOOL)formatIsFullscreen:(int)arg1 ;
+(BOOL)formatIsBadgedForVideo:(int)arg1 ;
+(CGSize)scaledSizeForSize:(CGSize)arg1 format:(int)arg2 capLength:(BOOL)arg3 ;
+(unsigned)minShortSideForFullSizeFormat:(int)arg1 ;
+(unsigned)desiredLongSideForFullSizeFormat:(int)arg1 ;
+(unsigned)maxLongSideForFullSizeFormat:(int)arg1 ;
+(BOOL)transformForImage:(CGImageRef)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(CGSize*)arg4 contextSizeOut:(CGSize*)arg5 transformOut:(CGAffineTransform*)arg6 ;
+(BOOL)formatSizeIsShortSide:(int)arg1 ;
+(BOOL)isAlbumVideoPath:(id)arg1 ;
@end
