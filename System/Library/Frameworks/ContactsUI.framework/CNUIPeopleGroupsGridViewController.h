/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNUIPeopleGroupsDataSourceDelegate.h>

@protocol CNUIPeopleGroupsGridViewControllerDelegate;
@class CNUIPeopleGroupsGridView, CNUIContactsEnvironment, CNUIPeopleGroupsDataSource, NSString;

@interface CNUIPeopleGroupsGridViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNUIPeopleGroupsDataSourceDelegate> {

	id<CNUIPeopleGroupsGridViewControllerDelegate> _delegate;
	CNUIPeopleGroupsGridView* _gridView;
	CNUIContactsEnvironment* _environment;
	CNUIPeopleGroupsDataSource* _dataSource;

}

@property (nonatomic,retain) CNUIPeopleGroupsGridView * gridView;                                         //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) CNUIContactsEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNUIPeopleGroupsDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIPeopleGroupsGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(id)initWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(CNUIPeopleGroupsGridView *)gridView;
-(id)newGridLayout;
-(void)setGridView:(CNUIPeopleGroupsGridView *)arg1 ;
-(void)reloadGridView;
-(void)dataSourceDidChange:(id)arg1 ;
-(void)setDelegate:(id<CNUIPeopleGroupsGridViewControllerDelegate>)arg1 ;
-(id<CNUIPeopleGroupsGridViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)intrinsicContentSize;
-(void)viewDidLoad;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CNUIPeopleGroupsDataSource *)dataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setDataSource:(CNUIPeopleGroupsDataSource *)arg1 ;
-(CNUIContactsEnvironment *)environment;
@end

