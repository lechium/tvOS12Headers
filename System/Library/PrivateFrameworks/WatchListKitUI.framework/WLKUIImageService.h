/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKitUI/WatchListKitUI-Structs.h>
@interface WLKUIImageService : NSObject
+(double)iconCornerRadiusForSize:(CGSize)arg1 ;
+(void)fetchIconForInstallable:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
+(id)_keyForInstallable:(id)arg1 size:(CGSize)arg2 ;
+(id)_cachedImageForKey:(id)arg1 ;
+(id)_imageURLForInstallable:(id)arg1 size:(CGSize)arg2 ;
+(void)_cacheImage:(id)arg1 forKey:(id)arg2 ;
+(id)_MD5StringForString:(id)arg1 ;
+(id)_cachePath;
@end

