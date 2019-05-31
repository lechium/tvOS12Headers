/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, TVLMediaBadgesView, TVLStarRatingView;

@interface _TVLArtworkMetadataView : UIView {

	NSArray* _metadataArray;
	NSMutableArray* _metadataLabels;
	TVLMediaBadgesView* _mediaBadgesView;
	TVLStarRatingView* _starRatingView;

}

@property (nonatomic,copy) NSArray * metadataArray;                             //@synthesize metadataArray=_metadataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * metadataLabels;                   //@synthesize metadataLabels=_metadataLabels - In the implementation block
@property (nonatomic,retain) TVLMediaBadgesView * mediaBadgesView;              //@synthesize mediaBadgesView=_mediaBadgesView - In the implementation block
@property (nonatomic,retain) TVLStarRatingView * starRatingView;                //@synthesize starRatingView=_starRatingView - In the implementation block
-(TVLStarRatingView *)starRatingView;
-(NSMutableArray *)metadataLabels;
-(void)setMetadataArray:(NSArray *)arg1 ;
-(void)setMediaBadgesView:(TVLMediaBadgesView *)arg1 ;
-(void)setStarRatingView:(TVLStarRatingView *)arg1 ;
-(id)defaultMetadataValueLabel;
-(NSArray *)metadataArray;
-(void)setMetadataLabels:(NSMutableArray *)arg1 ;
-(TVLMediaBadgesView *)mediaBadgesView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

