/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned long long _reasons;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(id)initWithNotificationReasons:(unsigned long long)arg1 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(BOOL)_visitView:(id)arg1 ;
@end

