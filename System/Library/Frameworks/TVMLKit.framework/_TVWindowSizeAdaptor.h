/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {

	UIWindow* _window;

}

@property (nonatomic,__weak,readonly) UIWindow * window;               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGSize adjustedWindowSize; 
-(CGSize)adjustedWindowSize;
-(UIWindow *)window;
-(BOOL)update;
-(id)initWithWindow:(id)arg1 ;
@end
