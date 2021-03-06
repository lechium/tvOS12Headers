/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface TVPMusicNowPlayingCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _shouldDisableFocusEffects;
	BOOL _singleCoverModeEnabled;
	NSIndexPath* _currentIndexPath;

}

@property (assign,nonatomic) BOOL shouldDisableFocusEffects;                                           //@synthesize shouldDisableFocusEffects=_shouldDisableFocusEffects - In the implementation block
@property (assign,getter=isSingleCoverModeEnabled,nonatomic) BOOL singleCoverModeEnabled;              //@synthesize singleCoverModeEnabled=_singleCoverModeEnabled - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                           //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
+(Class)layoutAttributesClass;
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)isSingleCoverModeEnabled;
-(BOOL)shouldDisableFocusEffects;
-(void)setShouldDisableFocusEffects:(BOOL)arg1 ;
-(void)setSingleCoverModeEnabled:(BOOL)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
@end

