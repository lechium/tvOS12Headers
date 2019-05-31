/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol TVPMusicNowPlayingImage;
@class UIView, UILabel, NSString, UIImageView, UIImage, _UIStackedImageConfiguration;

@interface TVPMusicNowPlayingCollectionViewCell : UICollectionViewCell {

	UIView* _videoContainerView;
	id<TVPMusicNowPlayingImage> _image;
	UILabel* _songTitleLabel;
	UILabel* _artistNameLabel;
	UIView* _bottomAccessoryContainerView;
	BOOL _focused;
	BOOL _subheadingsVisible;
	BOOL _animatesAccessoryViews;
	BOOL _singleCoverMode;
	BOOL _focusEffectsDisabled;
	long long _placeholderType;
	UIView* _videoView;
	NSString* _songTitle;
	NSString* _artistName;
	UIView* _bottomAccessoryView;
	UIImageView* _imageView;
	UIImage* _placeholderImage;
	_UIStackedImageConfiguration* _defaultImageConfiguration;
	_UIStackedImageConfiguration* _singleCoverImageConfiguration;

}

@property (nonatomic,retain) UIImageView * imageView;                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                  //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,getter=isSingleCoverMode,nonatomic) BOOL singleCoverMode;                               //@synthesize singleCoverMode=_singleCoverMode - In the implementation block
@property (assign,getter=areFocusEffectsDisabled,nonatomic) BOOL focusEffectsDisabled;                    //@synthesize focusEffectsDisabled=_focusEffectsDisabled - In the implementation block
@property (nonatomic,readonly) _UIStackedImageConfiguration * defaultImageConfiguration;                  //@synthesize defaultImageConfiguration=_defaultImageConfiguration - In the implementation block
@property (nonatomic,readonly) _UIStackedImageConfiguration * singleCoverImageConfiguration;              //@synthesize singleCoverImageConfiguration=_singleCoverImageConfiguration - In the implementation block
@property (assign,nonatomic) long long placeholderType;                                                   //@synthesize placeholderType=_placeholderType - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                                          //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) NSString * songTitle;                                                        //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,retain) NSString * artistName;                                                       //@synthesize artistName=_artistName - In the implementation block
@property (assign,nonatomic) BOOL animatesAccessoryViews;                                                 //@synthesize animatesAccessoryViews=_animatesAccessoryViews - In the implementation block
@property (nonatomic,retain) UIView * bottomAccessoryView;                                                //@synthesize bottomAccessoryView=_bottomAccessoryView - In the implementation block
-(void)setSongTitle:(NSString *)arg1 ;
-(NSString *)songTitle;
-(void)setArtistName:(NSString *)arg1 ;
-(UIView *)videoView;
-(NSString *)artistName;
-(void)setVideoView:(UIView *)arg1 ;
-(void)setBottomAccessoryView:(UIView *)arg1 ;
-(UIView *)bottomAccessoryView;
-(void)setSingleCoverMode:(BOOL)arg1 ;
-(void)setAnimatesAccessoryViews:(BOOL)arg1 ;
-(void)setVideoView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPlaceholderType:(long long)arg1 ;
-(BOOL)isSingleCoverMode;
-(id)_placeholderImageForType:(long long)arg1 ;
-(id)_addSubheadLabelWithFont:(id)arg1 ;
-(void)_updateInterfaceForTraitCollection:(id)arg1 ;
-(void)setFocusEffectsDisabled:(BOOL)arg1 ;
-(_UIStackedImageConfiguration *)singleCoverImageConfiguration;
-(_UIStackedImageConfiguration *)defaultImageConfiguration;
-(BOOL)_shouldShowFocusEffects;
-(void)_updateImageViewStateFocused:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_updateLabelVisibility;
-(long long)placeholderType;
-(void)setImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)areFocusEffectsDisabled;
-(BOOL)_labelsHiddenForCurrentState;
-(void)setHideArtwork:(BOOL)arg1 ;
-(BOOL)hideArtwork;
-(BOOL)animatesAccessoryViews;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
@end

