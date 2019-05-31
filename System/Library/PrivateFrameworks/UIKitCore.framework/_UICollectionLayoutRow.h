/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface _UICollectionLayoutRow : NSObject {

	BOOL _vertical;
	int _layoutAxis;
	NSMutableArray* _frames;
	NSMutableArray* _insets;
	double _layoutDimension;
	long long _expectedItemCount;
	double _minimumInterItemSpacing;
	CGSize _aggregateFrameSizes;
	UIEdgeInsets _edgeInsets;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSMutableArray * frames;                     //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSMutableArray * insets;                     //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) int layoutAxis;                              //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) double layoutDimension;                      //@synthesize layoutDimension=_layoutDimension - In the implementation block
@property (assign,nonatomic) long long expectedItemCount;                 //@synthesize expectedItemCount=_expectedItemCount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpacing;              //@synthesize minimumInterItemSpacing=_minimumInterItemSpacing - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                         //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGSize aggregateFrameSizes;                  //@synthesize aggregateFrameSizes=_aggregateFrameSizes - In the implementation block
@property (assign,nonatomic) BOOL vertical;                               //@synthesize vertical=_vertical - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(NSMutableArray *)frames;
-(id)framesWithOffset:(CGSize)arg1 ;
-(double)minimumInterItemSpacing;
-(id)initWithAxis:(int)arg1 itemCount:(long long)arg2 containerDimensions:(CGSize)arg3 insets:(UIEdgeInsets)arg4 minimumInterItemSpacing:(double)arg5 ;
-(long long)currentFrameCount;
-(BOOL)isSpaceAvailableForFrameOfSize:(CGSize)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(BOOL)isRowFull;
-(CGRect)addFrameOfSize:(CGSize)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(CGRect)contentFrameWithOffset:(CGSize)arg1 ;
-(void)alignFramesWithAlignmentOption:(long long)arg1 dimension:(double)arg2 ;
-(void)alignFramesForOrthogonalAxisWithAlignmentOption:(long long)arg1 dimension:(double)arg2 ;
-(void)spaceFramesEvenlyForLayoutAxis:(int)arg1 withDimension:(double)arg2 ;
-(void)setMinimumInterItemSpacing:(double)arg1 ;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(long long)expectedItemCount;
-(UIEdgeInsets)_effectiveInsetsForInsets:(UIEdgeInsets)arg1 ;
-(double)_layoutDimensionForFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(double)layoutDimension;
-(double)_spaceUsedForLayoutDimension;
-(NSMutableArray *)insets;
-(CGPoint)_nextFrameOffsetForInsets:(UIEdgeInsets)arg1 ;
-(void)_addFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(BOOL)vertical;
-(void)_spaceFramesEvenlyWithDimension:(double)arg1 ;
-(void)_spaceFramesOrthogonallyEvenlyWithDimension:(double)arg1 ;
-(void)_alignFramesJustifiedWithDimension:(double)arg1 ;
-(void)_alignFramesFromBottomWithDimension:(double)arg1 ;
-(void)_alignFramesFromTrailingEdgeWithDimension:(double)arg1 ;
-(void)_alignFramesForOrthogonalAxisCenteredWithDimension:(double)arg1 ;
-(void)_alignFramesForOrthogonalAxisFromBottomWithDimension:(double)arg1 ;
-(void)_alignFramesForOrthogonalAxisFromTrailingEdgeWithDimension:(double)arg1 ;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(BOOL)_edgeSpaceIncludesVariableSpacing:(double)arg1 ;
-(int)layoutAxis;
-(id)_frameEdgeSpacingsForInsetsForAxis:(int)arg1 ;
-(long long)_numberOfVariableSpacedEdgesForEdgeSpaces:(id)arg1 ;
-(double)_fixedSpacingForEdgeSpaces:(id)arg1 ;
-(CGSize)aggregateFrameSizes;
-(double)_effectiveEdgeSpaceForValue:(double)arg1 ;
-(void)setInsets:(NSMutableArray *)arg1 ;
-(void)setLayoutAxis:(int)arg1 ;
-(void)setLayoutDimension:(double)arg1 ;
-(void)setExpectedItemCount:(long long)arg1 ;
-(void)setAggregateFrameSizes:(CGSize)arg1 ;
-(void)setVertical:(BOOL)arg1 ;
@end

