/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PSSearchResultsControllerDelegate;
@class UITableView, NSMutableDictionary, NSMutableArray, PSSearchResults, NSString;

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableDictionary* _iconViewMap;
	NSMutableArray* _reusableIconViews;
	PSSearchResults* _searchResults;
	id<PSSearchResultsControllerDelegate> _delegate;

}

@property (nonatomic,retain) PSSearchResults * searchResults;                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PSSearchResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
-(PSSearchResults *)searchResults;
-(void)setSearchResults:(PSSearchResults *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PSSearchResultsControllerDelegate>)arg1 ;
-(id<PSSearchResultsControllerDelegate>)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
@end

