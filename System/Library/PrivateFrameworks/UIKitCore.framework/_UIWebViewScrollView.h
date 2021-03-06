/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	BOOL _bouncesSetExplicitly;
	BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
	UIWebBrowserView* _browserView;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg1 ;
-(void)_setWebView:(id)arg1 ;
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
@end

