/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface TVPMusicNowPlayingCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _contentHidden;
	BOOL _singleCoverMode;
	BOOL _disableFocusEffects;

}

@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                  //@synthesize contentHidden=_contentHidden - In the implementation block
@property (assign,getter=isSingleCoverMode,nonatomic) BOOL singleCoverMode;              //@synthesize singleCoverMode=_singleCoverMode - In the implementation block
@property (assign,nonatomic) BOOL disableFocusEffects;                                   //@synthesize disableFocusEffects=_disableFocusEffects - In the implementation block
-(BOOL)isContentHidden;
-(void)setSingleCoverMode:(BOOL)arg1 ;
-(void)setDisableFocusEffects:(BOOL)arg1 ;
-(BOOL)isSingleCoverMode;
-(BOOL)disableFocusEffects;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
@end
