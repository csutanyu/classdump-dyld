/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

@interface UIPrinterSetupPINViewController : UIViewController {

	PKPrinter* _printer;
	UIPrinterSetupConnectingView* _connectingView;
	UIPrinterSetupPINView* _PINView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (nonatomic,retain) UIPrinterSetupPINView * PINView;                            //@synthesize PINView=_PINView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)setScrollView:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)scrollView;
-(void)setPrinter:(id)arg1 ;
-(id)printer;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(id)arg1 ;
-(void)setPINView:(id)arg1 ;
-(void)connectToPrinter;
-(void)showSetup;
-(void)showFailure;
-(void)connected:(BOOL)arg1 ;
-(id)connectingView;
-(id)PINView;
@end
