/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIPrintPanelViewController, UIPrintPreviewViewController, UIPrinterBrowserViewController, _UIPrintMessageAndSpinnerView, NSString;

@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate> {

	UIPrintPanelViewController* _printPanelViewController;
	long long _settingsRow;
	long long _rangeRow;
	long long _copiesRow;
	long long _duplexRow;
	long long _grayscaleRow;
	long long _stapleRow;
	long long _punchRow;
	long long _paperRow;
	long long _jobAccountIDRow;
	long long _settingsSection;
	BOOL _contactingPrinter;
	BOOL _printerWarningWasShown;
	BOOL _settingsExpanded;
	UIPrintPreviewViewController* _printPreviewViewController;
	long long _previousPageIndexInCenterOfPreview;
	UIPrinterBrowserViewController* _browserController;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)accessibilityPerformMagicTap;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)keyCommands;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)updateStaple:(id)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)showCancelButton;
-(void)_update:(BOOL)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(BOOL)shouldEnablePrintButton;
-(void)showContacting;
-(double)heightOfPreviewView;
-(void)showPreviewGenerating;
-(void)setShowPreviewGenerating:(BOOL)arg1 ;
-(void)printButtonPressed:(id)arg1 ;
-(void)_updateSize;
-(void)updateCopies:(id)arg1 ;
-(void)updateDuplex:(id)arg1 ;
-(void)updateGrayscale:(id)arg1 ;
-(void)updatePunch:(id)arg1 ;
-(void)updateJobAccountID:(id)arg1 ;
-(id)textForSettings;
-(void)updateSettingsSummaryText;
-(id)jobAccountTextField;
-(void)selectJobAccountID;
-(void)dismissKeyboardIfNeccessary;
-(void)promptForJobAccountID;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3 ;
-(id)pdfFileURL;
-(void)clearPrintPanelViewController;
-(void)moreButtonPushed:(id)arg1 ;
-(void)updatePageRange:(NSRange)arg1 ;
-(void)updatePageRangeText;
@end

