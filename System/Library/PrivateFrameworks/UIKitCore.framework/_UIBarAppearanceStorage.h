/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _UIBarAppearanceStorage : NSObject {

	NSMutableDictionary* _backgroundImages;

}
+(long long)typicalBarPosition;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(BOOL)hasAnyCustomBackgroundImage;
-(void)setAllBackgroundImages:(id)arg1 ;
-(id)allBackgroundImages;
@end

