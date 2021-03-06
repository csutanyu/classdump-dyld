/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSArray, NSString, UIViewController, UIView, UIBarButtonItem, UIPopoverController, UIActivityViewController, NSURL, _UIPreviewItemProxy;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {

	<UIDocumentInteractionControllerDelegate>* _delegate;
	id _previewItemProxy;
	NSArray* _icons;
	id _annotation;
	NSString* _uniqueIdentifier;
	UIViewController* _presentingViewController;
	id _previewController;
	NSArray* _gestureRecognizers;
	CGRect _presentRect;
	UIView* _presentView;
	UIBarButtonItem* _presentItem;
	NSArray* _availableApplications;
	UIPopoverController* _popoverController;
	UIActivityViewController* _activityViewController;
	BOOL _shouldUnzipDocument;
	BOOL _sourceIsManaged;
	NSURL* _unzippedDocumentURL;
	id _applicationToOpen;
	NSURL* _tmpURLToDeleteOnDealloc;
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned performingActivity : 1;
	}  _documentInteractionControllerFlags;

}

@property (nonatomic,@dynamic,retain) NSString * uniqueIdentifier; 
@property (assign,nonatomic,@dynamic) BOOL shouldUnzipDocument; 
@property (assign,nonatomic,@dynamic) BOOL sourceIsManaged; 
@property (getter=isArchive,nonatomic,readonly) BOOL archive; 
@property (assign,nonatomic) <UIDocumentInteractionControllerDelegate> * delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL; 
@property (nonatomic,copy) NSString * UTI; 
@property (copy) NSString * name; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,retain) id annotation;                                                                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldUnzipDocument;                                                                       //@synthesize shouldUnzipDocument=_shouldUnzipDocument - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                                           //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) UIActivityViewController * activityViewController;                                              //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,setter=_setPerformingActivity:,getter=_performingActivity,nonatomic) BOOL performingActivity; 
@property (nonatomic,readonly) id previewController; 
@property (nonatomic,retain) UIPopoverController * popoverController;                                                        //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,readonly) _UIPreviewItemProxy * previewItemProxy; 
+(void)initialize;
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)allActionSelectorNames;
+(id)_UTIForFileURL:(id)arg1 ;
+(id)_unzippingQueue;
+(id)interactionControllerWithURL:(id)arg1 ;
+(id)_pathFilterPredicate;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)gestureRecognizers;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)icons;
-(void)setPopoverController:(id)arg1 ;
-(void)_invalidate;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(void)_openDocumentWithApplication:(id)arg1 ;
-(BOOL)presentPreviewAnimated:(BOOL)arg1 ;
-(BOOL)_delegatePerformAction:(SEL)arg1 ;
-(BOOL)sourceIsManaged;
-(id)popoverController;
-(void)_activityControllerViewDidDismiss;
-(BOOL)_performingActivity;
-(void)_setPerformingActivity:(BOOL)arg1 ;
-(BOOL)_isVideo;
-(id)UTI;
-(id)_applications:(BOOL)arg1 ;
-(void)_setApplicationToOpen:(id)arg1 ;
-(void)_openDocumentWithCurrentApplication;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)previewItemProxy;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(id)activityViewController;
-(BOOL)_canUnzipDocument;
-(id)_documentProxySourceIsManaged:(BOOL)arg1 ;
-(BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1 ;
-(void)setPreviewURLOverride:(id)arg1 ;
-(unsigned)applicationCount;
-(void)openDocumentWithDefaultApplication;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg1 ;
-(void)setShouldUnzipDocument:(BOOL)arg1 ;
-(void)_interfaceOrientationWillChange:(id)arg1 ;
-(BOOL)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(BOOL)arg2 ;
-(BOOL)_isImage;
-(BOOL)_canPreviewUnzippedDocument;
-(BOOL)_canUnzipDocumentAndPresentOptions;
-(BOOL)_setupForOptionsMenu;
-(void)_unzipFileAndSetupPayload:(/*^block*/ id)arg1 ;
-(BOOL)isArchive;
-(BOOL)_canUnzipDocumentForPreview;
-(BOOL)_documentNeedsHelpUnzippingForPreview;
-(BOOL)_setupPreviewController;
-(id)previewController;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)_canUnzipDocumentAndPresentOpenIn;
-(BOOL)_setupForOpenInMenu;
-(void)_presentPreview:(id)arg1 ;
-(void)_presentOptionsMenu:(id)arg1 ;
-(BOOL)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(id)annotation;
-(void)_finishedCopyingResource;
-(id)_applicationToOpen;
-(void)_fixupFileExtensionIfNeeded;
-(BOOL)_delegateImplementsLegacyActions;
-(BOOL)_delegateCanPerformAction:(SEL)arg1 ;
-(BOOL)_isImageOrVideo;
-(void)setActivityViewController:(id)arg1 ;
-(BOOL)_isValidURL:(id)arg1 ;
-(id)_unzipFileAndSetupPayload:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dismissMenuAnimated:(BOOL)arg1 ;
-(void)setUTI:(id)arg1 ;
-(BOOL)shouldUnzipDocument;
-(BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentingNavigationController;
-(BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreviewAnimated:(BOOL)arg1 ;
-(void)_presentOpenIn:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)_pathsInArchive:(/*^block*/ id)arg1 ;
-(void)_setUnzippedDocumentURL:(id)arg1 ;
-(id)_unzippedDocumentURL;
-(BOOL)_isPackageArchive:(id)arg1 ;
-(BOOL)_canSaveToCameraRollForType;
-(void)setAnnotation:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(id)subitemsInArchive:(/*^block*/ id)arg1 ;
-(id)extractSubitemFromArchive:(id)arg1 completion:(/*^block*/ id)arg2 ;
@end

