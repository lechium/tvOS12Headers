/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMediaItem.h>

@protocol TVPMediaItem;
@class TVPSecureKeyLoader;

@interface _TVMLMediaItem : TVMediaItem {

	id<TVPMediaItem> _tvpObject;

}

@property (nonatomic,retain) TVPSecureKeyLoader * secureKeyLoader; 
@property (nonatomic,readonly) id<TVPMediaItem> tvpObject;                      //@synthesize tvpObject=_tvpObject - In the implementation block
-(void)setContentRating:(id)arg1 ;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)setItemDescription:(id)arg1 ;
-(void)setSecureKeyLoader:(TVPSecureKeyLoader *)arg1 ;
-(TVPSecureKeyLoader *)secureKeyLoader;
-(id)_tvpObject;
-(void)setContentRatingDomain:(id)arg1 ;
-(void)setContentRatingRanking:(id)arg1 ;
-(void)setArtworkImageURL:(id)arg1 ;
-(void)setContainsExplicitContent:(BOOL)arg1 ;
-(void)setResumeTime:(double)arg1 ;
-(void)setInterstitials:(id)arg1 ;
-(void)setHighlightGroups:(id)arg1 ;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(void)setExternalIdentifier:(id)arg1 ;
-(void)setExternalProfileIdentifier:(id)arg1 ;
-(void)setExternalServiceIdentifier:(id)arg1 ;
-(id<TVPMediaItem>)tvpObject;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setUrl:(id)arg1 ;
@end

