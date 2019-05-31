/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, SSLookupItem, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _descriptionLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	BOOL _layoutShouldStack;
	BOOL _isAppInstalled;
	SSLookupItem* _storeItem;
	UIImage* _storeItemImage;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) SSLookupItem * storeItem;                                   //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) UIImage * storeItemImage;                                   //@synthesize storeItemImage=_storeItemImage - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAppInstalled;                                        //@synthesize isAppInstalled=_isAppInstalled - In the implementation block
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(void)_updateShouldLayoutStack;
-(void)_updateFonts:(id)arg1 ;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)setStoreItemImage:(UIImage *)arg1 ;
-(void)setStoreItem:(SSLookupItem *)arg1 ;
-(void)updateButtonText;
-(UIImage *)storeItemImage;
-(BOOL)isAppInstalled;
-(void)setIsAppInstalled:(BOOL)arg1 ;
-(SSLookupItem *)storeItem;
-(void)_updateLabelText;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKOfficialAppViewDelegate>)delegate;
-(void)_commonInit;
-(void)_createConstraints;
@end

