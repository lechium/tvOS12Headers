/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject {

	UICollectionViewCell* _cell;
	NSIndexPath* _originalIndexPath;
	NSIndexPath* _targetIndexPath;
	BOOL _pinned;
	/*^block*/id _pinningTest;
	CGPoint _pinnedPreviousContentOffset;

}

@property (nonatomic,readonly) UICollectionViewCell * cell;                    //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalIndexPath;                  //@synthesize originalIndexPath=_originalIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                    //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                      //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic) CGPoint pinnedPreviousContentOffset;              //@synthesize pinnedPreviousContentOffset=_pinnedPreviousContentOffset - In the implementation block
@property (nonatomic,copy) id pinningTest;                                     //@synthesize pinningTest=_pinningTest - In the implementation block
-(id)description;
-(void)setPinned:(BOOL)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(UICollectionViewCell *)cell;
-(BOOL)isNOOP;
-(BOOL)pinned;
-(void)setPinnedPreviousContentOffset:(CGPoint)arg1 ;
-(void)setPinningTest:(id)arg1 ;
-(id)pinningTest;
-(CGPoint)pinnedPreviousContentOffset;
-(NSIndexPath *)originalIndexPath;
-(id)initWithCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setOriginalIndexPath:(NSIndexPath *)arg1 ;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
@end

