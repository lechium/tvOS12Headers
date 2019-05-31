/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionViewFlowLayout.h>

@protocol _TVStackViewDelegateFlowLayout;
@class NSArray;

@interface _TVStackViewFlowLayout : _TVCollectionViewFlowLayout {

	id<_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
	struct {
		BOOL hasShowcaseFactorDidChange;
	}  _stackViewDelegateFlowLayoutFlags;
	NSArray* _supplementaryCellLayoutAttributes;
	/*^block*/id _onPrepareLayout;
	double _showcaseHeight;
	double _showcaseFactor;

}

@property (nonatomic,copy) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
@property (nonatomic,copy) id onPrepareLayout;                                       //@synthesize onPrepareLayout=_onPrepareLayout - In the implementation block
@property (assign,nonatomic) double showcaseHeight;                                  //@synthesize showcaseHeight=_showcaseHeight - In the implementation block
@property (nonatomic,readonly) double showcaseFactor;                                //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
+(Class)layoutAttributesClass;
-(void)setShowcaseHeight:(double)arg1 ;
-(double)showcaseFactor;
-(NSArray *)supplementaryCellLayoutAttributes;
-(double)_computeShowcaseFactor;
-(id)onPrepareLayout;
-(double)showcaseHeight;
-(void)setSupplementaryCellLayoutAttributes:(NSArray *)arg1 ;
-(void)setOnPrepareLayout:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
@end

