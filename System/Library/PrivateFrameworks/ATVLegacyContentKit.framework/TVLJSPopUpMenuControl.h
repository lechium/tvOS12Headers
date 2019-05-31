/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIViewController, TVLDocument, TVLPopUpMenuElement, TVLLegacyJSContext;

@interface TVLJSPopUpMenuControl : NSObject <ATVUpdatable> {

	UIViewController* _menuViewController;
	BOOL _didLoadPopUpMenu;
	TVLDocument* _feedDocument;
	TVLPopUpMenuElement* _popUpMenuElement;
	OpaqueJSValueRef _popUpMenuRef;
	TVLLegacyJSContext* _context;
	/*^block*/id _onDismiss;

}

@property (nonatomic,__weak,readonly) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,copy) id onDismiss;                                         //@synthesize onDismiss=_onDismiss - In the implementation block
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)_makeJSObjectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_rootViewController;
-(void)_onDismiss;
-(void)_showWithDocument:(id)arg1 ;
-(id)onDismiss;
-(id)initWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)destroyJSObject;
-(void)setOnDismiss:(id)arg1 ;
-(void)dealloc;
-(BOOL)isVisible;
-(TVLLegacyJSContext *)context;
-(void)dismiss;
-(id)initWithContext:(id)arg1 ;
@end
