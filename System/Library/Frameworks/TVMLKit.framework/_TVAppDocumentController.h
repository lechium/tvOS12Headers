/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/_TVIKAppDocumentDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>
#import <TVMLKit/_TVPagePerformanceDelegate.h>

@protocol _TVAppDocumentControllerDelegate;
@class IKAppDocument, UIViewController, TVMediaQueryEvaluator, UITapGestureRecognizer, _TVPagePerformanceController, UIView, NSString, NSArray;

@interface _TVAppDocumentController : UIViewController <_TVIKAppDocumentDelegate, UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate> {

	struct {
		unsigned mediaQueryEvaluatorForAppDocumentController : 1;
	}  _delegateFlags;
	BOOL _opaque;
	BOOL _dismissAppOnMenu;
	BOOL _applicationDeactivatedOnMenu;
	BOOL _transitioning;
	BOOL _visualEffectDisablementNeeded;
	IKAppDocument* _appDocument;
	id<_TVAppDocumentControllerDelegate> _delegate;
	UIViewController* _templateViewController;
	/*^block*/id _menuGestureHandler;
	TVMediaQueryEvaluator* _mediaQueryEvaluator;
	UITapGestureRecognizer* _menuGestureRecognizer;
	_TVPagePerformanceController* _pagePerformance;
	UIView* _pagePerformanceView;

}

@property (nonatomic,retain) IKAppDocument * appDocument;                                                            //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain) TVMediaQueryEvaluator * mediaQueryEvaluator;                                            //@synthesize mediaQueryEvaluator=_mediaQueryEvaluator - In the implementation block
@property (nonatomic,retain) UIViewController * templateViewController;                                              //@synthesize templateViewController=_templateViewController - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                              //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic,__weak) UITapGestureRecognizer * menuGestureRecognizer;                                  //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (assign,getter=isVisualEffectDisablementNeeded,nonatomic) BOOL visualEffectDisablementNeeded;              //@synthesize visualEffectDisablementNeeded=_visualEffectDisablementNeeded - In the implementation block
@property (nonatomic,retain) _TVPagePerformanceController * pagePerformance;                                         //@synthesize pagePerformance=_pagePerformance - In the implementation block
@property (nonatomic,retain) UIView * pagePerformanceView;                                                           //@synthesize pagePerformanceView=_pagePerformanceView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVAppDocumentControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                                            //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,copy) id menuGestureHandler;                                                                    //@synthesize menuGestureHandler=_menuGestureHandler - In the implementation block
@property (assign,nonatomic) BOOL dismissAppOnMenu;                                                                  //@synthesize dismissAppOnMenu=_dismissAppOnMenu - In the implementation block
@property (nonatomic,readonly) BOOL applicationDeactivatedOnMenu;                                                    //@synthesize applicationDeactivatedOnMenu=_applicationDeactivatedOnMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)scrollToTop;
-(IKAppDocument *)appDocument;
-(UIViewController *)templateViewController;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(id)initWithAppDocument:(id)arg1 ;
-(void)replaceAppDocumentWithAppDocument:(id)arg1 ;
-(void)setMenuGestureHandler:(id)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(void)setPagePerformance:(_TVPagePerformanceController *)arg1 ;
-(_TVPagePerformanceController *)pagePerformance;
-(void)_updateTemplateViewController;
-(BOOL)isVisualEffectDisablementNeeded;
-(UIView *)pagePerformanceView;
-(void)setTemplateViewController:(UIViewController *)arg1 ;
-(void)_markAndNotifyStylesDirty;
-(TVMediaQueryEvaluator *)mediaQueryEvaluator;
-(BOOL)_isFlowcaseStack;
-(id)_alertControllerWithError:(id)arg1 ;
-(id)_mediaQueryEvaluator;
-(void)setMediaQueryEvaluator:(TVMediaQueryEvaluator *)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)setVisualEffectDisablementNeeded:(BOOL)arg1 ;
-(void)_menuGestureHandler:(id)arg1 ;
-(void)setPagePerformanceView:(UIView *)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)impressionableViewElementsForDocument:(id)arg1 ;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2 ;
-(CGSize)tv_adjustedWindowSizeForDocument:(id)arg1 ;
-(void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2 ;
-(CGSize)formSize;
-(id)menuGestureHandler;
-(BOOL)dismissAppOnMenu;
-(void)setDismissAppOnMenu:(BOOL)arg1 ;
-(BOOL)applicationDeactivatedOnMenu;
-(void)dealloc;
-(void)setDelegate:(id<_TVAppDocumentControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id<_TVAppDocumentControllerDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(NSArray *)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateIdleModeStatus;
-(BOOL)opaque;
-(BOOL)_tvTabBarShouldOverlap;
-(id)childViewControllerForStatusBarHidden;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(BOOL)isTransitioning;
@end

