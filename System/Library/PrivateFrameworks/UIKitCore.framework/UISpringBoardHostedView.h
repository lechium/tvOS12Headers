/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UIWindow;

@interface UISpringBoardHostedView : UIView {

	NSString* _remoteViewIdentifier;
	UIWindow* _remoteWindow;
	BOOL _remoteViewOpaque;

}
-(void)dealloc;
-(void)unregister;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(void)registerWithIdentifier:(id)arg1 andController:(id)arg2 ;
-(id)remoteViewIdentifier;
@end

