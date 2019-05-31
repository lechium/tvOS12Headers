/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVCKImageStackCollectionViewCell.h>

@protocol TVCKStoreFavoriteItemCellDelegate;
@class NSURL, NSNumber, TVCKBadgeOverlayView;

@interface TVCKStoreFavoriteItemCell : TVCKImageStackCollectionViewCell {

	BOOL _editing;
	unsigned long long _contentCategory;
	NSURL* _imageURL;
	NSNumber* _badgeCount;
	id<TVCKStoreFavoriteItemCellDelegate> _delegate;
	TVCKBadgeOverlayView* _badgeOverlayView;
	CGSize _imageSize;

}

@property (nonatomic,retain) TVCKBadgeOverlayView * badgeOverlayView;                            //@synthesize badgeOverlayView=_badgeOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long contentCategory;                                 //@synthesize contentCategory=_contentCategory - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSNumber * badgeCount;                                                //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreFavoriteItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                      //@synthesize editing=_editing - In the implementation block
+(void)registerReuseIdentifiersWithCollectionView:(id)arg1 ;
+(id)reuseIdentifierForImageURL:(id)arg1 ;
+(id)_formattedStringForBadgeCount:(id)arg1 ;
+(void)_configureCell:(id)arg1 withCompiledArchiveImageURL:(id)arg2 assetType:(long long)arg3 imageSize:(CGSize)arg4 ;
+(void)_configureCell:(id)arg1 withStackImageURL:(id)arg2 imageFormat:(long long)arg3 assetType:(long long)arg4 imageSize:(CGSize)arg5 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setBadgeCount:(NSNumber *)arg1 ;
-(NSNumber *)badgeCount;
-(void)_applicationWillEnterIdleMode:(id)arg1 ;
-(void)_applicationWillExitIdleMode:(id)arg1 ;
-(double)_labelOffsetForIdleMode;
-(void)_moveAllComponentsByOffset:(double)arg1 ;
-(void)_setFocusDirection:(CGPoint)arg1 ;
-(void)setContentCategory:(unsigned long long)arg1 ;
-(void)setImageStackView:(id)arg1 ;
-(unsigned long long)contentCategory;
-(long long)_placeholderAssetType;
-(TVCKBadgeOverlayView *)badgeOverlayView;
-(void)setBadgeOverlayView:(TVCKBadgeOverlayView *)arg1 ;
-(id)_animatedTitleLabel;
-(double)_maxTitleWidthWithFocus:(BOOL)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
-(Class)_labelClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TVCKStoreFavoriteItemCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVCKStoreFavoriteItemCellDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)prepareForReuse;
-(CGSize)imageSize;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
@end

