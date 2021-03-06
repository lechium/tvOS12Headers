/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSMutableDictionary, SiriTVUIButtonTemplateItem, SiriTVUITemplateButton;

@interface SiriTVUITemplateButtonController : SiriTVUITemplateItemViewController {

	NSMutableDictionary* _cachedBackgroundImages;

}

@property (nonatomic,retain) SiriTVUIButtonTemplateItem * templateItem; 
@property (nonatomic,retain) SiriTVUITemplateButton * view; 
@property (nonatomic,retain) NSMutableDictionary * cachedBackgroundImages;              //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
-(void)_updateContentForTraitCollection:(id)arg1 ;
-(BOOL)prefersFocus;
-(id)_imageWithRightBorderOfColor:(id)arg1 fromImage:(id)arg2 forDisplayScale:(double)arg3 ;
-(NSMutableDictionary *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSMutableDictionary *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)_buttonPressed:(id)arg1 ;
@end

