/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol SiriTVUITemplateItemViewControllerDelegate;
@class SiriTVUITemplateItem;

@interface SiriTVUITemplateItemViewController : UIViewController {

	SiriTVUITemplateItem* _templateItem;
	id<SiriTVUITemplateItemViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SiriTVUITemplateItem * templateItem;                                       //@synthesize templateItem=_templateItem - In the implementation block
@property (assign,nonatomic,__weak) id<SiriTVUITemplateItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL prefersFocus; 
@property (nonatomic,retain) UIView*<SiriTVUITemplateItemView> view; 
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(BOOL)supportsSwipeDismissal;
-(SiriTVUITemplateItem *)templateItem;
-(void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(CGRect)highlightedTemplateItemFrame;
-(BOOL)prefersFocus;
-(id)initWithTemplateItem:(id)arg1 delegate:(id)arg2 ;
-(id)rootSnippetViewController;
-(void)setDelegate:(id<SiriTVUITemplateItemViewControllerDelegate>)arg1 ;
-(id<SiriTVUITemplateItemViewControllerDelegate>)delegate;
@end

