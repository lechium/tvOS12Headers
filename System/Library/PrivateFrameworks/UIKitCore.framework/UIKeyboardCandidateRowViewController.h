/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>

@protocol UIKeyboardCandidateRowViewControllerDelegate, UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSArray, UIKBCandidateCollectionView, NSString;

@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource, UIKeyboardCandidateBarLayoutDelegate> {

	BOOL _showsHiddenCandidates;
	id<UIKeyboardCandidateRowViewControllerDelegate> _delegate;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	Class _cellClass;

}

@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) UIKBCandidateCollectionView * collectionView; 
@property (nonatomic,retain) Class cellClass;                                                               //@synthesize cellClass=_cellClass - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateRowViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                   //@synthesize candidateSet=_candidateSet - In the implementation block
@property (assign,nonatomic) BOOL showsHiddenCandidates;                                                    //@synthesize showsHiddenCandidates=_showsHiddenCandidates - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)suggestedHeightForCellClass:(Class)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateRowViewControllerDelegate>)arg1 ;
-(id<UIKeyboardCandidateRowViewControllerDelegate>)delegate;
-(void)loadView;
-(UIKBCandidateCollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)candidates;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 ;
-(BOOL)hasCandidates;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(id)initWithCellClass:(Class)arg1 ;
-(void)setShowsHiddenCandidates:(BOOL)arg1 ;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(Class)cellClass;
-(double)suggestedHeight;
-(void)_showCandidateAtIndex:(unsigned long long)arg1 scrollCellToVisible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)showsHiddenCandidates;
-(void)_reloadCandidates;
-(void)setCellClass:(Class)arg1 ;
@end

