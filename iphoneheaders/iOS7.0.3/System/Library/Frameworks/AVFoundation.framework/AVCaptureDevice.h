/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_CM4 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_CM4 activeVideoMaxFrameDuration; 
+(id)devicesWithMediaType:(id)arg1 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)_devices;
+(int)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
+(void)initialize;
+(id)devices;
-(BOOL)addInput:(id)arg1 ;
-(id)session;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(SCD_Struct_CM4)activeVideoMinFrameDuration;
-(id)activeFormat;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)activeVideoMaxFrameDuration;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(BOOL)isConnected;
-(id)activeInput;
-(void)setActiveInput:(id)arg1 ;
-(BOOL)_startUsingDevice:(id*)arg1 ;
-(void)_stopUsingDevice;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(id)modelID;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
-(void)_sessionWillStart;
-(void)_sessionDidStart;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(BOOL)isFaceDetectionDebugMetadataReportingEnabled;
-(void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1 ;
-(BOOL)isHighDynamicRangeSceneDetectionSupported;
-(BOOL)isHighDynamicRangeSceneDetectionEnabled;
-(void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isHighDynamicRangeScene;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(BOOL)isInUseByAnotherApplication;
-(id)formats;
-(void)setActiveFormat:(id)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2 ;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isLockedForConfiguration;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(void)unlockForConfiguration;
-(BOOL)open:(id*)arg1 ;
-(BOOL)hasFlash;
-(BOOL)isFlashAvailable;
-(BOOL)isFlashActive;
-(BOOL)isFlashModeSupported:(int)arg1 ;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(BOOL)hasTorch;
-(float)torchLevel;
-(BOOL)isTorchModeSupported:(int)arg1 ;
-(BOOL)isTorchAvailable;
-(BOOL)isTorchActive;
-(int)torchMode;
-(void)setTorchMode:(int)arg1 ;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(BOOL)isFocusModeSupported:(int)arg1 ;
-(int)focusMode;
-(void)setFocusMode:(int)arg1 ;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(BOOL)isAdjustingFocus;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(int)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(int)arg1 ;
-(float)focusPosition;
-(void)setFocusPosition:(float)arg1 ;
-(BOOL)isManualFocusSupportEnabled;
-(void)setManualFocusSupportEnabled:(BOOL)arg1 ;
-(BOOL)isSmoothAutoFocusSupported;
-(BOOL)isSmoothAutoFocusEnabled;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(BOOL)isExposureModeSupported:(int)arg1 ;
-(int)exposureMode;
-(void)setExposureMode:(int)arg1 ;
-(SCD_Struct_CM4)exposureDuration;
-(void)setExposureDuration:(SCD_Struct_CM4)arg1 ;
-(float)exposureGain;
-(void)setExposureGain:(float)arg1 ;
-(BOOL)isManualExposureSupportEnabled;
-(void)setManualExposureSupportEnabled:(BOOL)arg1 ;
-(float)autoExposureBias;
-(void)setAutoExposureBias:(float)arg1 ;
-(BOOL)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(BOOL)isAdjustingExposure;
-(BOOL)isWhiteBalanceModeSupported:(int)arg1 ;
-(int)whiteBalanceMode;
-(void)setWhiteBalanceMode:(int)arg1 ;
-(float)whiteBalanceTemperature;
-(void)setWhiteBalanceTemperature:(float)arg1 ;
-(BOOL)isAdjustingWhiteBalance;
-(BOOL)isImageControlModeSupported:(int)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(int)imageControlMode;
-(void)setImageControlMode:(int)arg1 ;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(float)videoZoomFactor;
-(void)setVideoZoomFactor:(float)arg1 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 ;
-(BOOL)isRampingVideoZoom;
-(void)cancelVideoZoomRamp;
-(BOOL)isHDRSupported;
-(BOOL)HDRUsesPreBracketedFrameAsEV0;
-(BOOL)isSISSupported;
-(BOOL)isLowLightBoostSupported;
-(BOOL)isLowLightBoostEnabled;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(void*)copyFigCaptureStreamFactoryTestProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(void)setFigCaptureStreamFactoryTestProperty:(CFStringRef)arg1 withValue:(void*)arg2 error:(id*)arg3 ;
-(BOOL)doesHandleNotification:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isOpen;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setContrast:(float)arg1 ;
-(int)position;
-(void)close;
-(id)localizedName;
-(float)contrast;
-(id)uniqueID;
@end
