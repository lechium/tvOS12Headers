/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMonogramImageGenerator.h>

@interface _TVMonogramResourceImageGenerator : _TVMonogramImageGenerator
+(BOOL)isResourceURL:(id)arg1 ;
+(id)tintImage:(id)arg1 withColor:(id)arg2 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
@end

