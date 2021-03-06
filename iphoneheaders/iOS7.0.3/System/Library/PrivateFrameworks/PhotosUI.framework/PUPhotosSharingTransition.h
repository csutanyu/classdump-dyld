/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUModalTransition.h>

@protocol PUPhotosSharingTransitionViewController, PUPhotosSharingTransitionDelegate;
@class UIViewController, PUPhotosSharingTransitionContext, UICollectionViewLayout;

@interface PUPhotosSharingTransition : PUModalTransition {

	UIViewController<PUPhotosSharingTransitionViewController>* _sharingTransitionViewController;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	<PUPhotosSharingTransitionDelegate>* _delegate;
	UICollectionViewLayout* __transitionLayout;

}

@property (nonatomic,retain) UIViewController<PUPhotosSharingTransitionViewController> * sharingTransitionViewController;              //@synthesize sharingTransitionViewController=_sharingTransitionViewController - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                        //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) <PUPhotosSharingTransitionDelegate> * delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                  //@synthesize _transitionLayout=__transitionLayout - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_setTransitionLayout:(id)arg1 ;
-(id)_transitionLayout;
-(id)photosSharingTransitionContext;
-(void)setPhotosSharingTransitionContext:(id)arg1 ;
-(id)sharingTransitionViewController;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
-(void)setSharingTransitionViewController:(id)arg1 ;
-(void).cxx_destruct;
@end

