/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICanvasMetricsUpdating.h>

@class _UICanvas, NSString;

@interface _UICanvasMetricsLegacyCalculator : NSObject <_UICanvasMetricsUpdating> {

	_UICanvas* _canvas;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UICanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(_UICanvas *)canvas;
-(void)setCanvas:(_UICanvas *)arg1 ;
-(void)updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end
