/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSCache;

@interface TVLPagedGridCollectionViewLayout : UICollectionViewLayout {

	NSCache* _cachedLayoutAttributes;
	double _peekAmount;
	UIEdgeInsets _cellPadding;

}

@property (assign,nonatomic) double peekAmount;                     //@synthesize peekAmount=_peekAmount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;              //@synthesize cellPadding=_cellPadding - In the implementation block
-(double)peekAmount;
-(long long)_numberOfRowsForSection:(unsigned long long)arg1 ;
-(long long)_numberOfColumnsForSection:(unsigned long long)arg1 ;
-(void)setPeekAmount:(double)arg1 ;
-(id)init;
-(void)invalidateLayout;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)cellPadding;
@end

