/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSContentItem;

@interface TVCKSearchContentItemViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	BOOL _userDriven;
	BOOL _playTrailer;
	TVSSContentItem* _contentItem;

}

@property (nonatomic,retain) TVSSContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL userDriven;                            //@synthesize userDriven=_userDriven - In the implementation block
@property (assign,nonatomic) BOOL playTrailer;                           //@synthesize playTrailer=_playTrailer - In the implementation block
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(TVSSContentItem *)contentItem;
-(id)siriContext;
-(id)_launchOptions;
-(id)initWithContentItem:(id)arg1 userDriven:(BOOL)arg2 playTrailer:(BOOL)arg3 ;
-(void)setContentItem:(TVSSContentItem *)arg1 ;
-(void)viewDidLoad;
@end
