/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVOptionDialogViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSIndexPath;

@interface TVLOptionDialogViewController : TVOptionDialogViewController <ATVUpdatable> {

	NSIndexPath* _currentFocusedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * currentFocusedIndexPath;              //@synthesize currentFocusedIndexPath=_currentFocusedIndexPath - In the implementation block
-(id)_createDataSource;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(NSIndexPath *)currentFocusedIndexPath;
-(void)setCurrentFocusedIndexPath:(NSIndexPath *)arg1 ;
-(CGSize)_headerViewMargins;
-(double)_listWidth;
-(void)headerViewImageChanged;
-(id)initWithOptionDialogElement:(id)arg1 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
@end

