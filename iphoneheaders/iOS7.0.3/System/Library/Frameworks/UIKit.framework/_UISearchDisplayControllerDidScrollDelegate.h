/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIScrollNotification.h>

@class UIScrollView, UISearchDisplayController;

@interface _UISearchDisplayControllerDidScrollDelegate : NSObject <_UIScrollNotification> {

	UIScrollView* _scrollView;
	UISearchDisplayController* _searchDisplayController;

}

@property (assign,nonatomic) UISearchDisplayController * searchDisplayController;              //@synthesize searchDisplayController=_searchDisplayController - In the implementation block
@property (assign,nonatomic) UIScrollView * scrollView; 
-(void)dealloc;
-(id)searchDisplayController;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(void)setScrollView:(id)arg1 ;
-(void)setSearchDisplayController:(id)arg1 ;
-(id)scrollView;
@end
