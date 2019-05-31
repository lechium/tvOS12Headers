/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVAppTemplateController.h>

@class TVImageProxy, TVLayeredImageProxy, NSString;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController> {

	TVImageProxy* _bgImageProxy;
	BOOL _loaded;
	TVLayeredImageProxy* _bgLayeredImageProxy;
	SCD_Struct_TV19 _bgImageLoadingOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_decorateImage:(id)arg1 decorator:(id)arg2 ;
+(id)_backdropImageFromImage:(id)arg1 blurStyle:(long long)arg2 backgroundImageSize:(CGSize)arg3 targetSize:(CGSize)arg4 ;
-(void)loadFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)_isBackdropNeeded;
-(BOOL)_reconfigureOnAppearanceChange;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(long long)preferredStatusBarStyle;
@end
