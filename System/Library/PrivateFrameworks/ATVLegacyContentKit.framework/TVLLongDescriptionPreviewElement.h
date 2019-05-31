/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, NSArray, TVLMediaBadgesElement, TVLStarRatingElement, NSDictionary, UIColor;

@interface TVLLongDescriptionPreviewElement : TVLElement {

	NSString* _title;
	NSString* _summary;
	NSString* _footnote;
	NSString* _rating;
	TVLImageElement* _image;
	NSString* _mainLabel;
	NSArray* _metadataLabels;
	TVLMediaBadgesElement* _mediaBadges;
	TVLStarRatingElement* _starRating;
	NSDictionary* _styleKeyValues;

}

@property (nonatomic,retain) NSDictionary * styleKeyValues;                    //@synthesize styleKeyValues=_styleKeyValues - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy) NSString * rating;                                  //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * mainLabel;                               //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,copy) NSArray * metadataLabels;                           //@synthesize metadataLabels=_metadataLabels - In the implementation block
@property (nonatomic,retain) TVLMediaBadgesElement * mediaBadges;              //@synthesize mediaBadges=_mediaBadges - In the implementation block
@property (nonatomic,retain) TVLStarRatingElement * starRating;                //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * metadataColor; 
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)summary;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(TVLStarRatingElement *)starRating;
-(void)setStarRating:(TVLStarRatingElement *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSArray *)metadataLabels;
-(NSString *)mainLabel;
-(TVLMediaBadgesElement *)mediaBadges;
-(void)setMetadataLabels:(NSArray *)arg1 ;
-(void)setMediaBadges:(TVLMediaBadgesElement *)arg1 ;
-(NSDictionary *)styleKeyValues;
-(UIColor *)metadataColor;
-(void)setMainLabel:(NSString *)arg1 ;
-(void)setStyleKeyValues:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)image;
-(NSString *)title;
-(UIColor *)titleColor;
@end
