/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;
@class UIView, SiriUISashView;

@interface SiriUICardSnippetView : UIView {

	UIView* _cardView;
	SiriUISashView* _sashView;
	id<SiriUICardSnippetViewDataSource> _dataSource;
	id<SiriUICardSnippetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)setCardView:(id)arg1 ;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1 ;
-(id)accessibilityIdentifier;
-(void)setDelegate:(id<SiriUICardSnippetViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUICardSnippetViewDelegate>)delegate;
-(void)reloadData;
-(id<SiriUICardSnippetViewDataSource>)dataSource;
-(void)setDataSource:(id<SiriUICardSnippetViewDataSource>)arg1 ;
@end

