/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>

@class PLCameraView;

@interface PLCameraViewController : UIViewController {

	PLCameraView* _cameraView;

}
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_PL3*)arg1 ;
-(BOOL)_displaysFullScreen;
@end
