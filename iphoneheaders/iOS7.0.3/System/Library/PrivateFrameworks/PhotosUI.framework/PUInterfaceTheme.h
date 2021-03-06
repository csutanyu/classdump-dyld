/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PUInterfaceTheme <NSObject>
@property (nonatomic,readonly) int topLevelStatusBarStyle; 
@property (nonatomic,readonly) int topLevelNavigationBarStyle; 
@property (nonatomic,readonly) BOOL topLevelNavigationBarTranslucent; 
@property (nonatomic,readonly) UIColor * topLevelNavigationBarTintColor; 
@property (nonatomic,readonly) UIImage * topLevelNavigationBarShadowImage; 
@property (nonatomic,readonly) NSDictionary * topLevelNavigationBarTitleTextAttributes; 
@property (nonatomic,readonly) UIColor * topLevelNavigationBarButtonTintColor; 
@property (nonatomic,readonly) UIColor * topLevelTabBarTintColor; 
@property (nonatomic,readonly) UIColor * topLevelTabBarSelectedImageTintColor; 
@property (nonatomic,readonly) UIImage * topLevelTabBarBackgroundImage; 
@property (nonatomic,readonly) UIImage * topLevelTabBarSelectionIndicatorImage; 
@property (nonatomic,readonly) UIImage * topLevelTabBarShadowImage; 
@property (nonatomic,readonly) UIColor * photoCollectionViewBackgroundColor; 
@property (nonatomic,readonly) int photoCollectionViewBackgroundColorValue; 
@property (nonatomic,readonly) int photoCollectionToolbarStyle; 
@property (nonatomic,readonly) BOOL photoCollectionToolbarTranslucent; 
@property (nonatomic,readonly) UIImage * photoCollectionToolbarShadowImage; 
@property (nonatomic,readonly) UIColor * photoCollectionToolbarTintColor; 
@property (nonatomic,readonly) float photoCollectionToolbarTextTitleSpacerWidth; 
@property (nonatomic,readonly) float photoCollectionToolbarIconToTextSpacerWidth; 
@property (nonatomic,readonly) UIColor * photoCollectionToolbarButtonTintColor; 
@property (nonatomic,readonly) unsigned emptyPlaceholderStyle; 
@property (nonatomic,readonly) UIColor * emptyPlaceholderViewBackgroundColor; 
@property (nonatomic,readonly) UIColor * albumListBackgroundColor; 
@property (nonatomic,readonly) UIFont * albumListTitleLabelFont; 
@property (nonatomic,readonly) UIFont * albumListSubtitleLabelFont; 
@property (nonatomic,readonly) float albumListDisabledAlbumStackViewAlpha; 
@property (nonatomic,readonly) float albumListDisabledAlbumTitleAlpha; 
@property (nonatomic,readonly) float bannerHeight; 
@property (nonatomic,readonly) UIColor * bannerBackgroundColor; 
@property (nonatomic,readonly) UIImage * gridViewCellBannerBackgroundImage; 
@property (nonatomic,readonly) UIColor * gridViewCellBannerBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridViewCellBannerTextColor; 
@property (nonatomic,readonly) UIFont * gridViewCellBannerTextFont; 
@property (nonatomic,readonly) int photoBrowserStatusBarStyle; 
@property (nonatomic,readonly) UIColor * photoBrowserChromeVisibleBackgroundColor; 
@property (nonatomic,readonly) UIColor * photoBrowserChromeHiddenBackgroundColor; 
@property (nonatomic,readonly) float videoPaletteSideMargin; 
@property (nonatomic,readonly) float videoPaletteBottomMargin; 
@property (nonatomic,readonly) NSDictionary * contentCommentsHiddenButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * contentCommentsHiddenButtonImageColor; 
@property (nonatomic,readonly) NSDictionary * contentCommentsShownButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * contentCommentsShownButtonImageColor; 
@property (nonatomic,readonly) UIEdgeInsets contentCommentsButtonImageInset; 
@property (nonatomic,readonly) NSDictionary * toolbarCommentsHiddenButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * toolbarCommentsHiddenButtonImageColor; 
@property (nonatomic,readonly) NSDictionary * toolbarCommentsShownButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * toolbarCommentsShownButtonImageColor; 
@property (nonatomic,readonly) UIEdgeInsets commentsButtonTextInset; 
@property (nonatomic,readonly) UIFont * wallpaperCategoryLabelFont; 
@property (nonatomic,readonly) UIColor * cloudFeedBackgroundColor; 
@property (nonatomic,readonly) UIColor * cloudFeedSeparatorColor; 
@property (nonatomic,readonly) float cloudFeedSeparatorHeight; 
@property (nonatomic,readonly) NSDictionary * cloudFeedDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedWhiteDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedWhiteEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedLargerDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedLargerEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInvitationTitleTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInvitationSubtitleTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInteractionTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInteractionLargerTextAttributes; 
@property (nonatomic,readonly) UIImage * cloudFeedMiniChevronImage; 
@property (nonatomic,readonly) UIImage * cloudFeedSectionHeaderBackgroundImage; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardTitleFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardTextFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardButtonFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardAlbumTitleFont; 
@property (nonatomic,readonly) int defaultKeyboardAppearance; 
@required
-(void)configurePhotoCollectionToolbarButton:(id)arg1;
-(void)configurePhotoCollectionToolbarDeleteButton:(id)arg1;
-(float)photoCollectionToolbarTextTitleSpacerWidth;
-(float)photoCollectionToolbarIconToTextSpacerWidth;
-(id)photoCollectionViewBackgroundColor;
-(int)topLevelStatusBarStyle;
-(void)configureTopLevelNavigationBarDoneButton:(id)arg1;
-(void)configureTopLevelNavigationBarButton:(id)arg1;
-(unsigned)emptyPlaceholderStyle;
-(id)emptyPlaceholderViewBackgroundColor;
-(void)configureAlbumListTitleTextField:(id)arg1;
-(void)configureAlbumListSubtitleLabel:(id)arg1;
-(void)configureAlbumListDeleteButton:(id)arg1;
-(float)albumListDisabledAlbumStackViewAlpha;
-(float)albumListDisabledAlbumTitleAlpha;
-(void)configurePhotoCollectionHeaderTitleLabel:(id)arg1 forStyle:(int)arg2;
-(void)configurePhotoCollectionHeaderLocationsLabel:(id)arg1 forStyle:(int)arg2;
-(id)photoCollectionHeaderLocationIconForStyle:(int)arg1;
-(void)configurePhotoCollectionHeaderDateLabel:(id)arg1 forStyle:(int)arg2;
-(id)photoCollectionHeaderActionButtonAttributesForStyle:(int)arg1;
-(id)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned)arg1;
-(id)photoCollectionHeaderActionButtonFontForStyle:(int)arg1;
-(UIOffset*)photoCollectionHeaderLocationIconOffsetForStyle:(int)arg1;
-(void)configureCloudFeedInvitationReplyButton:(id)arg1;
-(id)cloudFeedSeparatorColor;
-(float)cloudFeedSeparatorHeight;
-(id)cloudFeedInvitationTitleTextAttributes;
-(id)cloudFeedInvitationSubtitleTextAttributes;
-(void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg1;
-(void)configureAlbumListEmptyStackViewPhonePhotoDecoration:(id)arg1;
-(void)configureAlbumListStackViewPadPhotoDecoration:(id)arg1;
-(void)configureAlbumListEmptyStackViewPadPhotoDecoration:(id)arg1;
-(void)configureMapViewAnnotationCountLabel:(id)arg1;
-(id)sharedAlbumCommentCardTextFont;
-(int)topLevelNavigationBarStyle;
-(BOOL)topLevelNavigationBarTranslucent;
-(id)topLevelNavigationBarTintColor;
-(id)topLevelNavigationBarTitleTextAttributes;
-(id)topLevelNavigationBarShadowImage;
-(id)topLevelNavigationBarBackgroundImageForBarMetrics:(int)arg1;
-(id)cloudFeedLargerDefaultTextAttributes;
-(id)cloudFeedDefaultTextAttributes;
-(id)cloudFeedLargerEmphasizedTextAttributes;
-(id)cloudFeedEmphasizedTextAttributes;
-(id)cloudFeedMiniChevronImage;
-(id)cloudFeedInteractionLargerTextAttributes;
-(id)cloudFeedInteractionTextAttributes;
-(id)attributedStringForCloudFeedGroupHeaderWithText:(id)arg1;
-(id)sharedAlbumCommentCardTitleFont;
-(id)gridViewCellBannerBackgroundImage;
-(id)gridViewCellBannerBackgroundColor;
-(id)gridViewCellBannerTextFont;
-(id)gridViewCellBannerTextColor;
-(void)configureTopLevelTabBarItem:(id)arg1 withBaseName:(id)arg2;
-(id)topLevelTabBarTintColor;
-(id)topLevelTabBarShadowImage;
-(id)topLevelTabBarSelectionIndicatorImage;
-(id)topLevelTabBarSelectedImageTintColor;
-(id)topLevelTabBarBackgroundImage;
-(id)topLevelTabBarItemTitleTextAttributesForState:(unsigned)arg1;
-(void)configureBannerStackView:(id)arg1;
-(void)configureBannerLabel:(id)arg1;
-(id)bannerBackgroundColor;
-(float)bannerHeight;
-(int)photoCollectionViewBackgroundColorValue;
-(void)configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
-(void)configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
-(int)photoCollectionToolbarStyle;
-(BOOL)photoCollectionToolbarTranslucent;
-(id)photoCollectionToolbarTintColor;
-(id)photoCollectionToolbarShadowImage;
-(id)photoCollectionToolbarBackgroundImageForBarMetrics:(int)arg1;
-(id)photoBrowserChromeVisibleBackgroundColor;
-(id)photoBrowserChromeHiddenBackgroundColor;
-(float)videoPaletteSideMargin;
-(float)videoPaletteBottomMargin;
-(int)photoBrowserStatusBarStyle;
-(id)cloudFeedBackgroundColor;
-(void)configureCloudFeedStackView:(id)arg1 withStackSize:(CGSize)arg2;
-(id)albumListTitleLabelFont;
-(id)albumListSubtitleLabelFont;
-(id)contentCommentsHiddenButtonImageColor;
-(id)contentCommentsShownButtonImageColor;
-(id)contentCommentsShownButtonTextAttributes;
-(UIEdgeInsets*)commentsButtonTextInset;
-(id)commentsButtonStringForCount:(int)arg1;
-(id)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned)arg1;
-(id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned)arg1;
-(UIOffset*)topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(int)arg1;
-(id)topLevelNavigationBarButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2;
-(id)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2;
-(id)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2;
-(id)photoCollectionToolbarButtonTitleTextAttributesForState:(unsigned)arg1;
-(id)photoCollectionToolbarDeleteButtonTitleTextAttributesForState:(unsigned)arg1;
-(UIOffset*)photoCollectionToolbarButtonTitlePositionAdjustmentforBarMetrics:(int)arg1;
-(id)photoCollectionToolbarButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2;
-(id)photoCollectionToolbarDeleteButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2;
-(id)createCloudFeedCommentButton;
-(void)configureCloudFeedCommentButton:(id)arg1 withCount:(int)arg2;
-(id)topLevelNavigationBarButtonTintColor;
-(id)photoCollectionToolbarButtonTintColor;
-(id)albumListBackgroundColor;
-(id)contentCommentsHiddenButtonTextAttributes;
-(UIEdgeInsets*)contentCommentsButtonImageInset;
-(id)toolbarCommentsHiddenButtonTextAttributes;
-(id)toolbarCommentsHiddenButtonImageColor;
-(id)toolbarCommentsShownButtonTextAttributes;
-(id)toolbarCommentsShownButtonImageColor;
-(id)wallpaperCategoryLabelFont;
-(id)cloudFeedWhiteDefaultTextAttributes;
-(id)cloudFeedWhiteEmphasizedTextAttributes;
-(id)cloudFeedSectionHeaderBackgroundImage;
-(id)sharedAlbumCommentCardButtonFont;
-(id)sharedAlbumCommentCardAlbumTitleFont;
-(int)defaultKeyboardAppearance;
@end

