/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFAboutViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIViewController;

@interface BFFAboutTextViewController : BFFAboutViewController <UIWebViewDelegate> {

	BOOL _includesAdditionalFormatting;
	BOOL _disableLinkNavigation;
	NSString* _titleString;
	NSString* _HTMLString;
	NSString* _linkString;
	UIViewController* _linkedController;
	/*^block*/id _linkTappedBlock;

}

@property (nonatomic,retain) NSString * titleString;                           //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSString * HTMLString;                            //@synthesize HTMLString=_HTMLString - In the implementation block
@property (nonatomic,retain) NSString * linkString;                            //@synthesize linkString=_linkString - In the implementation block
@property (assign,nonatomic) BOOL includesAdditionalFormatting;                //@synthesize includesAdditionalFormatting=_includesAdditionalFormatting - In the implementation block
@property (nonatomic,retain) UIViewController * linkedController;              //@synthesize linkedController=_linkedController - In the implementation block
@property (nonatomic,copy) id linkTappedBlock;                                 //@synthesize linkTappedBlock=_linkTappedBlock - In the implementation block
@property (assign,nonatomic) BOOL disableLinkNavigation;                       //@synthesize disableLinkNavigation=_disableLinkNavigation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)HTMLString;
-(BOOL)includesAdditionalFormatting;
-(NSString *)linkString;
-(BOOL)disableLinkNavigation;
-(id)linkTappedBlock;
-(UIViewController *)linkedController;
-(void)setHTMLString:(NSString *)arg1 ;
-(void)setLinkString:(NSString *)arg1 ;
-(void)setIncludesAdditionalFormatting:(BOOL)arg1 ;
-(void)setLinkedController:(UIViewController *)arg1 ;
-(void)setLinkTappedBlock:(id)arg1 ;
-(void)setDisableLinkNavigation:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
@end

