/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VKCameraControllerDelegate <NSObject>
@required
-(void)runAnimation:(id)arg1;
-(void)cameraControllerDidChangeCameraState:(id)arg1;
-(void)cameraControllerWillStartRegionAnimation:(id)arg1;
-(void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
@end

