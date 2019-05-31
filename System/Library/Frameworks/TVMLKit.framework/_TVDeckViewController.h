/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, UIView;

@interface _TVDeckViewController : UIViewController {

	BOOL _dissolving;
	/*^block*/id _didDissolveBlock;
	IKViewElement* _deckElement;
	UIView* _pendingView;
	UIView* _currentView;

}

@property (assign,getter=isDissolving,nonatomic) BOOL dissolving;              //@synthesize dissolving=_dissolving - In the implementation block
@property (nonatomic,copy) id didDissolveBlock;                                //@synthesize didDissolveBlock=_didDissolveBlock - In the implementation block
@property (nonatomic,retain) IKViewElement * deckElement;                      //@synthesize deckElement=_deckElement - In the implementation block
@property (nonatomic,retain) UIView * pendingView;                             //@synthesize pendingView=_pendingView - In the implementation block
@property (nonatomic,retain) UIView * currentView;                             //@synthesize currentView=_currentView - In the implementation block
-(void)setCurrentView:(UIView *)arg1 ;
-(UIView *)currentView;
-(void)updateWithDeckElement:(id)arg1 ;
-(void)_scrollingGridViewReady:(id)arg1 ;
-(UIView *)pendingView;
-(void)_dissolveToPendingView;
-(void)setDissolving:(BOOL)arg1 ;
-(id)didDissolveBlock;
-(void)setDidDissolveBlock:(id)arg1 ;
-(void)_deckImageViewReady:(id)arg1 ;
-(BOOL)isDissolving;
-(void)setPendingView:(UIView *)arg1 ;
-(void)_resumePreview;
-(void)_pausePreview;
-(IKViewElement *)deckElement;
-(void)setDeckElement:(IKViewElement *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

