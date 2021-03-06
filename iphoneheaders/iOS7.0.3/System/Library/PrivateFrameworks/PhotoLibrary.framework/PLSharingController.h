/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>

@class UIViewController, NSArray, NSMutableArray, NSMutableDictionary, UIView, MFMailComposeViewController;

@interface PLSharingController : NSObject <MFMailComposeViewControllerDelegate> {

	UIViewController* _parentController;
	NSArray* _photos;
	NSMutableArray* _views;
	NSMutableDictionary* _trimmedFilePaths;
	NSArray* _attachmentIdentifiers;
	UIView* _animationSuperview;
	UIView* _referenceView;
	SEL _photoAction;
	int _sendingEmailCount;
	BOOL _composeSheetIsReady;
	unsigned _didDisplayComposeSheet : 1;
	unsigned _didSlideImageDown : 1;
	unsigned _isAnimatingSendToEmail : 1;
	unsigned _delegateWillSetComposeFrame : 1;
	unsigned _delegateDidFinishMail : 1;
	unsigned _delegateViewForPhoto : 1;
	MFMailComposeViewController* _composeController;

}

@property (assign,nonatomic) <NSCoding> * autosaveIdentifier; 
+(void)copyItemsToPasteboard:(id)arg1 ;
+(BOOL)canSendEmail;
+(BOOL)allowedToModifyEmailAccounts;
+(void)openEmailAccountPrefs;
-(void)dealloc;
-(void)setAutosaveIdentifier:(id)arg1 ;
-(id)autosaveIdentifier;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)views;
-(void)_commonDidFinishEmailAnimation:(BOOL)arg1 ;
-(void)_composeSheetDidDisplay;
-(void)_performSendViaEmail;
-(void)_animateSendToEmail;
-(void)_displayComposeSheet;
-(CGRect)_animationDestinationRectForImageSize:(CGSize)arg1 ;
-(void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_setComposeParentViewController:(id)arg1 ;
-(void)_discardTrimmedFiles;
-(void)_reallySendViaEmail:(id)arg1 animated:(BOOL)arg2 ;
-(id)_addPhoto:(id)arg1 toCompositionController:(id)arg2 index:(unsigned)arg3 ;
-(id)_addVideo:(id)arg1 toCompositionController:(id)arg2 ;
-(id)_addAudio:(id)arg1 toCompositionController:(id)arg2 ;
-(void)_finishedSlidingImagesDown:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_autosaveMailComposition;
-(void)_slideImagesOverMessage;
-(id)initWithController:(id)arg1 photos:(id)arg2 views:(id)arg3 ;
-(void)emailPhotos:(id)arg1 ;
-(CGRect)_animationDestinationRectForView:(id)arg1 ;
-(void)composeMailForPhotos:(id)arg1 ;
-(void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)_dismissMailComposeController;
-(BOOL)isComposeSheetReady;
-(void)setTrimmedPath:(id)arg1 forVideo:(id)arg2 ;
-(void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(BOOL)arg2 error:(id)arg3 ;
@end

