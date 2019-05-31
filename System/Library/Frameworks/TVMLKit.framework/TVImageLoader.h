/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVImageLoader <NSObject>
@optional
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(id)URLForObject:(id)arg1;
-(BOOL)hasImageCache;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(id)imageKeyForObject:(id)arg1;
-(void)cancelLoad:(id)arg1;

@end

