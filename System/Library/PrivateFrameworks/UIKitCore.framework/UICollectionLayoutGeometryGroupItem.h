/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UICollectionLayoutGeometryGroupItemConfiguration, UICollectionLayoutGeometry;

@interface UICollectionLayoutGeometryGroupItem : NSObject <NSCopying> {

	BOOL _heightUseActualHeight;
	BOOL _widthUseActualWidth;
	BOOL _spacingLeadingSpaceComputedIntrinsic;
	BOOL _spacingTrailingSpaceComputedIntrinsic;
	BOOL _spacingTopSpaceComputedIntrinsic;
	BOOL _spacingBottomSpaceComputedIntrinsic;
	NSArray* _attributes;
	UICollectionLayoutGeometryGroupItemConfiguration* _configuration;
	double _height;
	double _heightComputedContainerHeightFactor;
	double _heightComputedContainerWidthFactor;
	double _width;
	double _widthComputedContainerWidthFactor;
	double _widthComputedContainerHeightFactor;
	double _spacingLeadingSpaceFixedSpace;
	double _spacingTrailingSpaceFixedSpace;
	double _spacingTopSpaceFixedSpace;
	double _spacingBottomSpaceFixedSpace;
	UICollectionLayoutGeometry* _geometry;

}

@property (nonatomic,retain) NSArray * attributes;                                                          //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) UICollectionLayoutGeometryGroupItemConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) double height;                                                                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL heightUseActualHeight;                                                    //@synthesize heightUseActualHeight=_heightUseActualHeight - In the implementation block
@property (assign,nonatomic) double heightComputedContainerHeightFactor;                                    //@synthesize heightComputedContainerHeightFactor=_heightComputedContainerHeightFactor - In the implementation block
@property (assign,nonatomic) double heightComputedContainerWidthFactor;                                     //@synthesize heightComputedContainerWidthFactor=_heightComputedContainerWidthFactor - In the implementation block
@property (assign,nonatomic) double width;                                                                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL widthUseActualWidth;                                                      //@synthesize widthUseActualWidth=_widthUseActualWidth - In the implementation block
@property (assign,nonatomic) double widthComputedContainerWidthFactor;                                      //@synthesize widthComputedContainerWidthFactor=_widthComputedContainerWidthFactor - In the implementation block
@property (assign,nonatomic) double widthComputedContainerHeightFactor;                                     //@synthesize widthComputedContainerHeightFactor=_widthComputedContainerHeightFactor - In the implementation block
@property (assign,nonatomic) BOOL spacingLeadingSpaceComputedIntrinsic;                                     //@synthesize spacingLeadingSpaceComputedIntrinsic=_spacingLeadingSpaceComputedIntrinsic - In the implementation block
@property (assign,nonatomic) double spacingLeadingSpaceFixedSpace;                                          //@synthesize spacingLeadingSpaceFixedSpace=_spacingLeadingSpaceFixedSpace - In the implementation block
@property (assign,nonatomic) BOOL spacingTrailingSpaceComputedIntrinsic;                                    //@synthesize spacingTrailingSpaceComputedIntrinsic=_spacingTrailingSpaceComputedIntrinsic - In the implementation block
@property (assign,nonatomic) double spacingTrailingSpaceFixedSpace;                                         //@synthesize spacingTrailingSpaceFixedSpace=_spacingTrailingSpaceFixedSpace - In the implementation block
@property (assign,nonatomic) BOOL spacingTopSpaceComputedIntrinsic;                                         //@synthesize spacingTopSpaceComputedIntrinsic=_spacingTopSpaceComputedIntrinsic - In the implementation block
@property (assign,nonatomic) double spacingTopSpaceFixedSpace;                                              //@synthesize spacingTopSpaceFixedSpace=_spacingTopSpaceFixedSpace - In the implementation block
@property (assign,nonatomic) BOOL spacingBottomSpaceComputedIntrinsic;                                      //@synthesize spacingBottomSpaceComputedIntrinsic=_spacingBottomSpaceComputedIntrinsic - In the implementation block
@property (assign,nonatomic) double spacingBottomSpaceFixedSpace;                                           //@synthesize spacingBottomSpaceFixedSpace=_spacingBottomSpaceFixedSpace - In the implementation block
@property (nonatomic,retain) UICollectionLayoutGeometry * geometry;                                         //@synthesize geometry=_geometry - In the implementation block
+(id)itemWithConfiguration:(id)arg1 ;
+(id)itemWithAttributes:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UICollectionLayoutGeometryGroupItemConfiguration *)configuration;
-(void)setConfiguration:(UICollectionLayoutGeometryGroupItemConfiguration *)arg1 ;
-(double)width;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(BOOL)heightUseActualHeight;
-(BOOL)widthUseActualWidth;
-(BOOL)spacingLeadingSpaceComputedIntrinsic;
-(BOOL)spacingTrailingSpaceComputedIntrinsic;
-(BOOL)spacingTopSpaceComputedIntrinsic;
-(BOOL)spacingBottomSpaceComputedIntrinsic;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_parseAttributes:(id)arg1 ;
-(NSArray *)attributes;
-(CGSize)sizeForActualSize:(CGSize)arg1 containerDimensions:(CGSize)arg2 ;
-(UIEdgeInsets)effectiveEdgeInsets;
-(UICollectionLayoutGeometry *)geometry;
-(BOOL)hasVerticalIntrinsicSpacing;
-(BOOL)hasHorizontalIntrinsicSpacing;
-(void)addAttribute:(id)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(double)widthComputedContainerWidthFactor;
-(double)widthComputedContainerHeightFactor;
-(double)heightComputedContainerHeightFactor;
-(double)heightComputedContainerWidthFactor;
-(double)spacingTopSpaceFixedSpace;
-(double)spacingBottomSpaceFixedSpace;
-(double)spacingLeadingSpaceFixedSpace;
-(double)spacingTrailingSpaceFixedSpace;
-(void)setHeightUseActualHeight:(BOOL)arg1 ;
-(void)setHeightComputedContainerHeightFactor:(double)arg1 ;
-(void)setHeightComputedContainerWidthFactor:(double)arg1 ;
-(void)setWidthUseActualWidth:(BOOL)arg1 ;
-(void)setWidthComputedContainerWidthFactor:(double)arg1 ;
-(void)setWidthComputedContainerHeightFactor:(double)arg1 ;
-(void)setSpacingLeadingSpaceFixedSpace:(double)arg1 ;
-(void)setSpacingLeadingSpaceComputedIntrinsic:(BOOL)arg1 ;
-(void)setSpacingTrailingSpaceComputedIntrinsic:(BOOL)arg1 ;
-(void)setSpacingTrailingSpaceFixedSpace:(double)arg1 ;
-(void)setSpacingTopSpaceComputedIntrinsic:(BOOL)arg1 ;
-(void)setSpacingTopSpaceFixedSpace:(double)arg1 ;
-(void)setSpacingBottomSpaceComputedIntrinsic:(BOOL)arg1 ;
-(void)setSpacingBottomSpaceFixedSpace:(double)arg1 ;
-(void)setGeometry:(UICollectionLayoutGeometry *)arg1 ;
-(double)spacingSizeRequiredForSize:(CGSize)arg1 layoutAxis:(int)arg2 ;
@end

